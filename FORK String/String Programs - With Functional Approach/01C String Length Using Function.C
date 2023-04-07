#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int strlenX(char *);

int main()
{
            char cSrc[20] ={'\0'};
            int Len = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            Len = strlenX(cSrc);

            system("cls");

            printf("\n  Length of given String is = %d",Len);

            getch();
            return 0;
}

int strlenX(char *cPtr)
{
        return  printf("%s", cPtr);
}
