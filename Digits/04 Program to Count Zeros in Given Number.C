#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, zCnt = 0, Dig = 0, Temp = 0;

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

            Temp = Temp / 10;
        }

        printf("\n Zeros Count in Given Number %d = %d.", No, zCnt);

        _getch();
        return 0;
}
