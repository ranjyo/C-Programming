// Count Small Letters  in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int Small_Cnt = 0, i = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                        if( cSrc[i] >= 'a' && cSrc[i] <= 'z')
                        {
                                    Small_Cnt++;
                        }
                        i++;
            }

            printf("\n Count Of Small Letters in Given String is = %d.", Small_Cnt);

            getch();
            return 0;
}
