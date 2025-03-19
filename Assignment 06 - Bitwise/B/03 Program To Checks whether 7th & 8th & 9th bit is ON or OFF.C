/// Program To Check whether 7th & 8th & 9th bit is ON or OFF.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n\n");

    if( (No >> 6) & 1 )
    {
        printf(" 7th Bit - ");
    }

    if( (No >> 7) & 1 )
    {
        printf("8th Bit - ");
    }

    if( (No >> 8) & 1 )
    {
        printf("9th Bit - ");
    }

    printf("of Given Number %d is ON.",No);

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}
