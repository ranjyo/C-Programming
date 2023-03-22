#include<stdio.h>
#include<conio.h>

int main()
{
            int i = 0, j = 0, X = 0;

            printf("Enter Size for Pattern : ");
            scanf("%d",&X);

            printf("\n============Pattern==============\n\n");

            for(i = 1; i <= X; i++ )
            {
                        for( j = 1; j <= X; j++ )
                        {
                            if( i == 1 || i == X || j == 1  || i == (X/2)+1 )
                            {
                                    printf(" * ");
                            }
                            else
                            {
                                    printf("   ");
                            }
                        }
                        printf("\n");
            }

            printf("\n=================================\n");

            getch();
            return 0;
}
