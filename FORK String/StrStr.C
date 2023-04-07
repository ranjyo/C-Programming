#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
            char  cSrc[50] = "";
            char cSub[50] = "";

            printf("\n Enter Source String = ");
            gets(cSrc);
            printf("\n Enter Substring To Search = ");
            gets(cSub);

            char *Temp = strstr(cSrc, cSub);

            if( Temp == NULL)
            {
                        printf("\n String Is NotSubstring Of Given I/P String");
            }
            else
            {
                        printf("\n String Is Substring Of Given I/P String");
            }

            printf("\n Source String Base Address is = %d", cSrc);
            getch();

            printf("\n Address of Substring Found At = %d", Temp);

            getch();
            return 0;
}
