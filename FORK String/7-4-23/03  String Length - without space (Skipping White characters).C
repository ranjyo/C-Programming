#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] ={'\0'};
        int i = 0, Cnt = 0;

        puts("\n Enter a string : ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                if(cSrc[i] != ' ' && cSrc[i] != '\t')
                {
                      Cnt++;
                }
                i++;
        }

        printf("\n NonSpace Length of <%s> String is = %d",cSrc, Cnt);

        getch();
        return 0;
}
