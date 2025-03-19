#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("\n Enter 2 Integers for Addition => \n");
    printf("\n Enter Number 1 : ");
    scanf("%d",&No1);
    printf("\n Enter Number 2 : ");
    scanf("%d",&No2);

    Ans = No1 + No2;

    printf("\n Addition of Given Numbers %d + %d = %d.\n", No1, No2, Ans);

    getch();
    return 0;
}
