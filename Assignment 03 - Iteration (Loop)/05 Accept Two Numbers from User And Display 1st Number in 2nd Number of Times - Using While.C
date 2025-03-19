#include<stdio.h>
#include<conio.h>

int main()
{
        int N1 = 0, N2 = 0;

        printf("\n Enter 1st Number = ");
        scanf("%d",&N1);        /// 21
        printf("\n Enter 2nd Number = ");
        scanf("%d",&N2);        ///7

        if(N2 < 1)
        {
            printf("\n INVALID INPUT");
            return -1;
        }

        printf("\n ========*********======== \n\n");

        while( N2 > 0)
        {
                printf("  %d ", N1);
                N2--;
        }

        printf("\n\n ========*********======== \n");
        printf("\n Thanks!!!");

        getch();
        return  0;
}
