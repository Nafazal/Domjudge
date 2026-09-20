#include <stdio.h>
#include <math.h>

int main() {
    int M, V;
    int jam;
    int tarif;

    scanf("%d %d", &M, &V);

    jam = ceil(M / 60.0);

    if (jam == 1) {
        tarif = 3000;
    } else {
        tarif = 3000 + (jam - 1) * 2000;
    }

    if (tarif > 25000) {
        tarif = 25000;
    }

    if (V == 1) {
        tarif = tarif + 1000;
    }

    printf("%d\n", tarif);

    return 0;
}
