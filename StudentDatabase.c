#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student
{
    char name[100];
    char roll[15];
    char date[10];
    char month[10];
    char year[10];
    char course[10];
    char gender[10];
    char phone[11];
    struct Student *NEXT;
};
struct Student *FIRST=NULL,*LAST=NULL;
void addStudent (void);
void displayStudent (void);
void displayAllStudent (void);
void readFromFile (void);
void saveToFile (void);
void displayStudentOfCourse (char[10]);
void deleteStudent (void);
void editStudent (void);
void searchStudent (void);
void main()
{
    int choice;
    long long int roll;
    readFromFile();
    while (1)
    {
        system ("CLS");
        printf ("Options\n\n");
        printf ("1-Add Student\n");
        printf ("2-Display Student\n");
        printf ("3-Delete Student\n");
        printf ("4-Edit Student\n");
        printf ("5-Search Student\n");
        printf ("6-Exit\n\n");
        printf ("Select your option:");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                addStudent();
                break;
            }
            case 2:
            {
                displayStudent();
                break;
            }
            case 3:
            {
                deleteStudent();
                break;
            }
            case 4:
            {
                editStudent();
                break;
            }
            case 5:
            {
                searchStudent();
                break;
            }
            case 6:
            {
                system ("CLS");
                printf ("Exiting...");
                sleep (2);
                exit(1);
            }
            default:
            {
                system ("CLS");
                printf ("Wrong Choice! Press any key to continue.");
                getch();
                break;
            }
        }
    }
}
void addStudent()
{
    system ("CLS");
    int i=0,c=1,choice,k=0,j=0;
    char temp[100],ch,roll[15],date[10],month[10],year[10],phone[11];
    struct Student *TEMP;
    struct Student *NEW=(struct Student*)malloc(sizeof (struct Student));
    printf ("Add Student\n\n");
    printf ("Enter University Roll Number (Min. 13 digits): ");
    while (1)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && i<13)
        {
            roll[i]=ch;
            printf ("%c",ch);
            i++;
        }
        else if ((int)ch==8 && i!=0)
        {
            roll[i]=' ';
            printf ("\b \b");
            i--;
        }
        else if ((int)ch==13 && i==13)
        {
            for (TEMP=FIRST;TEMP!=NULL;TEMP=TEMP->NEXT)
            {
                if (strcmp (TEMP->roll,roll)==0)
                {
                    system ("CLS");
                    printf ("Roll Number Already Exists.\n\nPress any key to continue.");
                    getch();
                    k=1;
                    return;
                }
            }
            if (k==0)
            {
                strcpy (NEW->roll,roll);
                break;
            }
        }
    }
    printf ("\n\nEnter Name: ");
    gets (temp);
    gets (NEW->name);
    printf ("\nEnter 10 digit Phone Number: ");
    i=0;
    while (1)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && i<10)
        {
            phone[i]=ch;
            printf ("%c",ch);
            i++;
        }
        else if ((int)ch==8 && i!=0)
        {
            phone[i]=' ';
            printf ("\b \b");
            i--;
        }
        else if ((int)ch==13 && i==10)
        {
            strcpy (NEW->phone,phone);
            break;
        }
    }
    printf ("\n\nDate of Birth\n\n");
    printf ("Enter Date (DD): ");
    j=0;
    while (1)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && j<2)
        {
            date[j]=ch;
            printf ("%c",ch);
            j++;
        }
        else if ((int)ch==8 && j!=0)
        {
            j--;
            date[j]=' ';
            printf ("\b \b");
        }
        else if ((int)ch==13 && j==2)
        {
            strcpy (NEW->date,date);
            break;
        }
    }
    printf ("\nEnter Month (MM): ");
    j=0;
    while (1)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && j<2)
        {
            month[j]=ch;
            printf ("%c",ch);
            j++;
        }
        else if ((int)ch==8 && j!=0)
        {
            j--;
            month[j]=' ';
            printf ("\b \b");
        }
        else if ((int)ch==13 && j==2)
        {
            strcpy (NEW->month,month);
            break;
        }
    }
    printf ("\nEnter Year (YYYY): ");
    j=0;
    while (1)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && j<4)
        {
            year[j]=ch;
            printf ("%c",ch);
            j++;
        }
        else if ((int)ch==8 && j!=0)
        {
            j--;
            year[j]=' ';
            printf ("\b \b");
        }
        else if ((int)ch==13 && j==4)
        {
            strcpy (NEW->year,year);
            break;
        }
    }
    while (c)
    {
        system ("CLS");
        printf ("Course\n\n");
        printf ("1-BCA\n");
        printf ("2-MCA\n");
        printf ("3-BTech\n");
        printf ("4-BCom\n");
        printf ("5-BBA\n");
        printf ("6-MBA\n");
        printf ("7-MTech\n");
        printf ("\nSelect your course: ");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                strcpy (NEW->course,"BCA");
                c=0;
                break;
            }
            case 2:
            {
                strcpy (NEW->course,"MCA");
                c=0;
                break;
            }
            case 3:
            {
                strcpy (NEW->course,"BTech");
                c=0;
                break;
            }
            case 4:
            {
                strcpy (NEW->course,"BCom");
                c=0;
                break;
            }
            case 5:
            {
                strcpy (NEW->course,"BBA");
                c=0;
                break;
            }
            case 6:
            {
                strcpy (NEW->course,"MBA");
                c=0;
                break;
            }
            case 7:
            {
                strcpy (NEW->course,"MTech");
                c=0;
                break;
            }
            default:
            {
                system ("CLS");
                printf ("Wrong Choice!\n\nPress any key to continue.");
                getch();
                break;
            }
        }
    }
    c=1;
    while (c)
    {
        system ("CLS");
        printf ("Gender\n\n");
        printf ("1-Male\n");
        printf ("2-Female\n");
        printf ("3-Others\n");
        printf ("\nSelect your gender: ");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                strcpy (NEW->gender,"Male");
                c=0;
                break;
            }
            case 2:
            {
                strcpy (NEW->gender,"Female");
                c=0;
                break;
            }
            case 3:
            {
                strcpy (NEW->gender,"Others");
                c=0;
                break;
            }
            default:
            {
                system ("CLS");
                printf ("Wrong Choice!\n\nPress any key to continue.");
                getch();
                break;
            }
        }
    }
    NEW->NEXT=NULL;
    if (FIRST==NULL)
    {
        FIRST=LAST=NEW;
    }
    else
    {
        LAST->NEXT=NEW;
        LAST=NEW;
    }
    system ("CLS");
    while (1)
    {
        printf ("Roll Number: %s\n",NEW->roll);
        printf ("Name: %s\n",NEW->name);
        printf ("Course: %s\n",NEW->course);
        printf ("DOB: %s/%s/%s\n",NEW->date,NEW->month,NEW->year);
        printf ("Phone Number: %s\n",NEW->phone);
        printf ("Gender: %s\n\n",NEW->gender);
        printf ("Press Enter to Save Data.");
        ch=getch();
        if ((int)ch==13)
        {
            saveToFile();
            break;
        }
        else
        {
            system ("CLS");
        }
    }
    system ("CLS");
    printf ("Student Added Successfully\n\nPress any key to continue.");
    getch ();
}
void displayStudent ()
{
    int choice,c=1;
    while (c)
    {
        system ("CLS");
        printf ("Display Student\n\n");
        printf ("1-Display All Students\n");
        printf ("2-Display Students of Course\n");
        printf ("3-Main Menu\n\n");
        printf ("Select your option: ");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                displayAllStudent ();
                break;
            }
            case 2:
            {
                int k=1;
                while (k)
                {
                    system ("CLS");
                    printf ("Course\n\n");
                    printf ("1-BCA\n");
                    printf ("2-MCA\n");
                    printf ("3-BTech\n");
                    printf ("4-BCom\n");
                    printf ("5-BBA\n");
                    printf ("6-MBA\n");
                    printf ("7-MTech\n");
                    printf ("\nSelect your course: ");
                    scanf ("%d",&choice);
                    switch (choice)
                    {
                        case 1:
                        {
                            displayStudentOfCourse ("BCA");
                            k=0;
                            break;
                        }
                        case 2:
                        {
                            displayStudentOfCourse ("MCA");
                            k=0;
                            break;
                        }
                        case 3:
                        {
                            displayStudentOfCourse ("BTech");
                            k=0;
                            break;
                        }
                        case 4:
                        {
                            displayStudentOfCourse ("BCom");
                            k=0;
                            break;
                        }
                        case 5:
                        {
                            displayStudentOfCourse ("BBA");
                            k=0;
                            break;
                        }
                        case 6:
                        {
                            displayStudentOfCourse ("MBA");
                            k=0;
                            break;
                        }
                        case 7:
                        {
                            displayStudentOfCourse ("MTech");
                            k=0;
                            break;
                        }
                        default:
                        {
                            system ("CLS");
                            printf ("Wrong Choice!\n\nPress any key to continue.");
                            getch();
                            break;
                        }
                    }
                }
                break;
            }
            case 3:
            {
                system ("CLS");
                printf ("Returning to Main Menu...");
                sleep (1);
                c=0;
                return;
            }
            default:
            {
                system ("CLS");
                printf ("Wrong Choice!\n\nPress any key to Continue.");
                getch();
                break;
            }
        }
    }
}
void displayAllStudent ()
{
    system ("CLS");
    printf ("All Students\n\n");
    int i,j,max=0,k=0;
    char roll[15];
    struct Student *TEMP,*TEMP1,*TEMP2,*TEMP3;
    char name[100],gender[10],course[10],phone[11],date[10],month[10],year[10];
    for (TEMP=FIRST;TEMP!=NULL;TEMP=TEMP->NEXT)
    {
        if (strlen(TEMP->name)>max)
        {
            k++;
            max=strlen(TEMP->name);
        }
    }
    if (k==0)
    {
        printf ("No Data Found.\n\nPress any Key to continue.");
        getch();
        return;
    }
    printf ("+");
    for (i=0;i<15;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<(max+2);i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<12;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<14;i++)
    {
        printf ("-");
    }
    printf ("+");
    printf ("\n");
    printf ("| Roll Number   | ");
    printf ("Name");
    for (i=0;i<(max-3);i++)
    {
        printf (" ");
    }
    printf ("| Course ");
    printf ("| DOB        | ");
    printf ("Gender | Phone Number |\n");
    printf ("+");
    for (i=0;i<15;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<(max+2);i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<12;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<14;i++)
    {
        printf ("-");
    }
    printf ("+");
    printf ("\n");
    for (TEMP1=FIRST;TEMP1!=NULL;TEMP1=TEMP1->NEXT)
    {
        for (TEMP2=FIRST;TEMP2!=NULL;TEMP2=TEMP2->NEXT)
        {
            if (strcmp (TEMP1->roll,TEMP2->roll)==-1)
            {
                strcpy (roll,TEMP1->roll);
                strcpy (TEMP1->roll,TEMP2->roll);
                strcpy (TEMP2->roll,roll);

                strcpy (name,TEMP1->name);
                strcpy (TEMP1->name,TEMP2->name);
                strcpy (TEMP2->name,name);

                strcpy (course,TEMP1->course);
                strcpy (TEMP1->course,TEMP2->course);
                strcpy (TEMP2->course,course);

                strcpy (gender,TEMP1->gender);
                strcpy (TEMP1->gender,TEMP2->gender);
                strcpy (TEMP2->gender,gender);

                strcpy (date,TEMP1->date);
                strcpy (TEMP1->date,TEMP2->date);
                strcpy (TEMP2->date,date);

                strcpy (month,TEMP1->month);
                strcpy (TEMP1->month,TEMP2->month);
                strcpy (TEMP2->month,month);

                strcpy (year,TEMP1->year);
                strcpy (TEMP1->year,TEMP2->year);
                strcpy (TEMP2->year,year);

                strcpy (phone,TEMP1->phone);
                strcpy (TEMP1->phone,TEMP2->phone);
                strcpy (TEMP2->phone,phone);
            }
        }
    }
    for (TEMP3=FIRST;TEMP3!=NULL;TEMP3=TEMP3->NEXT)
    {
        printf ("| %s | ",TEMP3->roll);
        printf ("%s",TEMP3->name);
        j=strlen(TEMP3->name);
        if (j==max)
        {
            printf (" |");
        }
        else
        {
            for (i=0;i<(max-j)+1;i++)
            {
                printf (" ");
            }
            printf ("|");
        }
        printf (" %s",TEMP3->course);
        j=strlen(TEMP3->course);
        for (i=0;i<(6-j)+1;i++)
        {
            printf (" ");
        }
        printf ("|");
        printf (" %s/%s/%s |",TEMP3->date,TEMP3->month,TEMP3->year);
        if (strcmp (TEMP3->gender,"Female")==0)
        {
            printf (" %s |",TEMP3->gender);
        }
        else
        {
            printf (" %s   |",TEMP3->gender);
        }
        printf (" %s   |\n",TEMP3->phone);
    }
    printf ("+");
    for (i=0;i<15;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<(max+2);i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<12;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<14;i++)
    {
        printf ("-");
    }
    printf ("+");
    printf ("\n");
    printf ("\nPress any key to continue.");
    getch();
}
void displayStudentOfCourse (char a[10])
{
    system ("CLS");
    int max=0,i,j=0,l;
    struct Student *TEMP;
    printf ("Students of %s\n\n",a);
    for (TEMP=FIRST;TEMP!=NULL;TEMP=TEMP->NEXT)
    {
        if (strcmp (TEMP->course,a)==0)
        {
            j++;
            if (strlen(TEMP->name)>max)
            {
                max=strlen(TEMP->name);
            }
        }
    }
    if (j==0)
    {
        printf ("No Data Found.\n\nPress any key to continue.");
        getch();
        return;
    }
    char roll[15];
    struct Student *TEMP1,*TEMP2,*TEMP3;
    char name[100],gender[10],course[10],phone[11],date[10],month[10],year[10];
    printf ("+");
    for (i=0;i<15;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<(max+2);i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<12;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<14;i++)
    {
        printf ("-");
    }
    printf ("+");
    printf ("\n");
    printf ("| Roll Number   | ");
    printf ("Name");
    for (i=0;i<(max-3);i++)
    {
        printf (" ");
    }
    printf ("| Course ");
    printf ("| DOB        | ");
    printf ("Gender | Phone Number |\n");
    printf ("+");
    for (i=0;i<15;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<(max+2);i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<12;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<14;i++)
    {
        printf ("-");
    }
    printf ("+");
    printf ("\n");
    for (TEMP1=FIRST;TEMP1!=NULL;TEMP1=TEMP1->NEXT)
    {
        for (TEMP2=FIRST;TEMP2!=NULL;TEMP2=TEMP2->NEXT)
        {
            if (strcmp (TEMP1->roll,TEMP2->roll)==-1)
            {
                strcpy (roll,TEMP1->roll);
                strcpy (TEMP1->roll,TEMP2->roll);
                strcpy (TEMP2->roll,roll);

                strcpy (name,TEMP1->name);
                strcpy (TEMP1->name,TEMP2->name);
                strcpy (TEMP2->name,name);

                strcpy (course,TEMP1->course);
                strcpy (TEMP1->course,TEMP2->course);
                strcpy (TEMP2->course,course);

                strcpy (gender,TEMP1->gender);
                strcpy (TEMP1->gender,TEMP2->gender);
                strcpy (TEMP2->gender,gender);

                strcpy (date,TEMP1->date);
                strcpy (TEMP1->date,TEMP2->date);
                strcpy (TEMP2->date,date);

                strcpy (month,TEMP1->month);
                strcpy (TEMP1->month,TEMP2->month);
                strcpy (TEMP2->month,month);

                strcpy (year,TEMP1->year);
                strcpy (TEMP1->year,TEMP2->year);
                strcpy (TEMP2->year,year);

                strcpy (phone,TEMP1->phone);
                strcpy (TEMP1->phone,TEMP2->phone);
                strcpy (TEMP2->phone,phone);
            }
        }
    }
    for (TEMP3=FIRST;TEMP3!=NULL;TEMP3=TEMP3->NEXT)
    {
        if (strcmp(TEMP3->course,a)==0)
        {
            printf ("| %s | ",TEMP3->roll);
            printf ("%s",TEMP3->name);
            l=strlen(TEMP3->name);
            if (l==max)
            {
                printf (" |");
            }
            else
            {
                for (i=0;i<(max-l)+1;i++)
                {
                    printf (" ");
                }
                printf ("|");
            }
            printf (" %s",TEMP3->course);
            l=strlen(TEMP3->course);
            for (i=0;i<(6-l)+1;i++)
            {
                printf (" ");
            }
            printf ("|");
            printf (" %s/%s/%s |",TEMP3->date,TEMP3->month,TEMP3->year);
            if (strcmp (TEMP3->gender,"Female")==0)
            {
                printf (" %s |",TEMP3->gender);
            }
            else
            {
                printf (" %s   |",TEMP3->gender);
            }
            printf (" %s   |\n",TEMP3->phone);
        }
    }
    printf ("+");
    for (i=0;i<15;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<(max+2);i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<12;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<8;i++)
    {
        printf ("-");
    }
    printf ("+");
    for (i=0;i<14;i++)
    {
        printf ("-");
    }
    printf ("+");
    printf ("\n");
    printf ("\nPress any key to continue.");
    getch();
}
void deleteStudent()
{
    struct Student *CURR=FIRST;
    struct Student *PREV=NULL;
    system ("CLS");
    int i=0,c=1,choice,k=0,j=0;
    char temp[100],ch,roll[15],date[10],month[10],year[10],phone[11];
    struct Student *TEMP;
    printf ("Delete Student\n\n");
    printf ("Enter University Roll Number (Min. 13 digits): ");
    while (c)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && i<13)
        {
            roll[i]=ch;
            printf ("%c",ch);
            i++;
        }
        else if ((int)ch==8 && i!=0)
        {
            roll[i]=' ';
            printf ("\b \b");
            i--;
        }
        else if ((int)ch==13 && i==13)
        {
            system ("CLS");
            printf ("Searching...");
            sleep (2);
            for (TEMP=FIRST;TEMP!=NULL;TEMP=TEMP->NEXT)
            {
                if (strcmp (TEMP->roll,roll)==0)
                {
                    system ("CLS");
                    printf ("Roll Number Founded.\n\nPress any key to continue.");
                    getch();
                    c=0;
                    k=1;
                    break;
                }
            }
            if (k==0)
            {
                system ("CLS");
                printf ("Roll Number not Found.\n\nPress any key to continue.");
                getch();
                return;
            }
        }
    }
    system ("CLS");
    printf ("Roll Number: %s\n",TEMP->roll);
    printf ("Name: %s\n",TEMP->name);
    printf ("Course: %s\n",TEMP->course);
    printf ("DOB: %s/%s/%s\n",TEMP->date,TEMP->month,TEMP->year);
    printf ("Phone Number: %s\n",TEMP->phone);
    printf ("Gender: %s\n\n",TEMP->gender);
    printf ("Press any key to Delete data.");
    getch();
    while (CURR!=NULL)
    {
        if (strcmp (CURR->roll,roll)==0)
        {
            if (PREV!=NULL)
            {
                PREV->NEXT=CURR->NEXT;
            }
            else
            {
                FIRST=CURR->NEXT;
            }
            free (CURR);
            break;
        }
        PREV=CURR;
        CURR=CURR->NEXT;
    }
    saveToFile ();
    system ("CLS");
    printf ("Student Deleted Successfully\n\nPress any key to continue.");
    getch();
}
void editStudent ()
{
    system ("CLS");
    char ch;
    char roll[15],roll2[15];
    char temp[100];
    int i=0,c=1,choice,k=0,j=0;
    struct Student *TEMP,*TEMP2;
    printf ("Edit Student\n\n");
    printf ("Enter University Roll Number (Min. 13 digits): ");
    while (c)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && i<13)
        {
            roll[i]=ch;
            printf ("%c",ch);
            i++;
        }
        else if ((int)ch==8 && i!=0)
        {
            roll[i]=' ';
            printf ("\b \b");
            i--;
        }
        else if ((int)ch==13 && i==13)
        {
            system ("CLS");
            printf ("Searching...");
            sleep (2);
            for (TEMP2=FIRST;TEMP2!=NULL;TEMP2=TEMP2->NEXT)
            {
                if (strcmp (TEMP2->roll,roll)==0)
                {
                    system ("CLS");
                    printf ("Roll Number Founded.\n\nPress any key to continue.");
                    getch();
                    c=0;
                    k=1;
                    break;
                }
            }
            if (k==0)
            {
                system ("CLS");
                printf ("Roll Number not Found.\n\nPress any key to continue.");
                getch();
                return;
            }
        }
    }
    system ("CLS");
    printf ("Roll Number: %s\n",TEMP2->roll);
    printf ("Name: %s\n",TEMP2->name);
    printf ("Course: %s\n",TEMP2->course);
    printf ("DOB: %s/%s/%s\n",TEMP2->date,TEMP2->month,TEMP2->year);
    printf ("Phone Number: %s\n",TEMP2->phone);
    printf ("Gender: %s\n\n",TEMP2->gender);
    printf ("Press any key to continue.");
    getch();
    while (1)
    {
        saveToFile();
        system ("CLS");
        printf ("Edit Options\n\n");
        printf ("1-Roll Number\n");
        printf ("2-Name\n");
        printf ("3-Phone Number\n");
        printf ("4-DOB\n");
        printf ("5-Course\n");
        printf ("6-Gender\n");
        printf ("7-Main Menu\n\n");
        printf ("Select you option: ");
        scanf ("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                system ("CLS");
                i=0,c=1,k=0;
                printf ("Enter New Roll Number (Min. 13 digits): ");
                while (c)
                {
                    ch=getch();
                    if (((int)ch>=48 && (int)ch<=57) && i<13)
                    {
                        roll2[i]=ch;
                        printf ("%c",ch);
                        i++;
                    }
                    else if ((int)ch==8 && i!=0)
                    {
                        roll2[i]=' ';
                        printf ("\b \b");
                        i--;
                    }
                    else if ((int)ch==13 && i==13)
                    {
                        for (TEMP=FIRST;TEMP!=NULL;TEMP=TEMP->NEXT)
                        {
                            if (strcmp (TEMP->roll,roll2)==0)
                            {
                                system ("CLS");
                                printf ("Roll Number Already Exists.\n\nPress any key to continue.");
                                getch();
                                k=1;
                                c=0;
                            }
                        }
                        if (k==0)
                        {
                            strcpy (TEMP2->roll,roll2);
                            system ("CLS");
                            printf ("Roll Number Editted Successfully.\n\nPress any key to continue.");
                            getch();
                            c=0;
                        }
                    }
                }
                break;
            }
            case 2:
            {
                system ("CLS");
                printf ("Enter New Name: ");
                gets (temp);
                gets (TEMP2->name);
                system ("CLS");
                printf ("Name Editted Successfully.\n\nPress any key to continue.");
                getch();
                break;
            }
            case 3:
            {
                system ("CLS");
                char phone[11];
                printf ("Enter New Phone Number: ");
                i=0;
                while (1)
                {
                    ch=getch();
                    if (((int)ch>=48 && (int)ch<=57) && i<10)
                    {
                        phone[i]=ch;
                        printf ("%c",ch);
                        i++;
                    }
                    else if ((int)ch==8 && i!=0)
                    {
                        phone[i]=' ';
                        printf ("\b \b");
                        i--;
                    }
                    else if ((int)ch==13 && i==10)
                    {
                        strcpy (TEMP2->phone,phone);
                        break;
                    }
                }
                system ("CLS");
                printf ("Phone Number Editted Successfully.\n\nPress any key to continue.");
                getch();
                break;
            }
            case 4:
            {
                system ("CLS");
                printf ("Date of Birth\n\n");
                printf ("Enter Date (DD): ");
                char date[10];
                i=0,c=1;
                while (c)
                {
                    ch=getch();
                    if (((int)ch>=48 && (int)ch<=57) && i<2)
                    {
                        date[i]=ch;
                        printf ("%c",ch);
                        i++;
                    }
                    else if ((int)ch==8 && i!=0)
                    {
                        i--;
                        date[i]=' ';
                        printf ("\b \b");
                    }
                    else if ((int)ch==13 && i==2)
                    {
                        strcpy (TEMP2->date,date);
                        c=0;
                    }
                }
                printf ("\nEnter Month (MM): ");
                j=0,c=1;
                char month[10];
                while (c)
                {
                    ch=getch();
                    if (((int)ch>=48 && (int)ch<=57) && j<2)
                    {
                        month[j]=ch;
                        printf ("%c",ch);
                        j++;
                    }
                    else if ((int)ch==8 && j!=0)
                    {
                        j--;
                        month[j]=' ';
                        printf ("\b \b");
                    }
                    else if ((int)ch==13 && j==2)
                    {
                        strcpy (TEMP2->month,month);
                        c=0;
                    }
                }
                printf ("\nEnter Year (YYYY): ");
                j=0,c=1;
                char year[10];
                while (c)
                {
                    ch=getch();
                    if (((int)ch>=48 && (int)ch<=57) && j<4)
                    {
                        year[j]=ch;
                        printf ("%c",ch);
                        j++;
                    }
                    else if ((int)ch==8 && j!=0)
                    {
                        j--;
                        year[j]=' ';
                        printf ("\b \b");
                    }
                    else if ((int)ch==13 && j==4)
                    {
                        strcpy (TEMP2->year,year);
                        c=0;
                    }
                }
                system ("CLS");
                printf ("DOB Editted Successfully.\n\nPress any key to continue.");
                getch();
                break;
            }
            case 5:
            {
                c=1;
                while (c)
                {
                    system ("CLS");
                    printf ("Course\n\n");
                    printf ("1-BCA\n");
                    printf ("2-MCA\n");
                    printf ("3-BTech\n");
                    printf ("4-BCom\n");
                    printf ("5-BBA\n");
                    printf ("6-MBA\n");
                    printf ("7-MTech\n");
                    printf ("\nSelect your course: ");
                    scanf ("%d",&choice);
                    switch (choice)
                    {
                        case 1:
                        {
                            strcpy (TEMP2->course,"BCA");
                            c=0;
                            break;
                        }
                        case 2:
                        {
                            strcpy (TEMP2->course,"MCA");
                            c=0;
                            break;
                        }
                        case 3:
                        {
                            strcpy (TEMP2->course,"BTech");
                            c=0;
                            break;
                        }
                        case 4:
                        {
                            strcpy (TEMP2->course,"BCom");
                            c=0;
                            break;
                        }
                        case 5:
                        {
                            strcpy (TEMP2->course,"BBA");
                            c=0;
                            break;
                        }
                        case 6:
                        {
                            strcpy (TEMP2->course,"MBA");
                            c=0;
                            break;
                        }
                        case 7:
                        {
                            strcpy (TEMP2->course,"MTech");
                            c=0;
                            break;
                        }
                        default:
                        {
                            system ("CLS");
                            printf ("Wrong Choice!\n\nPress any key to continue.");
                            getch();
                            break;
                        }
                    }
                }
                system ("CLS");
                printf ("Course Editted Successfully.\n\nPress any key to continue.");
                getch();
                break;
            }
            case 6:
            {
                c=1;
                while (c)
                {
                    system ("CLS");
                    printf ("Gender\n\n");
                    printf ("1-Male\n");
                    printf ("2-Female\n");
                    printf ("3-Others\n");
                    printf ("\nSelect your gender: ");
                    scanf ("%d",&choice);
                    switch (choice)
                    {
                        case 1:
                        {
                            strcpy (TEMP2->gender,"Male");
                            c=0;
                            break;
                        }
                        case 2:
                        {
                            strcpy (TEMP2->gender,"Female");
                            c=0;
                            break;
                        }
                        case 3:
                        {
                            strcpy (TEMP2->gender,"Others");
                            c=0;
                            break;
                        }
                        default:
                        {
                            system ("CLS");
                            printf ("Wrong Choice!\n\nPress any key to continue.");
                            getch();
                            break;
                        }
                    }
                }
                system ("CLS");
                printf ("Gender Editted Successfully.\n\nPress any key to continue.");
                getch();
                break;
            }
            case 7:
            {
                system ("CLS");
                printf ("Returning to Main Menu...");
                sleep (2);
                return;
            }
            default:
            {
                system ("CLS");
                printf ("Wrong Choice!\n\nPress any key to continue.");
                getch();
            }
        }
    }
}
void searchStudent()
{
    system ("CLS");
    printf ("Search Student\n\n");
    struct Student *TEMP;
    char roll[15],ch;
    int c=1,i=0,k=0;
    printf ("Enter University Roll Number (Min. 13 digits): ");
    while (c)
    {
        ch=getch();
        if (((int)ch>=48 && (int)ch<=57) && i<13)
        {
            roll[i]=ch;
            printf ("%c",ch);
            i++;
        }
        else if ((int)ch==8 && i!=0)
        {
            roll[i]=' ';
            printf ("\b \b");
            i--;
        }
        else if ((int)ch==13 && i==13)
        {
            system ("CLS");
            printf ("Searching...");
            sleep (2);
            for (TEMP=FIRST;TEMP!=NULL;TEMP=TEMP->NEXT)
            {
                if (strcmp (TEMP->roll,roll)==0)
                {
                    system ("CLS");
                    printf ("Roll Number Founded.\n\nPress any key to continue.");
                    getch();
                    c=0;
                    k=1;
                    break;
                }
            }
            if (k==0)
            {
                system ("CLS");
                printf ("Roll Number not Found.\n\nPress any key to continue.");
                getch();
                return;
            }
        }
    }
    system ("CLS");
    printf ("Roll Number: %s\n",TEMP->roll);
    printf ("Name: %s\n",TEMP->name);
    printf ("Course: %s\n",TEMP->course);
    printf ("DOB: %s/%s/%s\n",TEMP->date,TEMP->month,TEMP->year);
    printf ("Gender: %s\n",TEMP->gender);
    printf ("Phone Number: %s\n\n",TEMP->phone);
    printf ("Press any key to Continue.");
    getch();
}
void readFromFile()
{
    FILE *file=fopen ("StudentData.dat","rb");
    if (file==NULL)
    {
        return;
    }
    else
    {
        while (1)
        {
            struct Student *NEW=(struct Student*)malloc (sizeof(struct Student));
            if (fread (NEW,sizeof (struct Student),1,file)!=1)
            {
                break;
            }
            NEW->NEXT=NULL;
            if (FIRST==NULL)
            {
                FIRST=LAST=NEW;
            }
            else
            {
                LAST->NEXT=NEW;
                LAST=NEW;
            }
        }
    }
    fclose (file);
}
void saveToFile()
{
    FILE *file=fopen("StudentData.dat","wb");
    if (file==NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }
    struct Student *TEMP=FIRST;
    while (TEMP!=NULL)
    {
        fwrite(TEMP,sizeof (struct Student),1,file);
        TEMP=TEMP->NEXT;
    }
    fclose (file);
}