#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int i = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            printf("\n Given String is = %s.", cSrc);

            while(cSrc[i] != '\0')
            {
                if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
                {
                    cSrc[i] = cSrc[i] - 32;
                }

                i++;
            }

            printf("\n Given String is = %s.", cSrc);

            getch();
            return 0;
}
