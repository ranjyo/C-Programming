// Count Special Symbols  in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int Spl_Cnt = 0, i = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                        if( ! (( cSrc[i] >= 'A' && cSrc[i] <= 'Z' ) || ( cSrc[i] >= 'a' && cSrc[i] <= 'z' ) || ( cSrc[i] >= '0' && cSrc[i] <= '9' ) ))
                        {
                                    Spl_Cnt++;
                        }
                        i++;
            }

            printf("\n Count Of Special Symbols in Given String is = %d.", Spl_Cnt);

            getch();
            return 0;
}
