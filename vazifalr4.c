#include <stdio.h>

int main() {
    int a[3][4];
    int qator, orin;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &qator, &orin);

    if (a[qator - 1][orin - 1] == 1) {
        printf("%d-qator, %d-orindiq: Band\n", qator, orin);
    } else {
        printf("%d-qator, %d-orindiq: Bosh\n", qator, orin);
    }

    return 0;
}