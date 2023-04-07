#include<stdio.h>
#include<conio.h>

int main()
{
            char cArr[20] = {'K', 'A', 'R', 'A', 'D'};

            puts(cArr);

            puts("\n Enter a string : ");                                                    // printf("\n Enter a string : ");
            gets(cArr);                                                                                   //  scanf("%[^\n]",cArr);

            puts("\n Given String is => ");
            puts(cArr);                                                                                // printf("\n Given String is => %s", cArr);

            _getch();
            return 0;
}
