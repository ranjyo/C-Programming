#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sqr = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Sqr = No * No;

    printf("\n Square of %d is = %d.", No, Sqr);

    getch();
    return 0;
}
