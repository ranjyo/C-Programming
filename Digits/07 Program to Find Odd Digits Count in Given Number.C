#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, OCnt = 0, Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);   /// No = 480701

        Temp = No;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if( Dig % 2 == 1 )
            {
                OCnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n Odd Digits Count in Given Number %d = %d.", No, OCnt);

        _getch();
        return 0;
}
