#include <stdio.h>

int main() {
    int jumlahRuangan;

    // Membaca jumlah ruangan
    scanf("%d", &jumlahRuangan);

    // Mengolah setiap ruangan
    for (int i = 0; i < jumlahRuangan; ++i) {
        int banyakZetsu, hasil = 0;

        // Membaca banyaknya zetsu putih pada setiap ruangan
        scanf("%d", &banyakZetsu);

        // Menghitung jumlah zetsu putih setelah membelah diri
        for (int j = 1; j <= banyakZetsu; ++j) {
            hasil += j * j;
        }

        // Menampilkan hasil untuk setiap ruangan
        printf("%d ", hasil);
    }

    return 0;
}
