#include<stdio.h>
#include<conio.h>

int  Small_Count(char *);

int main()
{
            char cSrc[20] = "";
            int S_Count = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            S_Count = Small_Count(cSrc);

            printf("\n Small Letters Count in Given String is : %d.", S_Count);

            getch();
            return 0;
}

int  Small_Count(char *Str)
{
        int  Cnt = 0, i = 0;

        while(Str[i] != '\0')
        {
                if( Str[i] >= 'a' && Str[i] <= 'z' )
                {
                        Cnt++;
                }

                i++;
        }

        return Cnt;
}
