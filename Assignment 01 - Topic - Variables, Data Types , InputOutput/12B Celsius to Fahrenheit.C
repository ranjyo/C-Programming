#include<stdio.h>
#include<conio.h>

int  main()
{
    float Fht = 0, Cel = 0;

    printf("\n Enter Temperature in Fahrenheit : ");
    scanf("%f",&Cel);

    Fht = ( Cel * (9.0/5.0) ) + 32;

    printf("\n\n Temperature %0.2f Celsius = %0.2f Fahrenheit.", Cel, Fht);

    getch();
    return 0;
}
