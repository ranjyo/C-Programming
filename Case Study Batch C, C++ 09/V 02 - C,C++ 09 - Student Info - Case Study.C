////////////////////////////////////////////////////////////////////////////////////////////
//
//  Student Information System For Admissions For Courses
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
                int  Roll_No;
                char  Name[80];
                int Phy;
                int Chem;
                int Maths;
                float Total;
                float  Per;
};

int main()
{
            struct Stud Std;

            printf("\n Enter Student Details =>\n ");

            printf("\n Enter Student Roll No : ");
            scanf("%d", &Std.Roll_No);

            fflush(stdin);

            printf("\n Enter Student Name : ");
            //scanf("%s", &Std.Name);
            gets(Std.Name);

            printf("\n Enter Physics Marks : ");
            scanf("%d", &Std.Phy);

            printf("\n Enter Chemistry Marks : ");
            scanf("%d", &Std.Chem);

            printf("\n Enter Mathematics Marks : ");
            scanf("%d", &Std.Maths);

            Std.Total = Std.Phy + Std.Chem + Std.Maths;

            Std.Per = (Std.Total / 300) * 100;

            printf("\n Enter Any Key To Go Ahead => ");
            _getch();

            printf("\n ==================*****======================= ");

            printf("\n\n Entered Students Details Are => \n\n");

            printf("\n\t\t Roll Number       = %d", Std.Roll_No);
            printf("\n\t\t Student Name      = %s", Std.Name);
            printf("\n\t\t Physics Marks     = %d", Std.Phy);
            printf("\n\t\t Chemistry Marks   = %d", Std.Chem);
            printf("\n\t\t Mathematics Marks = %d", Std.Maths);
            printf("\n\t\t Total Marks       = %0.0f", Std.Total);
            printf("\n\t\t Percentage        = %0.3f", Std.Per);

            printf("\n\n ==================*****======================= ");

            printf("\n\n Thanks For Using Our Application!!!");

            _getch();
            return 0;
}
