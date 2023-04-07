#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
            char Name[20] = "Unknown";
            char FNm[20] = "Jack Fruit";

            printf("\n String Value = %s.", Name);

            /// Name = "Harry";         /// Not Allowed
            /// Name = FNm;             /// Not Allowed

            strcpy(Name, "Harry");
            printf("\n New String Value = %s.", Name);

            getch();

            strcpy(Name, FNm);
            printf("\n Updated String Value = %s.", Name);

            getch();
            return 0;
}
