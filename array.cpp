//Max and min from an array of int
//new things -- INT_MIN and INT_MAX
//              max and min -- in-built fns

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int max_no = INT_MIN, min_no = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // if(max<a[i])
        //     max=a[i];
        max_no = max(max_no, a[i]);

        // if(min>a[i])
        //     min=a[i];
        min_no = min(min_no, a[i]);
    }
    cout << max_no << "   " << min_no;
    return 0;
}

//------------------------------------------------------------------//  
//linear search
//what's new: how to pass an array to a fn

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int finding(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
            return (i);
    }
    return (-1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << finding(a, n, key);

    return 0;
}

//------------------------------------------------------------------//  
//binary search
//recursive fn
//the comment is the noob/direct method 

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int finding(int a[], int n, int key, int begg, int end)
{
    int mid;
    while (begg <= end)
    {
        mid = (begg + end) / 2;
        if (a[mid] == key)
            return (mid);
        else if (a[mid] < key)
            //begg=mid+1
            return (finding(a, n, key, (mid + 1), end));
        else
            //end=mid-1
            return (finding(a, n, key, begg, (mid - 1)));
    }
    return (-1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    int key;
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int begg = 0, end = (n - 1);
    cout << finding(a, n, key, begg, end);

    return 0;
}