#include<stdio.h>
#include<conio.h>

int  Cap_Count(char *);

int main()
{
            char cSrc[20] = "";
            int C_Count = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            C_Count = Cap_Count(cSrc);

            printf("\n Capital Letters Count in Given String is : %d.", C_Count);

            getch();
            return 0;
}

int  Cap_Count(char *Str)
{
        int  Cnt = 0, i = 0;

        while(Str[i] != '\0')
        {
                if( Str[i] >= 'A' && Str[i] <= 'Z' )
                {
                        Cnt++;
                }

                i++;
        }

        return Cnt;
}
