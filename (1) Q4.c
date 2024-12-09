#include <stdio.h>

int main() {
    // Using a third variable
    int c = 10, d = 20, temp;
    temp = c; c = d; d = temp;
    printf("c = %d, d = %d\n", c, d);

    // Without a third variable (Addition/Subtraction)
    int e = 10, f = 20;
    e = e + f; f = e - f; e = e - f;
    printf("e = %d, f = %d\n", e, f);

    // Without a third variable (Multiplication/Division)
    int g = 10, h = 20;
    g = g * h; h = g / h; g = g / h;
    printf("g = %d, h = %d\n", g, h);

    // Using XOR
    int a = 10, b = 20;
    a = a ^ b; b = a ^ b; a = a ^ b;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
