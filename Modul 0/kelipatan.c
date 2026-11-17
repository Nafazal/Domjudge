#include<stdio.h>

int main(){
    long long n;
    scanf("%lld", &n);
    int k3 = (n/2)*(6+(n-1)*3);
    int k5 = (n/2)*(10+(n-1)*5);
    int k15 = (n/2)*(30+(n-1)*15);
    
    long long sum = k3 + k5 - k15;
    printf("%lld", sum);
    return 0;
}
