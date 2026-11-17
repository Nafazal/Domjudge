#include<stdio.h>

int main(){
    long long a, b, c, p, q, r, x;
    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &p, &q, &r);

    long long d  = (a * q) - (b * p);
    long long dx = (c * q) - (b * r);
    long long dy = (a * r) - (c * p);


    if (d != 0){
        double x = (double)dx / d;
        double y = (double)dy / d;
        if (x == -0.0) {
            x = 0.0;
        }
        if (y == -0.0) {
            y = 0.0;
        }

        printf("SATU SOLUSI\n%.2lf %.2lf", x, y);
    } else if (dx == 0 && dy == 0){
        printf("BANYAK SOLUSI");
    } else {
        printf("TIDAK ADA SOLUSI");
    }
    return 0;
}