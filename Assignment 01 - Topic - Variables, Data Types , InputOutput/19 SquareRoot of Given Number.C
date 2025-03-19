#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float No = 0, Sqr_Rt = 0;

    printf("\n Enter a Number : ");
    scanf("%f",&No);

    Sqr_Rt = sqrt(No);

    printf("\n Square Root of %0.2f is = %0.2f.", No, Sqr_Rt);

    getch();
    return 0;
}
