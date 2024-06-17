#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char a = 100;
    int size_a = sizeof(a);
    printf("char a=%d, %dbyte\n", a, size_a);

    short b = a;
    int size_b = sizeof(b);
    printf("short b=%d, %dbyte\n", b, size_b);

    int c = b;
    int size_c = sizeof(c);
    printf("int c=%d, %dbyte\n", c, size_c);

    float d = c;
    int size_d = sizeof(d);
    printf("float d=%f, %dbyte\n", d, size_d);

    double e = d;
    int size_e = sizeof(e);
    printf("double e=%f, %dbyte\n", e, size_e);


    return 0;
}