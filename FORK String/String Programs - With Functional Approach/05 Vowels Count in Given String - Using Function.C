#include<stdio.h>
#include<conio.h>

int  Vowel_Count(char *);

int main()
{
            char cSrc[20] = "";
            int V_Count = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            V_Count = Vowel_Count(cSrc);

            printf("\n Vowels Count in Given String is : %d.", V_Count);

            getch();
            return 0;
}

int  Vowel_Count(char *Str)
{
        int  Cnt = 0, i = 0;

        while(Str[i] != '\0')
        {
                if(Str[i] == 'a' || Str[i] == 'e' || Str[i] == 'i' || Str[i] == 'o' || Str[i] == 'u' || Str[i] == 'A' || Str[i] == 'E'|| Str[i] == 'I' || Str[i] == 'O' || Str[i] == 'U')
                {
                        Cnt++;
                }

                i++;
        }

        return Cnt;
}
