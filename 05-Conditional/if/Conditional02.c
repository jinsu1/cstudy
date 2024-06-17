#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int point;
    printf("점수를 입력하세요: ");
    scanf("%d", &point);
    getchar();

    if(point > 60 && point <= 100) {
        printf("Pass\n");
    }

    if (point < 0 || point > 100) {
        printf("범위를 벗어났습니다.\n");
    }

    if (point <= 60) {
        printf("Non Pass\n");
    }

    return 0;
}