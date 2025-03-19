#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character to get its ASCII Value : ");
    ch = getche();

    printf("\n ASCII Value of Letter %c is = %d.",ch, ch);

    printf("\n ==========================\n");

    getch();
    return 0;
}
