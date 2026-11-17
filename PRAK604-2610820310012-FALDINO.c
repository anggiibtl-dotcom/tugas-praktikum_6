#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], pesan[100];
    fgets(kode, sizeof(kode), stdin);
    fgets(pesan, sizeof(pesan), stdin);

    kode[strcspn(kode, "\n")] = '\0';
    pesan[strcspn(pesan, "\n")] = '\0';

    int len1 = strlen(kode);
    int len2 = strlen(pesan);

    if (len1 != len2) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        int bintang = 0, pagar = 0;
        for (int i = 0; i < len1; i++) {
            if (kode[i] == ' ' && pesan[i] == ' ') {
                printf(" ");
            } else if (kode[i] == pesan[i]) {
                printf("*");
                bintang++;
            } else {
                printf("#");
                pagar++;
            }
        }
        printf("\n* = %d\n# = %d\n", bintang, pagar);
        if (bintang >= pagar) {
            printf("Pesan Asli\n");
        } else {
            printf("Pesan Palsu\n");
        }
    }
    return 0;
}