#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] ={'\0'};
        int i = 0, dCnt = 0;

        puts("\n Enter a string : ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                if( cSrc[i] >= '0' && cSrc[i] <= '9' )
                {
                      dCnt++;
                }
                i++;
        }

        printf("\n Digits Count of <%s> String is = %d",cSrc, dCnt);

        getch();
        return 0;
}
