#include <stdio.h>
#include <windows.h>

#define NOW_YEAR 2024

int main() {
    SetConsoleOutputCP(CP_UTF8);

   int birth, age;

   printf("나이를 입력하세요: ");
   scanf("%d", &age);
   getchar();

   birth = NOW_YEAR - age + 1;

   printf("%d년도에 태어났습니다.\n", birth);


    return 0;
}