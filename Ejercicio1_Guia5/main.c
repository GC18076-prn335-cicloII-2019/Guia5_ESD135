#include <stdio.h>

char DecAHex(int n);
int convertir(int n, int b);

int main() {
    int n1=2619;
    int n2 = 123;
    int base = 4;
    printf("Decimal a Hexadecimal: %d es ", n1);
    DecAHex(n1);
    printf("\nDecimal a Base %d: %d es ", base, n2);
    convertir(n2, base);
    return 0;
}

char DecAHex(int n){
    int hex=0;
    if(!n)
        return;
    else {
        hex=n%16;
        n=n/16;
        DecAHex(n);
    }
    switch(hex){
        case 10:
            printf("A");
            break;
        case 11:
            printf("B");
            break;
        case 12:
            printf("C");
            break;
        case 13:
            printf("D");
            break;
        case 14:
            printf("E");
            break;
        case 15:
            printf("F");
            break;
        default:
            printf("%d",hex);
    }
}

int convertir(int n, int b){
    int c = 0;
    if(!n)
        return;
    else {
        c=n%b;
        n=n/b;
        convertir(n, b);
    }
    printf("%d", c);
}

