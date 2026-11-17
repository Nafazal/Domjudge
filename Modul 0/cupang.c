#include <stdio.h>
#include <math.h>

int main() {
    int M, B;
    int berbeda, sisaM, sisaB, sama;
    scanf("%d %d", &M, &B);

    berbeda = (int)fmin(M, B);
    sisaM = M - berbeda;
    sisaB = B - berbeda;

    sama = (sisaM + sisaB) / 2;
    printf("%d %d\n", berbeda, sama);
    return 0;
}