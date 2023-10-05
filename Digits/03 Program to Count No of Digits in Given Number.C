#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, dCnt = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);   /// No = 4947

        Temp = No;

        while( Temp > 0 )
        {
            Temp = Temp / 10;
            dCnt++;
        }

        printf("\n Digits Count in Given Number %d = %d.", No, dCnt);

        _getch();
        return 0;
}
