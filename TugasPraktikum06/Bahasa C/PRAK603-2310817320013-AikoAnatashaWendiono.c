#include <stdio.h>

int main() {
    int angka1, angka2;

    scanf("%d %d", &angka1, &angka2);

    if (angka1 != angka2) {
        printf("\nJumlah tidak sama\n");
    } else {
        int hasil[2 * angka1];

        for (int i = 0; i < 2 * angka1; ++i) {
            scanf("%d", &hasil[i]);
        } 
    printf("\n");

        for (int i = 0; i < angka1; ++i) {
            printf("%d ", hasil[i] * hasil[i + angka1]);
        } 
    }
    return 0;
}
