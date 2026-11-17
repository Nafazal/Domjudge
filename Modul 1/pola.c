#include<stdio.h>

int main(){
    int t;
    long long n;

    if (scanf("%d %lld", &t, &n)!=2)return 0;
    if (t==1){
        long long hasil = n*n;
        printf("%lld", hasil);
    } else if (t==2){
        long long hasil = n*n+n;
        printf("%lld", hasil);
    } else if (t==3){
        long long hasil = (n*(n+1)*(2*n+1))/6;
        printf("%lld", hasil);
    } else if (t==4){
        long long hasil = ((n*(n+1))/2)*((n*(n+1))/2);
        printf("%lld", hasil);
    } else {
        printf("MODE TIDAK VALID");
    }
    return 0;
}