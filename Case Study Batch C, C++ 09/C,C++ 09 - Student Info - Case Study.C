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
            struct Stud Obj;

            Obj.Roll_No = 15;
            strcpy(Obj.Name, "Raj Patil");
            Obj.Phy = 82;
            Obj.Chem = 75;
            Obj.Maths = 55;

            Obj.Total = Obj.Phy + Obj.Chem + Obj.Maths;

            Obj.Per = (Obj.Total / 300) * 100;

            printf("\n Roll Number = %d", Obj.Roll_No);
            printf("\n Name = %s", Obj.Name);
            printf("\n Total Marks = %0.0f", Obj.Total);
            printf("\n Percentage = %0.3f", Obj.Per);

            printf("\n\n Thanks For Using Our Application!!!");

            _getch();
            return 0;
}
