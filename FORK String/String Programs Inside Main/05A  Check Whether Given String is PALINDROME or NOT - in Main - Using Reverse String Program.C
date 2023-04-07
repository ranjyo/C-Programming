#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[20] ={'\0'};
            char cDest[20];
            int i = 0, j = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                       i++;
            }

            i = i - 1;

            while( i >= 0 )
            {
                        cDest[j] = cSrc[i];
                         j++;
                         i--;
            }

            cDest[j] = '\0';

            for(i = 0; i < j; i++)                                            //  OR  (i = 0; cSrc[i] != '\0'; i++)
            {
                        if(cSrc[i] != cDest[i])
                        {
                                    break;
                        }
            }

            if(i == j)
            {
                            printf("\n\n Given String is Palindrome!!!");
            }
            else
            {
                            printf("\n\n Given String is NOT Palindrome!!!");
            }

            _getch();
            return 0;
}
