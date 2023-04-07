// Find Digits in Given String & Form a Number Through it

#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'}, cDest[50] = "";
            int i = 0, j = 0;


            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                        if( cSrc[i] >= '0' && cSrc[i] <= '9' )
                        {
                                    cDest[j] = cSrc[i];
                                    j++;
                        }

                        i++;
            }

            printf("\n  Number From Digits in Given String is = %s.", cDest);

            _getch();
            return 0;
}
