#include <stdio.h>

int main() {
    int total;
    float bayar; 

    printf("Masukkan harga (Misal 150 untuk 150rb): ");
    scanf("%d", &total);

    if (total > 100) {
        bayar = total - (total * 0.1); 
        printf("Anda mendapatkan diskon 10%!\n");
        printf("Total belanja anda: %.0f\n", bayar); 
    } else {
        printf("Total belanja anda: %d\n", total);
    }

    return 0;
}