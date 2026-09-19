#include<stdio.h>
#include<stdbool.h>

int main(){
   int h, b, t;
   scanf("%d %d %d", &h, &b, &t);
   if (b < 1 || b > 12){
      printf("TIDAK VALID");
      return 0;
   }
   bool kabisat = (t % 400 == 0) || (t % 4 == 0 && t % 100 != 0);
   int harimaks[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   if (b==2 && kabisat){
      harimaks[1] = 29;
   }
   if (h < 1 || h > harimaks[b - 1]) {
      printf("TIDAK VALID\n");
   } else {
      printf("VALID\n");
   } 
   return 0;
}