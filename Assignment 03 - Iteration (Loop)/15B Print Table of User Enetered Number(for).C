#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 1;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n Table of %d is => \n", No);

    for( i = 1; i <= 10; i++ )
    {
        printf("\n %3d * %3d = %3d.",No, i, (i * No));
    }

    getch();
    return 0;
}
