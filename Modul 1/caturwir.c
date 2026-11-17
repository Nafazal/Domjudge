#include <stdio.h>

int main() {
    char x1, y1, x2, y2;
    scanf(" %c %c %c %c", &x1, &y1, &x2, &y2);
    

    int dx = x1-x2;
    int dy = y1-y2;
    
    if (dx<0) {
        dx = -dx;
    }
    if (dy<0) {
        dy = -dy;
    }
    if (dx == 0 && dy == 0) {
        printf("TIDAK ADA\n");
        return 0;
    }
    int kuda = 0, benteng = 0, gajah = 0, ratu = 0;
    
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
        kuda = 1;
    }
    
    if ((dx == 0 && dy > 0) || (dx > 0 && dy == 0)) {
        benteng = 1;
    }
    
    if (dx == dy && dx > 0) {
        gajah = 1;
    }
    
    if (benteng == 1 || gajah == 1) {
        ratu = 1;
    }
    
    if (kuda == 0 && benteng == 0 && gajah == 0 && ratu == 0) {
        printf("TIDAK ADA\n");
    } else {
        int cetak = 0;
        
        if (kuda == 1) {
            printf("KUDA");
            cetak = 1;
        }
        
        if (benteng == 1) {
            if (cetak == 1) printf(" ");
            printf("BENTENG");
            cetak = 1;
        }
        
        if (gajah == 1) {
            if (cetak == 1) printf(" ");
            printf("GAJAH");
            cetak = 1;
        }
        
        if (ratu == 1) {
            if (cetak == 1) printf(" ");
            printf("RATU");
        }
        
        printf("\n");
    }
    
    return 0;
}