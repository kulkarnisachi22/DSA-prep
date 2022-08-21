
#include <iostream>
using namespace std;
/*
int func(int a){
    a += 10;
    return a;
}

int main() {
    int a = 5;
    func(a);
    cout << a;
}
*/

//----------------------------------------------------
//To reverse the array ele
// a[5]={1,2,3,4,5}
// O/P: 5 4 3 2 1

void input_array(int a[],int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void reverse_array(int a[],int n)
{
    int temp;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
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
    reverse_array(a,n);
    output_array(a,n);
}
