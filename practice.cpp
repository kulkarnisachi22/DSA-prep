#include<iostream>
using namespace std;

void input_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void sorting(int a[],int n)
{
    int temp;
    for(int i=0;i<n-2;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<i<<" "<<i+1<<endl;
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
}

void selection_sort(int a[],int n)
{
    int temp,m;
    for(int i=0;i<n-1;i++)
    {
        m=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[m]>a[j])
                m=j;
        }
        temp=a[m];
        a[m]=a[i];
        a[i]=temp;

    }
}

void bubble_sort(int a[],int n)
{
    int temp,m;
    for(int i=0;i<n-1;i++)
    {
        //m=i;
        //cout<<i<<" ";
        for(int j=0;j<n-i-1;j++)
        {
            //cout<<j<<endl;
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void output_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n;
    cin>>n;
    int a[10];
    input_array(a,n);
    //selection_sort(a,n);
    //bubble_sort(a,n);
    //sorting(a,n);

    output_array(a,n);
}
