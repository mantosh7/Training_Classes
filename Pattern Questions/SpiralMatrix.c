#include <stdio.h>

void printSpiral(int matrix[][5], int n) {
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        int num = ((n * n - n) + 1);
        int num2 = (n - 2) * (n - 2) + 1;

        for (int i = left; i <= right; i++) {
            matrix[top][i] = num++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = num2++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = num2++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = num2++;
            }
            left++;
        }

        n -= 2;
    }
}

void printmatrix(int matrix[][5], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[5][5] = {0}; // Initialize a 5x5 matrix with zeros
    int n = 5;

    printSpiral(matrix, n); // Fill the matrix with the spiral pattern
    printmatrix(matrix, n); // Print the matrix

    return 0;
}
