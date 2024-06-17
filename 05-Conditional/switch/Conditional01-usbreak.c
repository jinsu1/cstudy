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
        case 'B':
        case 'C':
            printf("PASS");
            break;
        default:
            printf("Non Pass\n");
            break;
    }
    return 0;
}