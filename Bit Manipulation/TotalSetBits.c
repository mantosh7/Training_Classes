#include <stdio.h>

int count_total_set(int num)
{
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
    return count;
}
int main()
{
    int num = 5;
    int count = count_total_set(num);
    printf("Total no.of Set Bits = %d",count);
    return 0;
}