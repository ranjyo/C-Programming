#include<stdio.h>
#include<conio.h>

void  Convert_To_Upper(char *);

int main()
{
            char cSrc[20] = "";

            printf("\n Enter a string : ");
            gets(cSrc);

            Convert_To_Upper(cSrc);

            printf("\n Given String After Conversion = %s.", cSrc);

            getch();
            return 0;
}

void  Convert_To_Upper(char *Str)
{
        int  i = 0;

        while(Str[i] != '\0')
        {
                if(  Str[i] >= 'a' && Str[i] <= 'z' )
                {
                                Str[i] = Str[i] - 32;
                }

                i++;
        }

        return;
}
