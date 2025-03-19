///Accept 3 Subject Marks and Display Their Total & Percentage
#include<stdio.h>
#include<conio.h>

int main()
{
    int S1 = 0, S2 = 0, S3 = 0, Total = 0;
    float Per = 0.0;

    printf("\n Enter 3 Subjects Marks => \n");

    printf("\n Enter 1st Subject Marks : ");
    scanf("%d",&S1);
    printf("\n Enter 2nd Subject Marks : ");
    scanf("%d",&S2);
    printf("\n Enter 3rd Subject Marks : ");
    scanf("%d",&S3);

    Total = S1 + S2 + S3;
    Per =  float(Total)/ 3;

    printf("\n Total Marks = %d + %d + %d = %d.\n", S1, S2, S3, Total);
    printf("\n Percentage  = %f.",Per);

    getch();
    return 0;
}
