#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, zCnt = 0, ECnt = 0, OCnt = 0, Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);   /// No = 480701

        Temp = No;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if(Dig == 0)
            {
                zCnt++;
            }
            else if( Dig % 2 == 0  )
            {
                ECnt++;
            }
            else
            {
                OCnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n Even Digits Count in Given Number %d = %d.", No, ECnt);
        printf("\n Odd Digits Count in Given Number %d  = %d.", No, OCnt);
        printf("\n Zero Digits Count in Given Number %d = %d.", No, zCnt);

        _getch();
        return 0;
}
