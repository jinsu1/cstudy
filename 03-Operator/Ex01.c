#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int num1, num2;
    int result1, result2, result3, result4, result5;

    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%d", &num1);
    getchar();

    printf("두 번째 숫자를 입력하세요: ");
    scanf("%d", &num2);
    getchar();

    result1 = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, result1);

    result2 = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, result2);

    result3 = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, result3);

    result4 = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, result4);
    
    result5 = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, result5);

    return 0;
}