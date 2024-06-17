#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int and1 = 1 && 1;
    int and2 = 1 && 0;
    int and3 = 0 && 1;
    int and4 = 0 && 0;

    printf("1 && 1 --> %d\n", and1);
    printf("1 && 0 --> %d\n", and2);
    printf("0 && 1 --> %d\n", and3);
    printf("0 && 0 --> %d\n", and4);
    printf("-------------------\n");

    int or1 = 1 || 1;
    int or2 = 1 || 0;
    int or3 = 0 || 1;
    int or4 = 0 || 0;

    printf("1 || 1 --> %d\n", or1);
    printf("1 || 0 --> %d\n", or2);
    printf("0 || 1 --> %d\n", or3);
    printf("0 || 0 --> %d\n", or4);
    printf("-------------------\n");

    int a = 100, b=50, x=1, y=2;
    int r1 = a != b || x == y;
    int r2 = a < b || x > y;
    int r3 = a < b || x < y;
    int r4 = a > b || x > y;
    int r5 = a > b || x < y;

    printf("%d != %d || %d == %d --> %d\n", a, b, x, y, r1);
    printf("%d < %d || %d > %d --> %d\n", a, b, x, y, r2);
    printf("%d < %d || %d < %d --> %d\n", a, b, x, y, r3);
    printf("%d > %d || %d > %d --> %d\n", a, b, x, y, r4);
    printf("%d > %d || %d < %d --> %d\n", a, b, x, y, r5);
    printf("-----------------------\n");

    int success = 1;
    int fail = !success;
    printf("!%d --> %d\n", success, fail);


    return 0;
}