#include<stdio.h>

int main(){
    int detik;
    int menit;
    int jam;
    scanf("%d", &detik);
    jam = detik / 3600;
    menit = (detik % 3600) / 60;
    detik = detik % 60;
    printf("%d jam %d menit %d detik\n", jam, menit, detik);
}