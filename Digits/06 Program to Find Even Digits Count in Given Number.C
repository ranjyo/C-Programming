#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, ECnt = 0, Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);   /// No = 480701

        Temp = No;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if( (Dig % 2 == 0) && (Dig != 0) )
            {
                ECnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n Even Digits Count in Given Number %d = %d.", No, ECnt);

        _getch();
        return 0;
}
