/*
Problem statement: Draw pattern for n=5

                   *****        *****
                     ****      ****
                       ***    ***
                         **  **
                           **
                         **  **
                       ***    ***
                     ****      ****
                   *****        *****      
*/

#include<stdio.h>

void pattern(int n)
{
    // Upper Part
    for(int i=0;i<n;i++)
    {
        // starting spaces
        for(int j=0;j<2*i;j++)
        {
            printf(" ");
        }
        // stars
        for(int j=0;j<n-i;j++)
        {
            printf("*");
        }
        // Inverted pyramid of spaces
        for(int j=0;j<(2*n-2)-2*i;j++)
        {
            printf(" ");
        }
        // stars
        for(int j=0;j<n-i;j++)
        {
            printf("*");
        }
        printf("\n");        
    }

    // Lower Part
    for(int i=0;i<n-1;i++)
    {
        // spaces
        for(int j=0;j<(2*n-4)-2*i;j++)
        {
            printf(" ");
        }
        // stars
        for(int j=0;j<i+2;j++)
        {
            printf("*");
        }
        // pyramid of spaces
        for(int j=0;j<2*i+2;j++)
        {
            printf(" ");
        }
        // stars
        for(int j=0;j<i+2;j++)
        {
            printf("*");
        }
        printf("\n");
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