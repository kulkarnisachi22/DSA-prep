// Crude selection sort

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    int n, temp;
    // input the size of array
    cin >> n;
    int a[n];

    // input the elements
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Crude Selection Sort
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = (i + 1); j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    // display the ele
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}


//---------------------------------------------------------------------//
//optimised (acc to college syllabus)
#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
    int n, temp, min_index;
    // input the size of array
    cin >> n;
    int a[n];

    // input the elements
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Crude Selection Sort
    for (int i = 0; i < (n - 1); i++)
    {
        min_index = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (a[min_index] > a[j])
            {
                min_index = j;
            }
        }
        if (min_index != i)
        {
            temp = a[min_index];
            a[min_index] = a[i];
            a[i] = temp;
        }
    }

    // display the ele
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

//---------------------------------------------------------------------//
//optimised gfg soln


#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
#include <cstring>

using namespace std;

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

int main()
{
    int n, temp, min_index, max_index;
    // input the size of array
    cin >> n;
    int a[n];

    // input the elements
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Crude Selection Sort
    for (int i = 0, k = (n - 1); i < k; i++, k--)
    {
        min_index = i;
        max_index = i;
        for (int j = (i + 1); j <= k; j++)
        {
            if (a[min_index] > a[j])
            {
                min_index = j;
            }
            if (a[max_index] < a[j])
            {
                max_index = j;
            }
        }
        if (min_index != i)
        {
            swap(a, min_index, i);
        }

        if (a[min_index] == a[max_index]) //didn't understand
            swap(a, k, min_index);
        else
            swap(a, k, max_index);
    }

    // display the ele
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
    