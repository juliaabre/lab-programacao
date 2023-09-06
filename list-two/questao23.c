#include <stdio.h>

int main(){
    int a = 1;
    int b = 4;
    int c = 1;
    int d = 4;

    //pre-incremento
    a = --b;  // b = b -1  a = b
    printf("a = %i   b = %i\n",a,b);

    //pos-incremento
    c = d--;  // c = d   d = d - 1
    printf("c = %i   d = %i\n",c,d);

    return 0;
}