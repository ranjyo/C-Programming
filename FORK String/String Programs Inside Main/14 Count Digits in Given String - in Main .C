// Count of Digits in Given String

#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int i = 0, D_Cnt = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                        if( cSrc[i] >= '0' && cSrc[i] <= '9' )
                        {
                                D_Cnt++;
                        }

                        i++;
            }

            printf("\n Count Of Digits in Given String is = %d.", D_Cnt);

            getch();
            return 0;
}
