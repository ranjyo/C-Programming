/// Program To Checks whether 15th bit of Given Number is On or OFF
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, BNo = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);
    printf("\n Enter a Bit Value which you wish to0 check ON or OFF = ");
    scanf("%d",&BNo);

    if(BNo > 32 || BNo < 1)
    {
        printf("\n INVALID BIT VALUE!!!");
        return -1;
    }

    printf("\n======================*******======================\n");

    if((No >> BNo) & 1)
    {
        printf("\n %d Bit of Given Number %d is ON.", BNo, No);
    }
    else
    {
        printf("\n %d Bit of Given Number %d is OFF.", BNo, No);
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}
