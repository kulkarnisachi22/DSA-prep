#include<iostream>
using namespace std;

void input_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}

/*
trying

void subset_array(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=a[j];
        }
    }
}
*/

int binary(int input[],int n,int val)
{
    int begg=0, ending=n-1, mid=0;
    while(begg<=ending)
    {
        mid=(begg+ending)/2;
        if(input[mid]==val)
            return mid;
        else if(input[mid]<val)
            begg = mid+1;
        else
            ending = mid-1;
    }
    return -1;
}

void output_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n, x, t;
    cout<<"enter t: ";
    cin>>t;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int a[10];
    cout<<endl<<"Enter ele: "<<endl;
    input_array(a,n);
    while(t--)
    {
        cout<<endl<<"Enter key: "<<endl;
        cin>>x;
        //subset_array(a,n);
        cout<<endl<<"ans: "<<binary(a,n,x);
        //output_array(a,n);
    }
}
