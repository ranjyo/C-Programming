#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter ASCII Value to get its Corresponding Character: ");
    scanf("%d",&No);

    printf("\n ASCII Letter for Value %d is = %c.",No, No);

    printf("\n ==========================\n");

    getch();
    return 0;
}
