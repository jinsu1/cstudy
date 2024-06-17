#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int tall, m, cm;

    printf("키를 센치미터 단위로 입력하세요: ");
    scanf("%d", &tall);
    getchar();


    m = tall/100;
    cm = tall%100;


    printf("키가 %dm %dcm 이시군요.\n", m, cm);

    return 0;

}
