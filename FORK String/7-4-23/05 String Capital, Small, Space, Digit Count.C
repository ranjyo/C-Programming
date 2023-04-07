#include<stdio.h>
#include<conio.h>

int main()
{
        char cSrc[50] ={'\0'};
        int i = 0, dCnt = 0, smCnt = 0, capCnt = 0, spCnt = 0;

        puts("\n Enter a string : ");
        gets(cSrc);

        while(cSrc[i] != '\0')
        {
                if( cSrc[i] >= 'a' && cSrc[i] <= 'z' )
                {
                      smCnt++;
                }
                else if( cSrc[i] >= 'A' && cSrc[i] <= 'Z' )
                {
                      capCnt++;
                }
                else if( cSrc[i] >= '0' && cSrc[i] <= '9' )
                {
                      dCnt++;
                }
                else if( cSrc[i] == ' ' || cSrc[i] == '\t' )
                {
                      spCnt++;
                }

                i++;
        }

        printf("\n Digits Count in given String is = %d", dCnt);
        printf("\n Cap Count in given String is    = %d", capCnt);
        printf("\n Small Count in given String is  = %d", smCnt);
        printf("\n Space Count in given String is  = %d", spCnt);

        getch();
        return 0;
}
