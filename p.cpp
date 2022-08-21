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
