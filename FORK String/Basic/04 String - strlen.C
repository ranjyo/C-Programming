#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        int Len = 0;
        char Name[20] = "Unknown";

        printf("\n String Value = %s.", Name);

        printf("\n Enter Your Name = ");
        gets(Name);                     ///scanf("%s",&Name);

        Len = strlen(Name);

        printf("\n Length of Given String is = %d.", Len);

        getch();
        return 0;
}
