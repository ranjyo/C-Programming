#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[20] ={'\0'};
            int i = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(i <= 20)
            {
                        if(cSrc[i] == '\0')
                        {
                                break;
                        }
                        i++;
            }

            printf("\n  Length of given String is = %d",i);

            _getch();
            return 0;
}
