#include <stdio.h>

int main() {
    int i, j, k;
    int satir1, sutun1, satir2, sutun2;

    // �lk matrisin boyutunu al
    printf("Birinci matrisin satir sayisini girin: ");
    scanf("%d", &satir1);
    printf("Birinci matrisin sutun sayisini girin: ");
    scanf("%d", &sutun1);

    // �kinci matrisin boyutunu al
    printf("Ikinci matrisin satir sayisini girin: ");
    scanf("%d", &satir2);
    printf("Ikinci matrisin sutun sayisini girin: ");
    scanf("%d", &sutun2);

    // Matris �arp�m� i�in �art: birinci matrisin sutun sayisi, ikinci matrisin satir sayisina esit olmal�
    if (sutun1 != satir2) {
        printf("Matrisler carpilamaz. Sutun sayisi ile satir sayisi uyumlu olmali.\n");
        return 0;
    }

    // Matrisleri tan�mla
    int matris1[satir1][sutun1], matris2[satir2][sutun2], sonuc[satir1][sutun2];

    // Birinci matrisin elemanlar�n� al
    printf("Birinci matrisin elemanlarini girin:\n");
    for (i = 0; i < satir1; i++) {
        for (j = 0; j < sutun1; j++) {
            printf("Matris1[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matris1[i][j]);
        }
    }

    // �kinci matrisin elemanlar�n� al
    printf("Ikinci matrisin elemanlarini girin:\n");
    for (i = 0; i < satir2; i++) {
        for (j = 0; j < sutun2; j++) {
            printf("Matris2[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matris2[i][j]);
        }
    }

    // Matris �arp�m�n� hesapla
    for (i = 0; i < satir1; i++) {
        for (j = 0; j < sutun2; j++) {
            sonuc[i][j] = 0;  // Ba�lang�� olarak her eleman� s�f�r yap
            for (k = 0; k < sutun1; k++) {  // Matris �arpma i�lemi
                sonuc[i][j] += matris1[i][k] * matris2[k][j];
            }
        }
    }

    // Sonu� matrisini yazd�r
    printf("Matrislerin carpimi:\n");
    for (i = 0; i < satir1; i++) {
        for (j = 0; j < sutun2; j++) {
            printf("%d ", sonuc[i][j]);
        }
        printf("\n");
    }

    return 0;
}

