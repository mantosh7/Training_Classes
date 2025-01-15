/*
Problem Statement:  Hollow Hourglass Pattern for n=5
                    
                    ABCDEFGHI
                     A     G
                      A   E
                       A C
                        A
                       A C
                      A   E
                     A     G
                    ABCDEFGHI
*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter no.of rows:");
    scanf("%d:",&n);
    
    int col = 2*n-1;
    
    // Upper Part
    for(int i=0;i<n;i++)
    {
        char ch = 64; 
        
        // spaces
        for(int j=0;j<i;j++)
        {
            printf(" ");
        } 
        
        // Alphabet pyramid
        for(int j=0;j<col-2*i;j++)
        {
            ch++;
            if(i==0||j==0||j==col-1-2*i)
            {
                printf("%c",ch);
            }
            else printf(" ");
        }
        printf("\n");
    }
    
    // Lower Part
    for(int i=1;i<n;i++)
    {
        char ch = 64;
        // spaces
        for(int j=(n-1)-i;j>0;j--)
        {
            printf(" ");
        }
        
        // Alphabet pyramid
        for(int j=0;j<2*i+1;j++)
        {
            ch++;
            if(j==0||i==n-1||j==2*i)
            {
                printf("%c",ch);
            }
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}