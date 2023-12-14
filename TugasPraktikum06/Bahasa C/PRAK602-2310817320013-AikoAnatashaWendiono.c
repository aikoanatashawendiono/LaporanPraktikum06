#include <stdio.h>

void belahan_zetsu(int kamar, int zetsu_ruangan[]) {
    int total[kamar];

    for (int i = 0; i < kamar; i++) {
        total[i] = zetsu_ruangan[i] * (i + 1);
    }

    for (int i = 0; i < kamar; i++) {
        printf("%d ", total[i]);
    }
}

int main() {
    int kamar;
    scanf("%d", &kamar);
    
    int zetsu_ruangan[kamar];
    for (int i = 0; i < kamar; i++) {
        scanf("%d", &zetsu_ruangan[i]);
    }

    printf("\n");
    belahan_zetsu(kamar, zetsu_ruangan);

    return 0;
}
