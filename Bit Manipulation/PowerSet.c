#include<stdio.h>
#include<math.h>
void power_set(int arr[],int n)
{
    int data;
    for(int i=0;i<pow(2,n);i++)
    {
        int pos = 0;
        data = i;
        while(data!=0)
        {
            if(data&1)
            {
                printf("%d ",arr[pos]);
            }
            pos++;
            data = data>>1;
        }
        printf("\n");
    }
    return;
}

int main()
{
    int num[] = {1,2,3};
    int n = sizeof(num)/sizeof(num[0]);
    power_set(num,n);
    return 0;
}