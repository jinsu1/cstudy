#include <stdio.h>
#include <windows.h>
#define pi 3.141592

int main() {
    SetConsoleOutputCP(CP_UTF8);

    double radius, width, girth;

    printf("반지름을 입력하세요: ");
    scanf("%lf", &radius);
    getchar();

    girth = radius * 2 * pi;
    width = radius * radius * pi;

    printf("원 둘레: %0.2lf\n", girth);
    printf("원 넓이: %0.2lf\n", width);


    return 0;

}

