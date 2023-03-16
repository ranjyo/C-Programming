////////////////////////////////////////////////////////////////////////////////////////////
//
//  Student Information System For Admissions For Courses
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

static int sCnt = 0;
void Create_Batch(struct Stud**);
void Accept_Student_Details(struct Stud*);
void Display_Student_Details(struct Stud*);

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
            struct Stud *StdPtr = NULL;

            Create_Batch(&StdPtr);

            Accept_Student_Details(StdPtr);

            Display_Student_Details(StdPtr);

            printf("\n\n Thanks For Using Our Application!!!");

            _getch();
            return 0;
}

void Create_Batch(struct Stud **sPPtr)
{
            printf("\n Enter How Many Students = ");
            scanf("%d", &sCnt);

            *sPPtr = (struct Stud*)malloc(sCnt * sizeof(struct Stud));

            return;
}

void Accept_Student_Details(struct Stud *sPtr)
{
            for(int i = 0; i < sCnt; i++)
            {
                printf("\n Enter Student %d Details =>\n ", i+1);
                printf("\n Enter Student Roll No : ");
                scanf("%d", &sPtr[i].Roll_No);

                fflush(stdin);

                printf("\n Enter Student Name : ");
                //scanf("%[^\n]", &Std->Name);
                gets(sPtr[i].Name);

                printf("\n Enter Physics Marks : ");
                scanf("%d", &sPtr[i].Phy);

                printf("\n Enter Chemistry Marks : ");
                scanf("%d", &sPtr[i].Chem);

                printf("\n Enter Mathematics Marks : ");
                scanf("%d", &sPtr[i].Maths);

                sPtr[i].Total = sPtr[i].Phy + sPtr[i].Chem + sPtr[i].Maths;

                sPtr[i].Per = (sPtr[i].Total / 300) * 100;
            }

            printf("\n Enter Any Key To Go Ahead => ");
            _getch();

            return;
}

void Display_Student_Details(struct Stud *sPtr)
{
            printf("\n ==================*****======================= ");

            printf("\n\n Entered Students Details Are => \n\n");

            for(int i = 0; i < sCnt; i++)
            {
                printf("\n\n %d Student Details =>\n ", i+1);
                printf("\n\t\t Roll Number       = %d", sPtr[i].Roll_No);
                printf("\n\t\t Student Name      = %s", sPtr[i].Name);
                printf("\n\t\t Physics Marks     = %d", sPtr[i].Phy);
                printf("\n\t\t Chemistry Marks   = %d", sPtr[i].Chem);
                printf("\n\t\t Mathematics Marks = %d", sPtr[i].Maths);
                printf("\n\t\t Total Marks       = %0.0f", sPtr[i].Total);
                printf("\n\t\t Percentage        = %0.3f", sPtr[i].Per);

                printf("\n\n ==================*****======================= ");
            }
            _getch();
            return;
}
