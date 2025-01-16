/*
Problem Statement: Draw the pattern for n=3
                   *
                   **
                   ***
                      *
                      **
                      ***
                         *
                         **
                         ***
*/

#include<stdio.h>

void pattern(int n)
{
    int space_Count=0,count=0;
    for(int l=0;l<n;l++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<space_Count;j++)
            {
                printf(" ");
            }

            for(int j=0;j<=i;j++)
            {
                printf("*");
            }
            count++;
            printf("\n");
        }
        space_Count = count;
    }
}

int main()
{
    int n;
    printf("Enter no.of rows:");
    scanf("%d",&n);

    pattern(n);

    return 0;
}