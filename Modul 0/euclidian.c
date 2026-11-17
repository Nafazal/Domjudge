#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    double jarak;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    jarak = sqrt((x2 - x1) * (x2 - x1) +
                 (y2 - y1) * (y2 - y1));

    printf("%.2f\n", jarak);

    return 0;
}