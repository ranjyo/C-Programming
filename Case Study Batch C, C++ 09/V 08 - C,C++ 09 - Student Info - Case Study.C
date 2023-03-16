////////////////////////////////////////////////////////////////////////////////////////////
//
//  Student Information System For Admissions For Courses
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

static int sCnt = 0;  /// 5
static int No_Of_Stud = 0;

void Create_Batch(struct Stud**);
void Accept_Student_Details(struct Stud*);
void Display_Student_Details(struct Stud*);
void Search_Student_Details(struct Stud*, int);

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
            char ch = '\0';
            struct Stud *StdPtr = NULL;
            int RNo = 0, Choice  = 0;

            Create_Batch(&StdPtr);

            while(1)
            {
                        printf("\n\n ==========================******==========================");

                        printf("\n\n 1. Add Student \n 2. Display All Students \n 3. Search Student \n 4. Exit");

                        printf("\n\n ==========================******==========================");

                        printf("\n Enter Your Choice : ");
                        scanf("%d",&Choice);

                        switch(Choice)
                        {
                                        case 1:
                                                Accept_Student_Details(StdPtr);
                                                _getch();
                                                system("cls");

                                                break;

                                        case 2:
                                                Display_Student_Details(StdPtr);
                                                _getch();
                                                system("cls");

                                                break;
                                        case 3:
                                                printf("\n Enter Student Roll No To Search = ");
                                                scanf("%d", &RNo);

                                                Search_Student_Details(StdPtr, RNo);
                                                _getch();
                                                system("cls");

                                                break;

                                        case 4:

                                                printf("\n Are You Sure?? \n Do You Want To Exit??? (YES / NO) : ");

                                                fflush(stdin);

                                                ch = getchar();

                                                if(ch == 'y' || ch == 'Y')
                                                {
                                                    goto quit;
                                                }

                                                fflush(stdin);
                                                system("cls");

                                                break;

                                        default :

                                                printf("\n\n Invalid Input Please Select Valid Choice.");
                                                printf("\n Press Any Key To Continue ");

                                                _getch();
                                                system("cls");

                                                break;
                        }
            }

            quit:
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
            static int Roll_Num = 101;

            if(No_Of_Stud < sCnt)
            {
                        printf("\n Enter Details For Student with Roll No =  %d.\n", Roll_Num);

                        sPtr[No_Of_Stud].Roll_No = Roll_Num;

                        fflush(stdin);

                        printf("\n Enter Student Name : ");
                        //scanf("%[^\n]", &Std->Name);
                        gets(sPtr[No_Of_Stud].Name);

                        printf("\n Enter Physics Marks : ");
                        scanf("%d", &sPtr[No_Of_Stud].Phy);

                        printf("\n Enter Chemistry Marks : ");
                        scanf("%d", &sPtr[No_Of_Stud].Chem);

                        printf("\n Enter Mathematics Marks : ");
                        scanf("%d", &sPtr[No_Of_Stud].Maths);

                        sPtr[No_Of_Stud].Total = sPtr[No_Of_Stud].Phy + sPtr[No_Of_Stud].Chem + sPtr[No_Of_Stud].Maths;

                        sPtr[No_Of_Stud].Per = (sPtr[No_Of_Stud].Total / 300) * 100;

                        No_Of_Stud++;
                        Roll_Num++;
            }
            else
            {
                        printf("\n\n Batch Full Can't Add More Students!!!");
            }

            printf("\n Enter Any Key To Go Ahead => ");
            _getch();

            return;
}

void Search_Student_Details(struct Stud* sPtr, int RNo)
{
            int i = 0;

            for(i = 0; i < No_Of_Stud; i++)
            {
                    if(sPtr[i].Roll_No == RNo)
                    {
                                    printf("\n ==================*****======================= ");

                                    printf("\n\n Searched Student Details =>\n ", i+1);
                                    printf("\n\t\t Roll Number       = %d", sPtr[i].Roll_No);
                                    printf("\n\t\t Student Name      = %s", sPtr[i].Name);
                                    printf("\n\t\t Physics Marks     = %d", sPtr[i].Phy);
                                    printf("\n\t\t Chemistry Marks   = %d", sPtr[i].Chem);
                                    printf("\n\t\t Mathematics Marks = %d", sPtr[i].Maths);
                                    printf("\n\t\t Total Marks       = %0.0f", sPtr[i].Total);
                                    printf("\n\t\t Percentage        = %0.3f", sPtr[i].Per);

                                    printf("\n\n ==================*****======================= ");

                                    break;
                    }
            }

            if(i == No_Of_Stud)
            {
                                    printf("\n No Such Student Found!!!");
            }

            _getch();
            return;
}

void Display_Student_Details(struct Stud *sPtr)
{
            if(No_Of_Stud == 0)
            {
                    printf("\n No Student Added Yet!!!");
            }
            else
            {
                    printf("\n ==================*****======================= ");

                    printf("\n\n Entered Students Details Are => \n\n");

                    for(int i = 0; i < No_Of_Stud; i++)
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
            }

            _getch();
            return;
}
