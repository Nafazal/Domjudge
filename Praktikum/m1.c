#include<stdio.h>
#include<math.h>

int main() {
    long long a, b, R;
    long long m, c;

    scanf("%lld %lld %lld", &a, &b, &R);
    scanf("%lld %lld", &m, &c);

    long long D = pow(m*a-b+c, 2);
    long long K = R * (pow(m,2) + 1);

    if (D > K) {
        printf("We're so back.");
    } 
    else if (D == K) {
        printf("Kegores dikit ga ngaruh.");
    } 
    else {
        printf("We're cooked.");
    }

    return 0;
}