#include<bits/stdc++.h>
using namespace std;
int main()
{
    int divisor,dividend,ans=0,pow=0;
    bool sign = true;
    cout<<"Enter dividend: ";
    cin>>dividend;
    cout<<"Enter divisor: ";
    cin>>divisor;
    
    int num = abs(dividend);
    int deno = abs(divisor);

    if((divisor<0 && dividend>0) || (dividend<0 && divisor>0)) sign = false;
    while(num>=(deno*(1<<pow)))
    {
        pow++;
    }
    pow = pow-1;
    while(num>=deno)
    {
        if(num>=(deno*(1<<pow)))
        {
            num -= deno*(1<<pow);
            ans += 1<<pow;
        }
        pow--;
    }

    if(sign==false) cout<<ans*(-1);
    else cout<<ans;
}