/* 
Problem Statement: Albhabet Pattern
                    A        A
                    AB      BA
                    ABC    CBA
                    ABCD  DCBA
                    ABCDEEDCBA
                    
*/


#include<stdio.h>
int main()
{
    int n ;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        char ch = 64;
        // 1st pyramid
        for(int j=0;j<=i;j++)
        {
            ch++;
            printf("%c",ch);
        }
        
        // space traingle
        for(int j=2*(n-1)-2*i;j>0;j--)
        {
            printf(" ");
        }
        
        // 2nd pyramid
        for(int j=0;j<=i;j++)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }
    
    return 0;
}