#include <stdio.h>

int main() {
    FILE *f;
    int summa;
    int soni = 0;

    f = fopen("xaridlar.txt", "r");

    if (f == NULL) {
        printf("Fayl ochilmadi!\n");
        return 1;
    }

    while (fscanf(f, "%d", &summa) == 1) {
        if (summa > 50000) {
            soni++;
        }
    }

    fclose(f);

    printf("Katta xaridlar soni: %d\n", soni);

    return 0;
}