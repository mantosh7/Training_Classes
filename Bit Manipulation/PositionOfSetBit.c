#include<stdio.h>
#include<math.h>
int main()
{
    int num = 12;
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
    return 0;
}