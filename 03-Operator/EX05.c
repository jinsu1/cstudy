#include <stdio.h>

int main() {

    int a1 = 100;
    int x1 = 1;
    int y1 = a1 + x1++;
    printf("x1=%d, y1=%d\n", x1, y1);

    int a2 = 100;
    int x2 = 1;
    int y2 = a2 + ++x2;
    printf("x2=%d, y2=%d\n", x2, y2);
}