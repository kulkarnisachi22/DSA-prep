#include<iostream>
#include<climits>

using namespace std;

void input_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void selection_sort(int a[],int n)
{
    int m,temp;
    for(int i=0;i<n-1;i++)
    {
        m = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[m]>a[j])
                m=j;
        }
        temp = a[i];
        a[i] = a[m];
        a[m] = temp;
    }
}

void output_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n, x;

    cout<<"Enter n: "<<endl;
    cin>>n;
    int a[10];
    cout<<endl<<"Enter ele: "<<endl;
    input_array(a,n);

    selection_sort(a,n);

    output_array(a,n);

}
