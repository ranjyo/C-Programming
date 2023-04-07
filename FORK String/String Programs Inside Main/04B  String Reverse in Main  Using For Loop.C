#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[20] ={'\0'};
            char cDest[20] = {};
            int i = 0, j = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            for(i = 0; cSrc[i] != '\0'; i++);

            for(i = i - 1, j = 0 ;  i >= 0 ; j++, i--)
            {
                        cDest[j] = cSrc[i];
            }

            cDest[j] = '\0';

            printf("\n  Given String is = %s !!!",cSrc);
            printf("\n  Reverse Of Given String is = %s $$$",cDest);

            _getch();
            return 0;
}
