#include <iostream>
using namespace std;

//max of 3 numbers
//------------------------------------------------------------------//

/* isn't working :/
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;

    cout<<a<<b<<c;

    if(a>b)
    {
        if(a>c)
        {
            cout<<"a";
        }
        else
        {
            cout<<"c";
        }
    }
    else
    {
        if(b>c)
            cout<<"b";
        else
            cout<<"c";
    }
    return 0;
}
*/


/*works :)
int main()
{
    int a=1000,b=200,c=30;

    
    //int a,b,c;
    //cin>>a>>b>>c;
    
    if(a>b)
    {
        if(a>c)
        {
            cout<<"a";
        }
        else
        {
            cout<<"c";
        }
    }
    else
    {
        if(b>c)
            cout<<"b";
        else
            cout<<"c";
    }
    return 0;
}
*/

//------------------------------------------------------------------//
//number is odd or even


int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    if(n%2==0)
    {
        cout<<"even\n";
        cout<<"hey";
    }
    else
        cout<<"odd"<<endl;
    return 0;
}
