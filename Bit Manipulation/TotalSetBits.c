#include <stdio.h>
#include <math.h>
int main()
{
    int num = 10;
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        int j = i;
        while (j > 0)
        {
            if (j & 1) count++;
            j = j >> 1;
        }
    }
    printf("Total no.of Set Bits = %d",count);
    return 0;
}