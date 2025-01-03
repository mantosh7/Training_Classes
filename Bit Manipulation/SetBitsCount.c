#include<stdio.h>

int count_set_bits(int num)
{
    int count = 0;
    while(num!=0)
    {
        if((num&1)==1) count++;
        num = num>>1;
    }
    return count;
}
int main()
{
    int num = 2147483645;
    int count = count_set_bits(num);
    printf("No.of set bits = %d",count);
    return 0;
}