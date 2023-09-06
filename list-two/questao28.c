#include <stdio.h>

int main() {
    unsigned char x, y,mask,i;
    
    do {
        puts("Informe um valor de y maior que 5: ");
        scanf("%hhu", &y);
    } while (y < 5);

    puts("Informe um valor para x: ");
    scanf("%hhu", &x);

    for ( i = y - 4; i <= y + 4; i++) {
        if (i != y) {
            mask = x & 0x0F;
            i = i & 0xF0;
            i = i | mask;
            printf("%d - %d\n", i, i);
        }
    }

    return 0;
}
