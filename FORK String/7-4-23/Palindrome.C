#include<stdio.h>
#include<conio.h>

int main()
{
            char cSrc[20] ={'\0'};
            int i = 0, j = 0;

            printf("\n Enter a string : ");
            gets(cSrc);

            while(cSrc[i] != '\0')
            {
                       i++;
            }

            i = i - 1;

            while( i > j )
            {
                        if(cSrc[i] != cSrc[j])
                        {
                            break;
                        }
                         j++;
                         i--;
            }

            if(i <= j)
                printf("\n  Given String is Palindrome !!!",cSrc);
            else
                printf("\n  Given String is Not Palindrome !!!",cSrc);

            getch();
            return 0;
}
