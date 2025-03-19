/// Program To Check whether 1st & 32nd bit is ON or OFF.
#include<stdio.h>
#include<conio.h>
typedef long long int LLI;

int main()
{
    LLI No = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n======================*******======================\n\n");

    if(( No & 1 ) && ( (No >> 31) & 1 ) )
    {
        printf("\n Both 1st Bit & Last(32nd) Bit is ON ");
    }
    else if( No & 1 )
    {
        printf("\n Only 1st Bit is On, Last Bit is OFF. ");
    }
    else if((No >> 31) & 1 )
    {
        printf("\n 32nd Bit is ON, 1st Bit is OFF.");
    }
    else
    {
        printf("\n Both 1st & 32nd Bits are OFF.");
    }

    printf("\n\n======================*******======================\n");

    getch();
    return 0;
}
