#include<stdio.h>
#include<conio.h>

int  Special_Count(char *);

int main()
{
            char cSrc[20] = "";
            int Sp_Count = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            Sp_Count = Special_Count(cSrc);

            printf("\n Special Symbols Count in Given String is : %d.", Sp_Count);

            getch();
            return 0;
}

int  Special_Count(char *Str)
{
        int  Cnt = 0, i = 0;

        while(Str[i] != '\0')
        {
                if(!( (Str[i] >= 'a' && Str[i] <= 'z' )  || (Str[i] >= 'A' && Str[i] <= 'Z' ) || (Str[i] >= '0' && Str[i] <= '9' ) || (Str[i]== ' ' )  )  )
                {
                        Cnt++;
                }

                i++;
        }

        return Cnt;
}
