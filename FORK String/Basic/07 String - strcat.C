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

        strcpy( Name , strcat(FirstName, LastName));

        printf("\n Name Generated is = %s.", Name);

        getch();
        return 0;
}
