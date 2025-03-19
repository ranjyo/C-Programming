/// Program to accept a number from user and ON 7th bit of that number if it is OFF. Return modified number
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI ON_7th_Bit(LLI);

int main()
{
    LLI No = 0, Ret = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    Ret = ON_7th_Bit(No);

    if( Ret == No )
    {
        printf("\n 7th Bit of Given Number %lld is already ON.",No);
    }
    else
    {
        printf("\n 7th Bit of Given Number %lld is OFF,\n After 7th Bit ON Modified Number is = %lld.",No, Ret);
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}

LLI ON_7th_Bit(LLI Num)
{
    if( ! ((Num >> 6) & 1) )
    {
        Num = ((Num) ^ (1 << 6));
    }

    return Num;
}
