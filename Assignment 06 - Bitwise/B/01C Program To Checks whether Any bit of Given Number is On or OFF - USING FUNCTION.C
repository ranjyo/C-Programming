/// Program to accept a number from user and off 7th bit of that number is ON or OFF
#include<stdio.h>
#include<conio.h>

int Check_Bit7(long long int);

int main()
{
    long long int No = 0;
    int bRet = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    bRet = Check_Bit7(No);

    if(bRet == 0)
    {
        printf("\n 7th Bit of Given Number %d is OFF.",No);
    }
    else
    {
        printf("\n 7th Bit of Given Number %d is ON.",No);
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}

int Check_Bit7(long long int Num)
{
    if( (Num >> 6) & 1 )
    {
        return 1;
    }

    return 0;
}
