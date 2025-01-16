/*
Problem Statement: Draw pattern for n=5
                    5 5 5 5 5 5 5 5 5 
                    5 4 4 4 4 4 4 4 5
                    5 4 3 3 3 3 3 4 5
                    5 4 3 2 2 2 3 4 5
                    5 4 3 2 1 2 3 4 5
                    5 4 3 2 2 2 3 4 5 
                    5 4 3 3 3 3 3 4 5
                    5 4 4 4 4 4 4 4 5
                    5 5 5 5 5 5 5 5 5    
*/


#include <stdio.h>

void printPattern(int n) {
    int size=2*n-1; 
    for (int i=0;i<size;i++) {
        for (int j=0;j<size;j++) {
            int dist;

            if(i<j) {
                dist = i;
            } 
            else {
                dist = j;
            }

            if(size-i-1 < dist) {
                dist = size-i-1;
            }

            if (size-j-1 < dist) {
                dist = size-j-1;
            }

            printf("%d ",n-dist);
        }
        printf("\n"); 
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printPattern(n); 
    return 0;
}
