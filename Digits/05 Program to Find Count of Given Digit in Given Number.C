#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Cnt = 0, Dig = 0, Search_Dig = 0, Temp = 0;

        printf("\n Enter a Number : ");
        scanf("%d",&No);   /// No = 480701

        printf("\n\n Enter a Digit : ");
        scanf("%d",&Search_Dig);

        Temp = No;

        while( Temp > 0 )
        {
            Dig = Temp % 10;

            if(Dig == Search_Dig)
            {
                Cnt++;
            }

            Temp = Temp / 10;
        }

        printf("\n %d Digit Count in Given Number %d = %d Times.", Search_Dig, No, Cnt);

        _getch();
        return 0;
}
