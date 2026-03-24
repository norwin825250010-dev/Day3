#include <stdio.h>
int main() {
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Angka POSITIF\n");
    } else if (n < 0) {
        printf("Angka NEGATIF\n");
    } else {
        printf("Angka tersebut adalah NOL\n");
    }
    return 0;
}