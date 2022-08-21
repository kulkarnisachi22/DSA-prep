//number system conversions

    #include <algorithm>
    #include <iostream>
    #include <vector>
    #include<cmath>
    #include<bits/stdc++.h>
    #include<cstring>

    using namespace std;
    
    int HexadecimalToDecimal(string n)
    {
        int ans=0,x=1;
        int len=n.size();
        for(int i=(len-1);i>=0;i--)
        {
            if(n[i]>='0' && n[i]<='9')
                ans+=x*(n[i]-'0');
            else if(n[i]>='A' && n[i]<='F')              
                ans+=x*((n[i]-'A')+10);
            x*=16;
        }
        
        return ans;
    }
    
    long int DecimalToBinary(long int n)
    {
        long int dig,i=1;
        long int ans=0;
        while(n>0)
        {
            dig=n%2;
            cout<<"dig: "<<dig<<" "<<endl;
            n/=2;
            ans+=dig*i;
            cout<<"ans: "<<ans<<" "<<endl;
            i*=10;
        }
        return ans;
    }
    
    long int DecimalToOctal(long int n) 
    {
        long int dig,i=1;
        long int ans=0;
        while(n>0)
        {
            dig=n%8;
            //cout<<"dig: "<<dig<<" "<<endl;
            n/=8;
            ans+=dig*i;
            //cout<<"ans: "<<ans<<" "<<endl;
            i*=10;
        }
        return ans;
    }
    
    string DecimalToHexadecimal(int n) 
    {
        string ans="";
        int j=0,dig;
        while(n>0)
        {
            dig=n%16;
            //cout<<"dig: "<<dig<<" "<<endl;
            n/=16;
            if(dig>=0 && dig<=9)
            {
                ans+=to_string(dig);
                //cout<<"ans: "<<ans<<" "<<endl;
                
            }
            else if(dig>=10 && dig<=15)
            {
                ans+=char(dig-10+65);
            }
            j+=1;
            //i*=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    
    int main()
    {
        //string n; -- HexadecimalToDecimal
        long int n; //-- DecimalToBinary and DecimalToOctal
        cin>>n;
        
        cout<<endl<<DecimalToHexadecimal(n);
        return 0;
    }   