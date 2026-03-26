#include <stdio.h>
int main() {
    int n;
    printf("Masukkan Nilai: ");
    scanf("%d", &n);

    if (n > 84) {
        printf("Predikat Nilai anda adalah A\n");
    } else if (n > 74) {
        printf("Predikat Nilai anda adalah B\n");
    } else if (n > 64){
        printf("Predikat Nilai anda adalah C\n");
    } else {
        printf("Predikat Nilai anda adalah D\n");

    }
    return 0;
}