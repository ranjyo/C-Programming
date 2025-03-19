/// Program to accept a number from user and ON 7th bit of that number if it is OFF. Return modified number
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI ON_Any_Bit(LLI,int);

int main()
{
    int B = 0;
    LLI No = 0, Ret = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    Ret = No;
    Up:
    printf("\n Enter a Bit Number to OFF = ");
    scanf("%d",&B);

    if(B > 32 || B < 1)
    {
        printf("\n INVALID BIT VALUE");
        goto Up;
    }
    printf("\n======================*******======================\n");

    Ret = ON_Any_Bit(Ret, B);

    if( Ret == No )
    {
        printf("\n %d Bit of Given Number %lld is already ON.",B, No);
    }
    else
    {
        printf("\n %d Bit of Given Number %lld is OFF,\n After %d Bit ON Modified Number is = %lld.",B, No, B, Ret);
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}

LLI ON_Any_Bit(LLI Num, int Bt)
{
    if( ! ((Num >> (Bt - 1)) & 1) )
    {
        Num = ((Num) ^ (1 << (Bt-1)));
    }

    return Num;
}
