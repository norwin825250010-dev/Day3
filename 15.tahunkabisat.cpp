#include <stdio.h>

int main() {
    int tahun;

    printf("Masukkan tahun untuk cek kabisat atau bukan : ");
    scanf("%d", &tahun);

    if (tahun % 4 == 0){        
        printf("%d merupakan tahun kabisat", tahun);
    } else {
        printf("%d bukan merupakan tahun kabisat", tahun);
    }

    return 0;
}