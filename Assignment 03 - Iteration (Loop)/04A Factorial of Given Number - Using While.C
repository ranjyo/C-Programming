#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Fact = 1, Temp = 0;

        printf("\n Enter a +ve Number to Calculate its Factorial = ");
        scanf("%d",&No);

        Temp = No;

        if(No <= 0)
        {
            printf("\n Invalid Input...");
            return -1;
        }

        while(Temp > 1)
        {
            Fact = Fact * Temp;
            Temp--;
        }

        printf("\n Factorial of %d is = %d.", No, Fact);

        printf("\n\n Thanks!!!");

        getch();
        return  0;
}
