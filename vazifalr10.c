#include <stdio.h>

int binary_search(int books[], int n, int id) {
    int chap = 0;
    int ong = n - 1;

    while (chap <= ong) {
        int orta = (chap + ong) / 2;

        if (books[orta] == id) {
            return orta;
        }

        if (books[orta] < id) {
            chap = orta + 1;
        } else {
            ong = orta - 1;
        }
    }

    return -1;
}

int main() {
    int books[12] = {
        102, 115, 128, 143,
        157, 169, 184, 201,
        218, 235, 249, 270
    };

    int id;
    scanf("%d", &id);

    int indeks = binary_search(books, 12, id);

    if (indeks != -1) {
        printf("Kitob indeksi: %d\n", indeks);
    } else {
        printf("Kitob topilmadi\n");
    }

    return 0;
}