#include <stdio.h>
#include <windows.h>

#define NOW_YEAR 2024

int main() {
    SetConsoleOutputCP(CP_UTF8);

   int birth, myAge;

   printf("태어난 년도를 입력하세요: ");
   scanf("%d", &birth);
   getchar();

   myAge = NOW_YEAR - birth -1;

   printf("%d세 입니다.\n", myAge);


    return 0;
}