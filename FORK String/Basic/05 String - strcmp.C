#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        int Count = 0;
        char Name[20] = "";
        char SNm[20] = "";

        printf("\n Enter Name1 = ");
        gets(Name);
        printf("\n Enter Name2 = ");
        gets(SNm);

        Count = strcmp(Name, SNm);

        if(Count == 0)
        {
            printf("\n Both Strings are SAME.");
        }
        else
        {
            printf("\n Both Strings are Different.");
        }

        getch();
        return 0;
}
