#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;

    printf("\n ASCII Table is => \n");

    while(i < 128 )
    {
        printf("\n\t  %d   :   '%c' ",i, i);
        i++;
    }

    printf("\n ==========================\n Thanks \n");

    getch();
    return 0;
}
