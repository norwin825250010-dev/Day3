#include <stdio.h>
int main() {
    int angka;
    printf("Masukkan angka: ");
    scanf("%d", &angka);

    if (angka % 2 == 0) {
        printf("Angka %d adalah GENAP\n", angka);
    } else {
        printf("Angka %d adalah GANJIL\n", angka);
    }
    return 0;
}