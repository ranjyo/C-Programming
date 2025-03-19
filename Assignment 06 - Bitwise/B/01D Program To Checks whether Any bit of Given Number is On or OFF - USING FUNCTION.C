/// Program to accept a number from user and off 7th bit of that number is ON or OFF
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;
typedef int BOOL;
#define True 1
#define False 0

BOOL Check_Bit7(LLI);

int main()
{
    LLI No = 0;
    BOOL bRet = False;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    bRet = Check_Bit7(No);

    if(bRet == False)
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

BOOL Check_Bit7(LLI Num)
{
    if( (Num >> 6) & 1 )
    {
        return True;
    }

    return False;
}
