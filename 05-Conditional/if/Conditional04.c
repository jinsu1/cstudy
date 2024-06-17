#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int point;
    printf("점수를 입력하세요: ");
    scanf("%d", &point);
    getchar();

    char grade;

    if(point > 90) {
        grade = 'A';
    } else if (point > 80) {
        grade = 'B';
    } else if (point > 70) {
        grade = 'C';
    } else if (point > 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("%c 학점 입니다.\n", grade);
    
    return 0;
}