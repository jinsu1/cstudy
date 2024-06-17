#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

        int myage;
        printf("나이를 입력하세요: ");
        scanf("%d", &myage);
        getchar();

        if (myage == 19) {
            printf(" >> 19살 입니다.\n");
        }

        if (myage != 19) {
            printf(" >> 19살이 아닙니다.\n");
        }
        
        if (myage > 19) {
            printf(" >> 성인입니다.\n");
        }
        
        if (myage <= 19) {
            printf(" >> 학생 입니다.\n");
        }
    return 0;
}