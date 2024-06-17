#include <stdio.h>

int main() {
int sizeChar = sizeof(char);
int sizeShort = sizeof(short);
int sizeInt = sizeof(int);
int sizeLong = sizeof(long);

printf("char의 크기=%d\n", sizeChar);
printf("short의 크기=%d\n", sizeShort);
printf("int의 크기=%d\n", sizeInt);
printf("long의 크기=%d\n", sizeLong);


int sizeUchar = sizeof(unsigned char);
int sizeUshort = sizeof(unsigned short);
int sizeUint = sizeof(unsigned int);
int sizeUlong = sizeof(unsigned long);

printf("unsigned char의 크기=%d\n", sizeUchar);
printf("unsigned short의 크기=%d\n", sizeUshort);
printf("unsigned int의 크기=%d\n", sizeUint);
printf("unsigned long의 크기=%d\n", sizeUlong);

int sizeFloat = sizeof(float);
int sizeDouble = sizeof(double);
printf("float의 크기=%d\n", sizeFloat);
printf("double의 크기=%d\n", sizeDouble);

return 0;
}
