#include<stdio.h>
int main()
{
    int num = 2147483645;
    int count = 0;
    while(num!=0)
    {
        if((num&1)==1) count++;
        num = num>>1;
    }
    printf("No.of set bits = %d",count);
    return 0;
}