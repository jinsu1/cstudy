#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    char grade;
    printf("학점을 입력하세요(A~F): ");
    scanf("%c", &grade);
    getchar();

    switch(grade) {
        case 'A':
            printf("91점~100점 사이 입니다.\n");
        case 'B':
            printf("81점~90점 사이 입니다.\n");
        case 'C':
            printf("71점~80점 사이 입니다.\n");
        case 'D':
            printf("61점~70점 사이 입니다.\n");
        default:
            printf("60점 이하 입니다.\n");
    }
    return 0;
}