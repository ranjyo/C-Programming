/// Program To Check whether 5th & 18th bit is ON or OFF.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    if(   (No >> 4) & 1)  &&  (No >> 17) & 1) )
    {
        printf("\n 5th & 18th Bit of Given Number %d are ON.", No);
    }
    else if( (No >> 4) & 1) )
    {
        printf("\n For Given Number %d => 5th Bit is ON & 18th Bit is OFF.", No);
    }
    else if( (No >> 17) & 1) )
    {
        printf("\n For Given Number %d => 5th Bit is OFF & 18th Bit is ON.", No);
    }
    else
    {
        printf("\n Both 5th & 18th Bit of Given Number %d are OFF.", No);
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}
