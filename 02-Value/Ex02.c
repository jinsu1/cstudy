#include <stdio.h>

int main() {

int num1;

num1 = 123;

int num2 = 456;

printf("num1=%d, num2=%d\n", num1, num2);

num1 = 100;

num2 = num1;

printf("num1=%d, num2=%d\n", num1, num2);

return 0;
}