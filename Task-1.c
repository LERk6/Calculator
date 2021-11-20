#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    system("cls");

    double a,b,sum;

    printf("Ведите A: ");
    scanf("%Lf",&a);
    printf("Введите B: ");
    scanf("%Lf",&b);

    sum=a+b;
    printf("%Lf + %Lf = %Lf\n", a,b,sum);
    sum=a-b;
    printf("%Lf - %Lf = %Lf\n", a,b,sum);
    sum=a*b;
    printf("%Lf * %Lf = %Lf\n", a,b,sum);
    sum=a/b;
    printf("%Lf : %Lf = %Lf\n", a,b,sum);

    system("pause");
    return 0;
}