#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    printf("\n Cube of %d is = %d.", No, (No * No * No));

    getch();
    return 0;
}
