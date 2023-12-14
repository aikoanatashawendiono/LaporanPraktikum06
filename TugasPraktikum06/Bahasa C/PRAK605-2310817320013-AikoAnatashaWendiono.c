#include <stdio.h>

void perkalian_matriks(int A[100][100], int B[100][100], int hasil[100][100], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            hasil[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                hasil[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void display_matriks(int matrix[100][100], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d", matrix[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int x;

    scanf("%d", &x);

    int A[100][100], B[100][100], hasil[100][100];

    printf("Matriks A\n");
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Matriks B\n");
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < x; ++j) {
            scanf("%d", &B[i][j]);
        }
    }

    perkalian_matriks(A, B, hasil, x);

    printf("Matriks AXB\n");
    display_matriks(hasil, x);

    return 0;
}
