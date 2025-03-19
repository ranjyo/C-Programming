#include<stdio.h>
#include<conio.h>

int  main()
{
    float Fht = 0.0, Cel = 0.0;

    printf("\n Enter Temperature in Fahrenheit : ");
    scanf("%f",&Fht);

    Cel = (Fht - 32) * (5.0/9.0);

    printf("\n\n Temperature %0.2f Fahrenheit = %0.2f Celsius.", Fht, Cel);

    getch();
    return 0;
}
