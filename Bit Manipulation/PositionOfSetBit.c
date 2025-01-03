#include<stdio.h>

void position_set_bit(int num)
{
    int pos = 0;
    while(num>0)
    {
        if(num&1)
        {
            printf("%d ",pos);
        }
        pos++;
        num = num>>1;
    }
}

int main()
{
    int num = 12;
    position_set_bit(num);
    return 0;
}