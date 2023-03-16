/// ////////////////////////////////////////////////////////////////////////////////////////////
///
/// Student Information System For Admissions For Courses
///
/// //////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int  BBA_Cnt = 0, BCA_Cnt = 0, BCS_Cnt = 0;

struct Stud
{
                int  ID;
                char  Name[40];
                long long int  Mob_No;
                int  Marks[3];
                int  Total;
                float  Per;
                char  Course_NM[20];
};

void  Create_Batch(struct Stud**, int);
void  Add_New_Student(struct Stud**);
void  Display_All_Students(struct Stud*);
void  Display_Topper(struct  Stud*);

int main()
{
            char ch = '\0';
            int  Choice = 0, BBA_intake = 0, BCA_intake = 0, BCS_intake = 0;

            struct Stud *BBA ,  *BCA ,  *BCS;

            printf("\n Enter Intake Capacity for BBA Course : ");
            scanf("%d",&BBA_intake);

            printf("\n Enter Intake Capacity for BCA Course : ");
            scanf("%d",&BCA_intake);

            printf("\n Enter Intake Capacity for BCS Course : ");
            scanf("%d",&BCS_intake);

            Create_Batch(&BBA, BBA_intake);
            Create_Batch(&BCA, BCA_intake);
            Create_Batch(&BCS, BCS_intake);

            getch();
            system("cls");

            for(;;)
            {
                            printf("\n\n ****** Welcome To Admission Systems Of Computers Department ******\n\n ");

                            printf("\n 1. Add New Student");
                            printf("\n 2. Display Admissions of Students Department Wise");
                            printf("\n 3. Display Single Student Details With ID");
                            printf("\n 4. Display Topper Of Particular Dept ");
                            printf("\n 5. EXIT");

                            printf("\n\n Enter Your Choice : ");
                            scanf("%d",&Choice);

                            switch(Choice)
                            {
                                        case 1:
                                                            printf("\n Add_Student Function Will be called here");
                                                            _getch();
                                                            system("cls");
                                                            break;
                                        case 2:
                                                            printf("\n Display Admitted Function Will be called here");
                                                            _getch();
                                                            system("cls");
                                                            break;
                                        case 3:
                                                            printf("\n Display Single Student Function Will be called here");
                                                            _getch();
                                                            system("cls");
                                                            break;
                                        case 4:
                                                            printf("\n Display Topper Student Function Will be called here");
                                                            _getch();
                                                            system("cls");
                                                            break;
                                        case 5:
                                                            printf("\n Are You Sure??? Want To Exit Application??? (Yes / No)");

                                                            fflush(stdin);

                                                            ch = getchar();

                                                            if(ch == 'y' || ch == 'Y')
                                                            {
                                                                        goto OUT;
                                                            }

                                                            system("cls");

                                                            fflush(stdin);
                                                            break;
                                        default:
                                                            printf("\n Invalid Choice");
                                                            _getch();
                                                            system("cls");
                                                            break;
                            }
            }

            OUT:
                    printf("\n\n Thanks For Using Our Application!!!");

            _getch();
            return 0;
}

void  Create_Batch(struct Stud**  SP_Ptr, int  Intake)
{
                *SP_Ptr = (struct Stud*) malloc (Intake * sizeof(struct Stud));
                printf("\n Given Department Students Memory allocated for %d Students!!!", Intake);

                return;
}
