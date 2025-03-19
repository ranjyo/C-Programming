#include<stdio.h>
#include<conio.h>

int  main()
{
    int N1 = 0, N2 = 0, Temp = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&N1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&N2);

    printf("\n\n Before Swap => Number1 = %d, Number2 = %d.", N1, N2);

    getch();
    /// SWAP LOGIC
    Temp = N1;
    N1 = N2;
    N2 = Temp;

    printf("\n\n After Swap => Number1 = %d, Number2 = %d.", N1, N2);

    getch();
    return 0;
}
