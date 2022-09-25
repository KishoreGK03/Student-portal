#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct Student
{
    int roll_num;
    char name[50];
    float per;
    struct Student *next;
}*head;
void add()
{
    system("cls");
    int roll_num;
    float per;
    char name[50];
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
    printf("\t\t###########################################################################");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t############                         marks                     ############");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t###########################################################################");
    printf("\n\n\n\t\t\t***********************************************");
    printf("\n\t\t\t\tEnter roll number: ");
    scanf("%d", &roll_num);
    printf("\n\t\t\t***********************************************");
    printf("\n\t\t\t\tEnter name: ");
    scanf("%s", name);
    printf("\n\t\t\t***********************************************");
    printf("\n\t\t\t\tEnter percentage: ");
    scanf("%f", &per);
    printf("\n\t\t\t***********************************************");
    student->roll_num = roll_num;
    strcpy(student->name, name);
    student->per = per;
    student->next = NULL;
    if(head==NULL)
    {
        head = student;
    }
    else
    {
    student->next = head;
    head = student;
    }
}

void edit()
{
    system("cls");
    printf("\t\t###########################################################################");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t############                 Edit                              ############");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t###########################################################################");
    int roll_num;
    printf("\n\t\t\t\tEnter roll number to edit: ");
    scanf("%d", &roll_num);
    struct Student * temp = head;
    while(temp!=NULL)
    {
        if(temp->roll_num==roll_num)
        {
            printf("\t\t\t\tRoll number %d Found !!!\n", roll_num);
            printf("\t\t\t\tEnter new percentage: ");
            scanf("%f",&temp->per);
            printf("\t\t\t\tSuccessfully edited!!!\n");
            return;
        }
    temp = temp->next;
    }
    printf("\n\t\t\t\t********************************");
    printf("\n\t\t\t\tRoll number %d is not found !!!\n", roll_num);
    printf("\n\t\t\t\t********************************");
    printf("\n\n\t\t\tpress any key to return...");
    getch();
}
void Delete()
{
    system("cls");
    printf("\t\t###########################################################################");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t############                 Delete                            ############");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t###########################################################################");
    int roll_num;
    printf("\n\t\t\t\tEnter roll number to delete: ");
    scanf("%d", &roll_num);
    struct Student * temp1 = head;
    struct Student * temp2 = head;
    while(temp1!=NULL)
    {
        if(temp1->roll_num==roll_num)
        {
            printf("\nRoll number %d Found !!!\n", roll_num);
            if(temp1==temp2)
            {
                head = head->next;
                free(temp1);
            }
            else
            {
                temp2->next = temp1->next;
                free(temp1);
            }
            printf("\nSuccessfully Deleted !!!\n");
            printf("");
            return;
        }
        temp2 = temp1;
        temp1 = temp1->next;
    }
    printf("\n\t\t\t\t********************************");
    printf("\n\t\t\t\tRoll number %d is not found !!!\n", roll_num);
    printf("\n\t\t\t\t********************************");
    printf("\n\n\t\t\tpress any key to return...");
    getch();
}
void display()
{
    system("cls");
    printf("\t\t###########################################################################");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t############                 Displaying the marks              ############");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t###########################################################################");
    struct Student * temp = head;
    while(temp!=NULL)
    {
        printf("\n\t\t\t\t********************************");
        printf("\n\t\t\t\t\tRoll Number: %d", temp->roll_num);
        printf("\n\t\t\t\t\tName: %s", temp->name);
        printf("\n\t\t\t\t\tPercentage: %0.2f", temp->per);
        printf("\n\t\t\t\t********************************");
        temp = temp->next;
    }
    printf("\n\n\t\t\tpress any key to return...");
    getch();
}
void search(int roll_num)
{
    system("cls");
    struct Student * temp = head;
    printf("\t\t###########################################################################");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t############                 Displaying the marks              ############");
    printf("\n\t\t############                                                   ############");
    printf("\n\t\t###########################################################################");
    while(temp!=NULL)
    {
        if(temp->roll_num==roll_num)
        {
            printf("\n\t\t\t\tRoll Number: %d\n", temp->roll_num);
            printf("\n\t\t\t\tName: \t%s\n", temp->name);
            printf("\n\t\t\t\tpercentage: %0.4f\n", temp->per);
            getch();
            return 0;

        }
        temp = temp->next;
    }
    printf("\n\t\t\t\tStudent with roll number %d is not found !!!\n", roll_num);
    printf("\n\n\t\t\tpress any key to return...");
    getch();
}

int main()
{
    int roll_num;
    head = NULL;
    int choice,desig;
    char password,correct_password=20202025;

    while(desig != 3)
    {
        system("cls");
        printf("\t\t###########################################################################");
        printf("\n\t\t############                                                   ############");
        printf("\n\t\t############            Student portal System in C             ############");
        printf("\n\t\t############                                                   ############");
        printf("\n\t\t###########################################################################");

        printf("\n\n\n\t\t\t1.Teacher\n\t\t\t2.Student\n\t\t\t3.Exit\n\t\t\tPlease state your designation : ");
        scanf("%d",&desig);
        if(desig==1)
        {
            system("cls");
            printf("\t\t###########################################################################");
            printf("\n\t\t############                                                   ############");
            printf("\n\t\t############                    Teacher log in                 ############");
            printf("\n\t\t############                                                   ############");
            printf("\n\t\t###########################################################################");
            printf("\n\n\n\n\t\t\t\tPlease enter the password : ");
            scanf("%d",&password);
            if(password==correct_password)
            {

                do
                {
                    system("cls");
                    printf("\n\t\t###########################################################################");
                    printf("\n\t\t############                                                   ############");
                    printf("\n\t\t############                         MENU                      ############");
                    printf("\n\t\t############                                                   ############");
                    printf("\n\t\t###########################################################################");
                    printf("\n\n\n\t\t\t***********************************************");
                    printf("\n\t\t\t\t\t1.To add marks");
                    printf("\n\t\t\t***********************************************");
                    printf("\n\t\t\t\t\t2.To delete student detail");
                    printf("\n\t\t\t***********************************************");
                    printf("\n\t\t\t\t\t3.To edit student marks");
                    printf("\n\t\t\t***********************************************");
                    printf("\n\t\t\t\t\t4.To display student marks ");
                    printf("\n\t\t\t***********************************************");
                    printf("\n\t\t\t\t\t5.To stop the process");
                    printf("\n\t\t\t***********************************************");
                    printf("\n\n\t\t\t\tEnter Choice : ");
                    scanf("%d", &choice);

                    switch (choice)
                    {
                    case 1:
                        add();
                        break;
                    case 2:

                        Delete();
                        break;
                    case 3:

                        edit();
                        break;
                    case 4:
                        display();
                        break;
                    }
                }
                while(choice != 5);

            }
            else
            {
                printf("\n\t\t\t***********************************************");
                printf("\n\t\t\t\t\tIncorrect password!!");
                printf("\n\t\t\t***********************************************");
                printf("\n\n\t\t\tpress any key to return to portal...");
                getch();
            }

        }
        if(desig==2)
        {
            system("cls");
            printf("\t\t###########################################################################");
            printf("\n\t\t############                                                   ############");
            printf("\n\t\t############                    Student log in                 ############");
            printf("\n\t\t############                                                   ############");
            printf("\n\t\t###########################################################################");
            printf("\n\t\t\t\tPlease enter your roll no. : ");
            scanf("%d",&roll_num);
            search(roll_num);
        }

    }
}
