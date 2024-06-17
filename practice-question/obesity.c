#include<stdio.h>
#include<windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double myHeight, myWeight;
    double standardWeight, obesity=0;
    
    printf("키를 입력하세요: ");
    scanf("%lf", &myHeight);
    getchar();
    
    printf("몸무게를 입력하세요: ");
    scanf("%lf", &myWeight);
    getchar();
    
    if(myWeight <= 150) {
         standardWeight = myHeight - 110;
         } else {
         standardWeight = (myHeight - 110) * 0.9;
    }

    obesity = (myWeight - standardWeight)/standardWeight * 100;
    
    if(obesity <= 20 ) { 
         printf("정상(안심)\n");
    } else if (obesity > 20 && obesity <= 30) {
         printf("경도비만(주의)\n");
    } else if (obesity > 30 && obesity <= 50) {
         printf("중등도 비만(위험)\n");
    } else if (obesity > 50) {
         printf("고도비만(매우 위험)\n");
    }
    return 0;
}