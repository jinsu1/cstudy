#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double num1 = 22.2;
    int num2 = 2;
    double num3 = num1 / num2;
    printf("%0.1f / %d = %0.1f\n", num1, num2, num3);

    int num4 = (int)(num1 / num2);
    printf("%0.1f / %d = %d\n", num1, num2, num4);

    int x = 1;
    int y = 2;
    double z1 = x/y;
    printf("%d / %d = %0.1f\n", x, y, z1);

    double z2 = (double)x / y ;
    printf("%d / %d = %0.1f\n", x, y, z2);


    return 0;
}