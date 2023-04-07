#include<stdio.h>
#include<conio.h>

char *strstr_FORK(char*, char*);

int main()
{
            char  cSrc[50] = "";
            char cSub[50] = "";

            printf("\n Enter Source String = ");
            gets(cSrc);
            printf("\n Enter Substring To Search = ");
            gets(cSub);

            char *Temp = strstr_FORK(cSrc, cSub);

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

char *strstr_FORK(char* inStr, char* subStr)
{
            char *Temp = NULL;



            return  Temp;
}
