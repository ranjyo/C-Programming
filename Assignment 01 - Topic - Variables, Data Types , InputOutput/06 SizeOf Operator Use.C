#include<stdio.h>
#include<conio.h>

int main()
{
    double No = 0;
    char Name[20] = "";

    printf("\n Size For No Variable is = %d.",sizeof(No));
    printf("\n Size For int is = %d.",sizeof(int));
    printf("\n Size For char is = %d.",sizeof(char));
    printf("\n Size For void is = %d.",sizeof(void));
    printf("\n Size For short int is = %d.",sizeof(short int));
    printf("\n Size For Name String is = %d.",sizeof(Name));

    getch();
    return 0;
}
