#include<stdio.h>
#include<math.h>
int main(){
    long long n;
    scanf("%lld",&n);
    abs(n);

    long long jawaban = (int)sqrt(n);

    printf("%lld",jawaban);
    return 0;
}
