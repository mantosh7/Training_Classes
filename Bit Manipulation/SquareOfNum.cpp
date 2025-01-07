#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;

    int n = num, square=0,power=0;

    while(n!=0)
    {
        if(n&1==1)
        {
            square += num*(1<<power);
        }
        power++;
        n = n>>1;
    }

    cout<<"Square = "<<square;
}