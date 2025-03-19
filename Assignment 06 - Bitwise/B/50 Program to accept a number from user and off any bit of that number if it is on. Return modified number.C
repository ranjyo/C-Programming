/// Program to accept a number from user and off 7th and 10th bit of that number if it is on. Return modified number
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI OFF_Any_Bit(LLI, int);

int main()
{
    int B = 0;
    LLI No = 0, Ret = 0;

    printf("\n Enter a Number = ");
    scanf("%lld",&No);

    Up:
    printf("\n Enter a Bit Number to OFF = ");
    scanf("%d",&B);

    if(B > 32 || B < 1)
    {
        printf("\n INVALID BIT VALUE");
        goto Up;
    }
    printf("\n======================*******======================\n");

    Ret = OFF_Any_Bit( No, B );

    printf("\n Given Number %lld, After %d Bit OFF Modified Number is = %lld.",No, B, Ret);

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}

LLI OFF_Any_Bit(LLI Num, int Bt)
{
    if( (Num >> (Bt-1)) & 1 )
    {
        Num = ((Num) ^ (1 << (Bt - 1)));
    }

    return Num;
}
