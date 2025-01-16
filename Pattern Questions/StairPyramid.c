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
int main()
{
    int n,space_Count=0,count=0;
    printf("Enter no.of rows:");
    scanf("%d",&n);

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
    return 0;
}