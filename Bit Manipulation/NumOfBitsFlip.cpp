#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int b = 7;
    int c = a^b;
    int count = 0;
    while(c!=0)
    {
        if(c&1) count++;
        c = c>>1;
    }
    cout<<"The no.of bits to be flipped = "<<count;
    return 0;
}