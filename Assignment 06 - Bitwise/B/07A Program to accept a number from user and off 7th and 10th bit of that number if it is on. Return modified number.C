/// Program to accept a number from user and off 7th and 10th bit of that number if it is on. Return modified number
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

LLI OFF_7th_Bit(LLI);
LLI OFF_10th_Bit(LLI);

int main()
{
    LLI No = 0, Ret = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n");

    Ret = OFF_7th_Bit(No);
    Ret = OFF_10th_Bit(Ret);

    printf("\n Given Number %lld, After 7th Bit & 10th Bit OFF Modified Number is = %lld.",No, Ret);

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

LLI OFF_10th_Bit(LLI Num)
{
    if( (Num >> 9) & 1 )
    {
        Num = ((Num) ^ (1 << 9));
    }

    return Num;
}
