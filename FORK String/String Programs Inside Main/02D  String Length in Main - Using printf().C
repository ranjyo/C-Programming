#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
            char cSrc[50] ={'\0'};
            int Len = 0;

            puts("\n Enter a string : ");
            gets(cSrc);

            Len = printf("%s",cSrc);

            _getch();

            system("cls");

            printf("\n  Length of given String  <%s> is = %d",cSrc, Len);

            _getch();
            return 0;
}
