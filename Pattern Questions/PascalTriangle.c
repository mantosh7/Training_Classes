/*
Problem Statement: Pascal’s Triangle for n=5
                             1
                            1 1
                           1 2 1
                          1 3 3 1
                         1 4 6 4 1    
*/

#include<stdio.h>

int fact(int n)
{
    if(n==0||n==1) return 1;
    int factorial = n*fact(n-1);
    return factorial;
}

int comb(int i,int j)
{
    int x = fact(i)/(fact(i-j)*fact(j));
    return x;
}

void pattern(int n)
{
    int x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            x = comb(i,j);
            printf("%d ",x);
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