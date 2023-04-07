// Count Capital Letters  in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int Cap_Cnt = 0, i = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                        if( cSrc[i] >= 65 && cSrc[i] <= 90)
                        {
                                    Cap_Cnt++;
                        }
                        i++;
            }

            printf("\n Count Of Capital Letters in Given String is = %d.", Cap_Cnt);

            getch();
            return 0;
}
