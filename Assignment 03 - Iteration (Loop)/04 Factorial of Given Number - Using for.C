#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0, Temp = 0;
        long long int Fact = 0;

        printf("\n Enter a +ve Number to Calculate its Factorial = ");
        scanf("%d",&No);

        if(No <= 0)
        {
            printf("\n Invalid Input...");
            return -1;
        }

        for(Fact = 1, Temp = No ; Temp > 1; Temp--)
        {
            Fact = Fact * Temp;
        }

        printf("\n Factorial of %d is = %lld.", No, Fact);

        printf("\n\n Thanks!!!");

        getch();
        return  0;
}
