 #include <stdio.h>

struct Xodim {
    char ism[50];
    int soat;
};

int main() {
    FILE *f;
    struct Xodim x[100];
    int n;

    f = fopen("xodimlar.txt", "r");

    if (f == NULL) {
        printf("Fayl ochilmadi!\n");
        return 1;
    }

    fscanf(f, "%d", &n);

    for (int i = 0; i < n; i++) {
        fscanf(f, "%49s %d", x[i].ism, &x[i].soat);
    }

    fclose(f);

    for (int i = 0; i < n; i++) {
        printf("%s: %d som\n", x[i].ism, x[i].soat * 15000);
    }

    return 0;
}