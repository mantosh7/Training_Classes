#include<stdio.h>

void power_or_not(int num)
{
    int count = 0;
    while(num!=0)
    {
        if((num&1)==1) count++;
        num = num>>1;
    }
    if(count==1) printf("true");
    else printf("false");
    return;
}

int main()
{
    int num = 8;
    power_or_not(num);
    return 0;
}