#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    Res = ~No;

    printf("\n Result => ~%d = %d.", No, Res);

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}
