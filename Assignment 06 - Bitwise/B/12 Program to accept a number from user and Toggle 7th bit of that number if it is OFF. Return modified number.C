/// Program to accept a number from user and Toggle 7th bit of that number if it is OFF. Return modified number
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI Toggle_7th_Bit(LLI);

int main()
{
    LLI No = 0, Ret = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    Ret = Toggle_7th_Bit(No);

    printf("\n After Toggle 7th Bit of Given Number %lld Modified Number is = %lld.",No, Ret);

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}

LLI Toggle_7th_Bit(LLI Num)
{
    Num = ((Num) ^ (1 << 6));

    return Num;
}
/*
LLI Toggle_Any_Bit(LLI Num, int Bt)
{
    Num = ((Num) ^ (1 << (Bt-1)));

    return Num;
}
*/
