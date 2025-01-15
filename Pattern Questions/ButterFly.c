/* 
Problem Statement: Print Butterfly Pattern
                     *       *
                     **     **
                     ***   ***
                     **** ****
                     *********
                     **** ****
                     ***   ***
                     **     **
                     *       *
*/


#include<stdio.h>
int main()
{
    int n ;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    
    // Upper Half

    for(int i=0;i<n-1;i++)
    {
        // 1st traiangle
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        // space
        for(int j=2*(n-1)-1-2*i;j>0;j--)
        {
            printf(" ");
        }
        // 2nd traingle
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=0;i<2*n-1;i++)
    {
        printf("*");
    }
    printf("\n");
    
    //  Lower part
    for(int i=0;i<n-1;i++)
    {
        // 1st traingle
        for(int j=n-1-i;j>0;j--)
        {
            printf("*");
        }
        // spaces
        for(int j=0;j<2*i+1;j++)
        {
            printf(" ");
        }
        // 2nd traingle
        for(int j=n-1-i;j>0;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}