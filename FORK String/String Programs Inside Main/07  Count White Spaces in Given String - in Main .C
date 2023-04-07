// Count White Spaces in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[50] ={'\0'};
            int Space_Cnt = 0, i = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                        if( cSrc[i] == ' ')                                               // if(cSrc[i] == 32)                   // 32 is ASCII value for SpaceBar Character
                        {
                                    Space_Cnt++;
                        }
                        i++;
            }

            printf("\n Count Of White Spaces in Given String is = %d.", Space_Cnt);

            getch();
            return 0;
}
