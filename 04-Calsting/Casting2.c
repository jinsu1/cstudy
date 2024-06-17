#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double a = 215.98;
    int b = (int)a;
    printf("double to int -> %d\n", b);

    int c = 65;
    char d = (char)c;
    printf("int to char -> %c\n", d);
    printf("int to char -> %d\n", d);



    return 0;
}