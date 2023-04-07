#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char FirstName[20] = "";
        char LastName[20] = "";
        char Name[40] = "";

        printf("\n Enter First Name = ");
        gets(FirstName);
        printf("\n Enter Last Name = ");
        gets(LastName);

        printf("\n First Name Entered is = %s.",FirstName);
        printf("\n Last Name Entered is = %s.",LastName);

        strcat(strcat( strcat(Name, FirstName), " "), LastName);

        printf("\n\n =================================== \n");

        printf("\n Name Generated is = %s.", Name);

        getch();

        printf("\n\n =================================== \n");

        printf("\n First Name Entered is = %s.",FirstName);
        printf("\n Last Name Entered is = %s.",LastName);

        getch();
        return 0;
}
