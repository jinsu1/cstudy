#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

   int num1, num2;
   int max;

   printf("첫 번째 숫자를 입력하세요: ");
   scanf("%d", &num1);
   getchar();

   printf("두 번째 숫자를 입력하세요: ");
   scanf("%d", &num2);
   getchar();

   max = (num1 > num2) ? num1 : num2;
   printf("두 값중 더 큰 값은 %d 입니다.\n", max);


    return 0;
}