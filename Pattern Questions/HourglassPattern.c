/* 
Problem Statement:  Hourglass Pattern for n=5 n

                    ABCDEFGHI
                     ABCDEFG
                      ABCDEF
                       ABC
                        A
                       ABC
                      ABCDE
                     ABCDEFG
                    ABCDEFGHI
                    
*/


#include<stdio.h>
int main()
{
    int n ;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    
    // Upper Part
    for(int i=0;i<n;i++)
    {
        char ch = 64;
        // 1st pyramid [space]
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        // 2nd Pyramid [Alphabet]
        for(int  j=2*n-1-2*i;j>0;j--)
        {
            ch++;
            printf("%c",ch);
        }
        printf("\n");
    }
    
    // Lower Part
    for(int i=0;i<n-1;i++)
    {
        char ch = 64;
        // 1st pyramid [space]
        for(int j=(n-2)-i;j>0;j--)
        {
            printf(" ");
        }
        // 2nd pyramid [Alphabet]
        for(int j=0;j<2*i+3;j++)
        {
            ch++;
           printf("%c",ch);
        }
        printf("\n");
    }
    
    return 0;
}