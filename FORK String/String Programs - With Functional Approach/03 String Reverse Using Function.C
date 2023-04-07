#include<stdio.h>
#include<conio.h>

void strRevX(char *, char *);

int main()
{
            char cSrc[20] = "";
            char cDest[20] = "";

            printf("\n Enter a string : ");
            gets(cSrc);

            strRevX(cSrc, cDest);

            printf("\n Source String is = %s.",cSrc);
            printf("\n Reverse String is = %s.",cDest);

            getch();
            return 0;
}

void strRevX(char *inStr, char *outStr)
{
        int i = 0, j = 0;

        while(inStr[i] != '\0')
        {
                    i++;
        }
        i = i -1;

        while(i >= 0)
        {
                outStr[j] = inStr[i];
                j++;
                i--;
        }
        outStr[j] = '\0';

        return;
}
