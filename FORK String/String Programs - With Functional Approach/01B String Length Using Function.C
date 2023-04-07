#include<stdio.h>
#include<conio.h>

int strlenX(char *);

int main()
{
            char cSrc[20] ={'\0'};

            puts("\n Enter a string : ");
            gets(cSrc);

            printf("\n  Length of given String is = %d",strlenX(cSrc));

            getch();
            return 0;
}

int strlenX(char *cPtr)
{
        int Cnt = 0;

        for(Cnt = 0; cPtr[Cnt] != '\0'; Cnt++);

        return Cnt;
}
