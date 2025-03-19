#include<stdio.h>
#include<conio.h>

int main()
{
        char Opr = 0;
        int N1 = 0, N2 = 0;

        printf("\n Enter an Operation (+, -, *, /, %)  = ");
        scanf("%c", &Opr);

        switch(Opr)
        {
            case '+':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&N1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&N2);

                    printf("\n\n Addition of %d + %d = %d.", N1, N2, (N1 + N2));

                    break;

            case '-':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&N1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&N2);

                    printf("\n\n Subtraction of %d - %d = %d.", N1, N2, (N1 - N2));

                    break;

            case '*':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&N1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&N2);

                    printf("\n\n Multiplication of %d * %d = %d.", N1, N2, (N1 * N2));

                    break;

            case '/':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&N1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&N2);

                    printf("\n\n Division of %d / %d = %d.", N1, N2, (N1 / N2));

                    break;

            case '%':
                    printf("\n Enter 1st Number : ");
                    scanf("%d",&N1);
                    printf("\n Enter 2nd Number : ");
                    scanf("%d",&N2);

                    printf("\n\n Remainder of %d %% %d = %d.", N1, N2, (N1 % N2));

                    break;

            default:
                    printf("\n\n Invalid Symbol/Operator!!!");
                    break;
        }

        printf("\n\n Thanks!!!");

        getch();
        return  0;
}
