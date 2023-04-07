#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
                char cSrc[10] = {'\0'};
                int SmallCnt = 0, CapCnt = 0, DigCnt = 0,SplCnt = 0, Len = 0;

                Up:
                        printf("\n ====================== Please,  Enter Valid Password ====================== \n");
                        printf("\n Password Must Contain \n At least 1 Small letters, 1 Capital Letter, 1 Digits & 1 Special Character,");
                        printf("\n And Password Length Should be Minimum 8 & Maximum of 10 Characters");
                        printf("\n\n ==================================================================== \n");
                        SmallCnt = CapCnt = DigCnt = SplCnt = Len = 0;

                        printf("\n\n Enter Your Password = ");
                        gets(cSrc);

                        while(cSrc[Len] != '\0')
                        {
                                    if(cSrc[Len]>='a' && cSrc[Len]<='z')
                                    {
                                                SmallCnt++;
                                    }
                                    else if(cSrc[Len]>='A' && cSrc[Len]<='Z')
                                    {
                                                CapCnt++;
                                    }
                                    else if(cSrc[Len]>='0' && cSrc[Len]<='9')
                                    {
                                                DigCnt++;
                                    }
                                    else
                                    {
                                                SplCnt++;
                                    }
                                    Len++;
                        }

                        printf("\n Small Letters = %d\n Capital Letters = %d\n Digit Count = %d\n Special Characters = %d\n Password Length = %d",SmallCnt, CapCnt, DigCnt, SplCnt, Len);

                        printf("\n\n ==================================================================== \n");
                        if(SmallCnt > 0 && CapCnt > 0 && DigCnt > 0 && SplCnt > 0 && Len >= 8 && Len <= 10)
                        {
                                    printf("\n\t\t\t****Valid Password****\n\n\t\t\t\tWELCOME");
                        }
                        else
                        {
                                    printf("\n\n\t\tInvalid Password\n\n\t\t****Please Enter Valid Password****");
                                    printf("\n\n ==================================================================== \n");
                                    getch();
                                    system("cls");
                                    goto Up;
                        }

                       getch();
                       return 0;
}
