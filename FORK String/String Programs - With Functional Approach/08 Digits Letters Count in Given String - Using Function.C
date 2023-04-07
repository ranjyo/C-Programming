#include<stdio.h>
#include<conio.h>

int  Digits_Count(char *);

int main()
{
            char cSrc[20] = "";
            int D_Count = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            D_Count = Digits_Count(cSrc);

            printf("\n Digits Count in Given String is : %d.", D_Count);

            getch();
            return 0;
}

int  Digits_Count(char *Str)
{
        int  Cnt = 0, i = 0;

        while(Str[i] != '\0')
        {
                if( Str[i] >= '0' && Str[i] <= '9' )
                {
                        Cnt++;
                }

                i++;
        }

        return Cnt;
}
