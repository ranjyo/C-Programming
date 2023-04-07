#include<stdio.h>
#include<conio.h>

void strcpyX(char *, char *);

int main()
{
            char cSrc[20] = "";
            char cDest[20] = "";

            printf("\n Enter a string : ");
            gets(cSrc);

            strcpyX(cSrc, cDest);

            printf("\n  Source String is = %s.",cSrc);
            printf("\n  Copied String is = %s.",cDest);

            getch();
            return 0;
}

void strcpyX(char *inStr, char *outStr)
{
        int i = 0;

        while(inStr[i] != '\0')
        {
                outStr[i] = inStr[i];
                i++;
        }
        outStr[i] = '\0';

        return;
}
