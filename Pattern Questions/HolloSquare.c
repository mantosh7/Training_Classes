/* 
Problem Statement: Hollow Square Pattern for n=5 

                    12345
                    1   5
                    1   5
                    1   5
                    12345
*/


#include<stdio.h>
int main()
{
    int n ;
    printf("Enter no.of rows:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int num = 1;
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                printf("%d",num);
            }
            else printf(" ");
            num++;
        }
        printf("\n");
    }
    
    return 0;
}