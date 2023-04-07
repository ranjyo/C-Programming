#include<stdio.h>
#include<conio.h>

int main()
{
            char cArr[50] ={'\0'};

            puts("\n Enter a string : ");                                                    // printf("\n Enter a string : ");
            gets(cArr);                                                                                   //  scanf("%[^\n]",cArr);

            puts("\n Given String is => ");
            puts(cArr);                                                                                // printf("\n Given String is => %s", cArr);

            getch();
            return 0;
}
