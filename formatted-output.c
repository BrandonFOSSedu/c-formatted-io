#include <stdio.h>

int main() {
    int i = 16;
    float f = 3.141592;
    char str[10];

    printf("Integer representation: %i\n", i);
    printf("Hexadecimal representation: %x\n", i);

    printf("Decimal floating point: %f\n", f);
    printf("Hexadecimal floating point: %a\n", f);

    return 0;
}
