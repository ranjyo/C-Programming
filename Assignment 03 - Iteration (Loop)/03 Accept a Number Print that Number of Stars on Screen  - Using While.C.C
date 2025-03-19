/// Accept a Number Print that Number of * on Screen  - Using While

#include<stdio.h>
#include<conio.h>

int main()
{
        int No = 0;

        printf("\n Enter a Number = ");
        scanf("%d",&No);        /// 7

        if(No < 1)
        {
            printf("\n INVALID INPUT");
            return -1;
        }

        printf("\n\n");

        while( No > 0 )
        {
                printf(" * ");
                No--;
        }

        printf("\n\n Thanks!!!");

        getch();
        return  0;
}
