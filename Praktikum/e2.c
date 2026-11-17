#include<stdio.h>
#include<math.h>

int main(){
    char a, op, b;
    int x,y,hasil;
    scanf("%c %c %c", &a, &op, &b);

    if (a >= 'a' && a <= 'z'){
        x = a - 'a' + 1;
    } else {
        x = a - 'A' + 27;
    }

    if (b >= 'a'&& b <= 'z'){
        y = b - 'a' +1;
    } else {
        y = b - 'A'+27;
    }

    if (op == '+') {
        hasil = x + y;
    } else if (op == '-') {
        hasil = x - y;
    } else if (op == '*') {
        hasil = x * y;
    } else if (op == '/') {
        hasil = x / y;
    } else {
        hasil = x % y;
    }

    hasil = (hasil - 1) % 52;

    if (hasil < 0) {
    hasil = hasil + 52;
    }

    hasil = hasil + 1;
    if (hasil >= 1 && hasil <= 26) {
        printf("%c", 'a' + hasil - 1);
    } else {
        printf("%c", 'A' + hasil - 27);
    }
    return 0;
}
