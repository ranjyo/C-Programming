/// Accept Character and give its Decimal, Hex, Octal Value
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    ch = getche();

    printf("\n Decimal     : %d.",ch);
    printf("\n Hexadecimal : %x.",ch);
    printf("\n Octal       : %o.",ch);

    printf("\n ==========================\n");

    getch();
    return 0;
}
