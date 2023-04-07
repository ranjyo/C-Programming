#include<stdio.h>
#include<conio.h>

void  Toggle_Case(char *);

int main()
{
            char cSrc[20] = "";

            printf("\n Enter a string : ");
            gets(cSrc);

            Toggle_Case(cSrc);

            printf("\n Given String After Conversion = %s.", cSrc);

            getch();
            return 0;
}

void  Toggle_Case(char *Str)
{
        int  i = 0;

        while(Str[i] != '\0')
        {
                if(  Str[i] >= 'A' && Str[i] <= 'Z' )
                {
                                Str[i] = Str[i] + 32;
                }
                else if(Str[i] >= 'a' && Str[i] <= 'z' )
                {
                                Str[i] = Str[i] - 32;
                }

                i++;
        }

        return;
}
