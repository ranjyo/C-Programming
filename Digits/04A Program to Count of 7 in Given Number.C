#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Cnt_Of_7 = 0, Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);   /// No = 480701

        Temp = No;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if(Dig == 7)
            {
                Cnt_Of_7++;
            }

            Temp = Temp / 10;
        }

        printf("\n 7 Count in Given Number %d = %d.", No, Cnt_Of_7);

        _getch();
        return 0;
}
