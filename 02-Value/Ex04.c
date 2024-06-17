#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int age;
    float height, weight;

    printf("한글insert age: ");
    scanf("%d", &age);
    getchar();

    printf("insert height: ");
    scanf("%f", &height);
    getchar();

    printf("insert weight: ");
    scanf("%f", &weight);
    getchar();

    printf("----------------------\n");
    printf("age: %d, height: %0.2fcm, weight: %0.2fkg\n", age, height, weight);
    printf("----------------------\n");

    return 0;
}