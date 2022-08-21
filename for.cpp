#include <iostream>
using namespace std;

//------------------------------------------------------------------//
//to print sum of number until n

int main()
{
    int n=5,sum1=0;
    for(int i=0;i<=n;i++)
    {
        sum1=sum1+i;
    }
    cout<<sum1;
    return 0;
}

//------------------------------------------------------------------//
//jump statements
//prime number
//how i do
//check next prog!
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int n, flag=0;
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"prime";
    else
        cout<<"composite";
    
	return 0;
}

//apna college way

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    // i needs to be defined outside.

    int n, i;
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            break;
    }
    if (i == n)
        cout << "prime";
    else
        cout << "composite";

    return 0;
}

//------------------------------------------------------------------//
//hollow rectangle
// * * * *
// *     *
// *     *
// *     *
// * * * *

//my way

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, col;
    cin >> row >> col;
    for (i = 1; i <= row; i++)
    {
        if (i == 1 || i == row)
        {
            for (j = 1; j <= col; j++)
                cout << "* ";
        }
        else
        {
            for (j = 1; j <= col; j++)
            {
                if (j == 1 || j == col)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

//apna college way (ACW)
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, col;
    cin >> row >> col;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

//------------------------------------------------------------------//
//half pyramid after 180 degree rotation
//          *
//       *  *
//    *  *  *
// *  *  *  *

//my way
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, k, row;
    cin >> row;
    for (i = row; i >= 1; i--)
    {
        for (j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (k = 1; k <= (row - i + 1); k++)
            cout << " *";
        cout << endl;
    }
    return 0;
}

//ACW

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if (j <= row - i)
                cout << "  ";
            else
                cout << " *";
        }
        cout << endl;
    }
    return 0;
}

//------------------------------------------------------------------//
//for the pattern: butterfly.png (in the same folder - cpp)
//ACW
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k, space;
    cin >> row;
    int a = 0;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space = 2 * row - 2 * i;
        for (k = 1; k <= space; k++)
            cout << "  ";

        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        space = 2 * row - 2 * i;
        for (k = 1; k <= space; k++)
            cout << "  ";

        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}


//------------------------------------------------------------------//
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
//ACW

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return 0;
}

//------------------------------------------------------------------//
//for the patten: rhombus.png
//i got it (IGI) and ACW

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k, space;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        space = row - i;
        for (k = 1; k <= space; k++)
            cout << "  ";
        for (j = 1; j <= row; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}

//------------------------------------------------------------------//
//pattern: number.png
//IGI

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k, space;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (k = 1; k <= row - i; k++)
            cout << " ";
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}


//------------------------------------------------------------------//
//pattern: palindromic.png
//IGI

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k, space;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
            cout << "  ";
        for (k = i; k >= 1; k--)
            cout << k << " ";
        for (k = 2; k <= i; k++)
            cout << k << " ";

        cout << endl;
    }
    return 0;
}

//ACW
//acw palindromic.png


//------------------------------------------------------------------//
//pattern: star.png
//IGI

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k, space;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
            cout << "  ";
        for (k = i; k >= 1; k--)
            cout << "* ";
        for (k = 2; k <= i; k++)
            cout << "* ";

        cout << endl;
    }
    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= row - i; j++)
            cout << "  ";
        for (k = i; k >= 1; k--)
            cout << "* ";
        for (k = 2; k <= i; k++)
            cout << "* ";

        cout << endl;
    }
    return 0;
}

//ACW
//IGI with Hint
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k, space;
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= row - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
    return 0;
}

//------------------------------------------------------------------//
//pattern: zig zag.png -- for n=9
//ACW -- not generalised

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Your code goes here;
    int i, j, row, k, space;
    cin >> row;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if (((i + j) % 4 == 0) || (j % 4 == 0 && i == 2))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

//------------------------------------------------------------------//
//pattern: palindromic 2.0.png -- for n=4

#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        k=1;
        for(int j=1;j<=n;j++)
        {
            if(j<=n-i)
                cout<<' ';
            else
                cout<<k++;
        }
        k--;
        for(int j=1;j<i;j++)
        {
            cout<<--k;
        }
        cout<<endl;
    }
}

//------------------------------------------------------------------//
// ABCD
// ABCD
// ABCD
// ABCD
//my way

#include <iostream>
using namespace std;
int main()
{
    int n;
    char c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        c=65;
        for(int j=1;j<=n;j++)
        {
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}

//Coding Ninjas way
//the change --- cout<<char('A'+j-1); --- line 553

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<char('A'+j-1);
        }
        cout<<endl;
    }
}


//------------------------------------------------------------------//
//pattern: diamond.png -- for n=5
//IGI

#include<iostream>
using namespace std;

int main()
{
	int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++)
    {
    	for(int k=1;k<=(n/2+1)-i;k++)
            cout<<' ';
        for(int j=1;j<=i*2-1;j++)
            cout<<'*';
        cout<<endl;
    }
    for(int i=n;i>=n/2+2;i--)
    {
    	for(int j=1;j<=n-i+1;j++)
            cout<<' ';
        for(int k=(i-n/2+1)*2-4;k>1;k--)
            cout<<'*';
        cout<<endl;
    }
}



