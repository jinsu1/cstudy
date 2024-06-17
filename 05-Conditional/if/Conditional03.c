#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int isKorean = 1;

    if(isKorean ==1) {
        printf("한국사람 입니다. \n");
    }

    if(isKorean != 1) {
        printf("한국사람이 아닙니다.\n");
    }

    if(isKorean) {
        printf("한국사람 입니다.\n");
    }

    if(!isKorean) {
        printf("한국사람이 아닙니다.\n");
    }

    int isJapanese = 0;

    if(isJapanese ==1) {
        printf("일본사람 입니다. \n");
    }

    if(isJapanese != 1) {
        printf("일본사람이 아닙니다.\n");
    }

    if(isJapanese) {
        printf("일본사람 입니다.\n");
    }

    if(!isJapanese) {
        printf("일본사람이 아닙니다.\n");
    }

    return 0;
}