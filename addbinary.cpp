//to add 2 binary numbers

#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>

int fn1(int a,int b) //addBinary
    {
        int dig1,dig2,pcarry=0,i=1,ans=0,dig;
        while (a>0 && b>0)
        {
            dig1=a%10;
            dig2=b%10;
            cout<<"dig1: "<<dig1<<endl;
            cout<<"dig2: "<<dig2<<endl;
            dig=dig1+dig2;
            cout<<"dig: "<<dig<<endl;
            if(dig==0)
            {
                if(pcarry==0)
                {
                    ans+=0*i;
                }
                else
                {
                    ans+=1*i;    
                }
            }
            else if(dig==1)
            {
                if(pcarry==0)
                {
                    ans+=dig*i;
                }
                else
                {
                    ans+=0*i;
                    pcarry=1;
                }
            }
            else if(dig==2)
            {
                if(pcarry==0)
                {
                    ans+=0*i;
                    pcarry=1;
                }
                else
                {
                    ans+=1*i;
                    pcarry=1;
                }
            }
            cout<<"while ans: "<<ans<<endl;
            cout<<"while pcarry: "<<pcarry<<endl;
            i*=10;
            a/=10;
            b/=10; 
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<b<<endl;
        }
        
        if(a>0)
        {
            while(a>0)
            {
                dig1=a%10;
                cout<<"if dig1: "<<dig1<<endl;
                if(dig1==0)
                {
                    if(pcarry==0)
                    {
                        ans+=0*i;
                        i*=10;
                        cout<<"if a0 ans: "<<ans<<endl;
                    }
                    else
                    {
                        ans+=1*i;
                        i*=10;
                        cout<<"if a0 ans: "<<ans<<endl;
                    }
                }
                else
                {
                    if(pcarry==0)                        
                    {
                        ans+=1*i;
                        i*=10;
                        cout<<"if a1 ans: "<<ans<<endl;
                    }
                    else
                    {
                        ans+=0*i;
                        i*=10;
                        pcarry=1;
                    }
                }
                a/=10;
                cout<<"if a: "<<a<<endl;
            }
        }
        
        if(b>0)
        {
            while(b>0)
            {
                dig2=b%10;
                cout<<"if dig2: "<<dig2<<endl;
                if(dig2==0)
                {
                    if(pcarry==0)
                    {
                        ans+=0*i;
                        i*=10;
                        cout<<"if b0 ans: "<<ans<<endl;
                    }
                    else
                    {
                        ans+=1*i;
                        i*=10;
                        cout<<"if b0 ans: "<<ans<<endl;
                    }
                }
                else
                {
                    if(pcarry==0)                        
                    {
                        ans+=1*i;
                        i*=10;
                        cout<<"if b1 ans: "<<ans<<endl;
                    }
                    else
                    {
                        ans+=0*i;
                        i*=10;
                        pcarry=1;
                    }
                }
                b/=10;
                cout<<"if b: "<<a<<endl;
            }
        }
        
        if(pcarry==1)
        {
            ans+=1*i;
        }
        
        return ans;
    }


int main()
{
        //string n; -- HexadecimalToDecimal
        //long int n; //-- DecimalToBinary and DecimalToOctal
        int a,b; //--addBinary
        cin>>a>>b;
        
        cout<<endl<<fn1(a,b);
        return 0;
}   