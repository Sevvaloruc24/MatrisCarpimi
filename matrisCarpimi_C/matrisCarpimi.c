#include <stdio.h>

int main() {
    int i, j, k;
    int satir1, sutun1, satir2, sutun2;

    // Ýlk matrisin boyutunu al
    printf("Birinci matrisin satir sayisini girin: ");
    scanf("%d", &satir1);
    printf("Birinci matrisin sutun sayisini girin: ");
    scanf("%d", &sutun1);

    // Ýkinci matrisin boyutunu al
    printf("Ikinci matrisin satir sayisini girin: ");
    scanf("%d", &satir2);
    printf("Ikinci matrisin sutun sayisini girin: ");
    scanf("%d", &sutun2);

    // Matris çarpýmý için þart: birinci matrisin sutun sayisi, ikinci matrisin satir sayisina esit olmalý
    if (sutun1 != satir2) {
        printf("Matrisler carpilamaz. Sutun sayisi ile satir sayisi uyumlu olmali.\n");
        return 0;
    }

    // Matrisleri tanýmla
    int matris1[satir1][sutun1], matris2[satir2][sutun2], sonuc[satir1][sutun2];

    // Birinci matrisin elemanlarýný al
    printf("Birinci matrisin elemanlarini girin:\n");
    for (i = 0; i < satir1; i++) {
        for (j = 0; j < sutun1; j++) {
            printf("Matris1[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matris1[i][j]);
        }
    }

    // Ýkinci matrisin elemanlarýný al
    printf("Ikinci matrisin elemanlarini girin:\n");
    for (i = 0; i < satir2; i++) {
        for (j = 0; j < sutun2; j++) {
            printf("Matris2[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matris2[i][j]);
        }
    }

    // Matris çarpýmýný hesapla
    for (i = 0; i < satir1; i++) {
        for (j = 0; j < sutun2; j++) {
            sonuc[i][j] = 0;  // Baþlangýç olarak her elemaný sýfýr yap
            for (k = 0; k < sutun1; k++) {  // Matris çarpma iþlemi
                sonuc[i][j] += matris1[i][k] * matris2[k][j];
            }
        }
    }

    // Sonuç matrisini yazdýr
    printf("Matrislerin carpimi:\n");
    for (i = 0; i < satir1; i++) {
        for (j = 0; j < sutun2; j++) {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }

    return 0;
}

