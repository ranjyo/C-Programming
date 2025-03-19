/// Program to accept a number from user and off 7th bit of that number if it is on. Return modified number
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI OFF_7th_Bit(LLI);

int main()
{
    LLI No = 0, Ret = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    Ret = OFF_7th_Bit(No);

    if( Ret == No )
    {
        printf("\n 7th Bit of Given Number %lld is already OFF.",No);
    }
    else
    {
        printf("\n 7th Bit of Given Number %lld is ON,\n After 7th Bit OFF Modified Number is = %lld.",No, Ret);
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}

LLI OFF_7th_Bit(LLI Num)
{
    if( (Num >> 6) & 1 )
    {
        Num = ((Num) ^ (1 << 6));
    }

    return Num;
}
