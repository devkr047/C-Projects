#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void restart(int a[][18]);
char home (void);
void multiPlayer(void);
void compPlayer(void);
void startCompPlayerGame(char name1[50],char name2[50]);
void startMultiPlayerGame(char name1[50],char name2[50]);
void draw(int a[][18]);
int checkstatus (int,int);
int checkwin(int a[][18]);
void gotoxy(int,int);
void winner (char name1[50],char name2[50],char name[50],int n);
void winningSimulation(int n);
char choice;
int a[10][18];
void restart(int a[][18])
{
    int i,j;
    for (i=1;i<=9;i++)
    {
        for (j=1;j<=17;j++)
        {
            a[i][j]=-2;
            if ((i==2 || i==5 || i==8) && (j==3 || j==9 || j==15))
            {
                a[i][j]=-1;
            }
        }
    }
}
void main()
{
    char ch;
    int i,j;
    restart(a);
    system ("CLS");
    printf ("\e[1;4;31mINSTRUCTIONS\e[m\n\n");
    printf ("\e[1;36m<*>\e[m \e[36mPlayer 1 --> \e[m\e[1;31mX\e[m\n");
    printf ("\e[1;36m<*>\e[m \e[36mPlayer 2 --> \e[m\e[1;32mO\e[m\n");
    printf ("\e[1;36m<*>\e[m \e[36mName of players must consist of atleast one character\e[m\n");
    printf ("\e[1;36m<*>\e[m \e[36mUse numbers listed on board to fill block on your turn\e[m\n\n");
    printf ("\e[1;33mPress any key to continue\e[m");
    getch();
    ch=home();
    if (ch=='1')
    {
        system ("CLS");
        compPlayer();
    }
    else if (ch=='2')
    {
        system ("CLS");
        multiPlayer();
    }
    else if (ch=='3')
    {
        system ("CLS");
        printf ("\e[1;31mExited Successfully\e[m");
        getch();
        exit(1);
    }
}
char home()
{
    system ("CLS");
    printf ("\e[1;4;31mHome\e[m\n\n");
    printf ("\e[1;36m1-\e[m\e[36mSingle Player\e[m\n");
    printf ("\e[1;36m2-\e[m\e[36mMulti Player\e[m\n");
    printf ("\e[1;36m3-\e[m\e[36mExit\e[m\n");
    printf ("\n\e[1;33mYour Choice: ");
    while (1)
    {
        choice=getch();
        if (choice=='1' || choice=='2' || choice=='3')
        {
            printf ("%c",choice);
            Sleep (300);
            printf ("\e[m");
            return choice;
        }
        else
        {
            continue;
        }
    }
}
void compPlayer()
{
    system ("CLS");
    char name1[50]="Computer",name2[50],ch;
    int l2=0;
    printf ("\e[1;4;31mName of Players\e[m\n\n");
    printf ("\e[36mPlayer 1:\e[m \e[31m%s",name1);
    strupr(name1);
    printf ("\e[m\e[36m\nPlayer 2:\e[m \e[32m");
    while (1)
    {
        ch=getch();
        if ((int)ch==13)
        {
            if (l2==0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if ((int)ch==8)
        {
            if (l2!=0)
            {
                l2--;
                name2[l2]='\0';
                printf ("\b \b");
            }
        }
        else
        {
            name2[l2]=ch;
            printf ("%c",ch);
            l2++;
        }
    }
    strupr(name2);
    printf ("\e[m");
    startCompPlayerGame(name1,name2);
}
void multiPlayer()
{
    system ("CLS");
    char name1[50],name2[50],ch;
    int l1=0,l2=0;
    printf ("\e[1;4;31mName of Players\e[m\n\n");
    printf ("\e[36mPlayer 1:\e[m \e[31m");
    while (1)
    {
        ch=getch();
        if ((int)ch==13)
        {
            if (l1==0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if ((int)ch==8)
        {
            if (l1!=0)
            {
                l1--;
                name1[l1]='\0';
                printf ("\b \b");
            }
        }
        else
        {
            name1[l1]=ch;
            printf ("%c",ch);
            l1++;
        }
    }
    strupr(name1);
    printf ("\e[m\e[36m\nPlayer 2:\e[m \e[32m");
    while (1)
    {
        ch=getch();
        if ((int)ch==13)
        {
            if (l2==0)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if ((int)ch==8)
        {
            if (l2!=0)
            {
                l2--;
                name2[l2]='\0';
                printf ("\b \b");
            }
        }
        else
        {
            name2[l2]=ch;
            printf ("%c",ch);
            l2++;
        }
    }
    strupr(name2);
    printf ("\e[m");
    startMultiPlayerGame(name1,name2);
}
void startCompPlayerGame(char name1[50],char name2[50])
{
    char ch;
    int k=0,n,stat,win,i=1;
    restart(a);
    while (1)
    {
        while (1)
        {
            system ("CLS");
            printf ("\e[31m%s\e[m \e[1;33mvs\e[m \e[32m%s\e[m",name1,name2);
            draw(a);
            printf ("\n\e[32m%s's\e[m \e[33mTurn:\e[m \e[32m",name1);
            srand(time(NULL));
            n=(rand()%9)+1;
            printf ("%d",n);
            sleep (1);
            printf ("\e[m");
            stat=checkstatus(n,i);
            if (stat==0)
            {
                i++;
                k++;
                break;
            }
            else
            {
                continue;
            }
        }
        win=checkwin(a);
        if (win!=-2)
        {
            winner(name1,name2,name1,win);
            return;
        }
        else if (k==9)
        {
            winner(name1,name2,"drawn",0);
            return;
        }
        while (1)
        {
            system ("CLS");
            printf ("\e[31m%s\e[m \e[1;33mvs\e[m \e[32m%s\e[m",name1,name2);
            draw(a);
            printf ("\n\e[31m%s's\e[m \e[33mTurn:\e[m \e[31m",name2);
            scanf ("%d",&n);
            printf ("\e[m");
            stat=checkstatus(n,i);
            if (stat==0)
            {
                i--;
                k++;
                break;
            }
            else
            {
                continue;
            }
        }
        win=checkwin(a);
        if (win!=-2)
        {
            winner(name1,name2,name2,win);
            return;
        }
        else if (k==9)
        {
            winner(name1,name2,"drawn",0);
            return;
        }
    }
    getch();
}
void startMultiPlayerGame(char name1[50],char name2[50])
{
    char ch;
    int k=0,n,stat,win,i=1;
    restart(a);
    while (1)
    {
        while (1)
        {
            system ("CLS");
            printf ("\e[31m%s\e[m \e[1;33mvs\e[m \e[32m%s\e[m",name1,name2);
            draw(a);
            printf ("\n\e[31m%s's\e[m \e[33mTurn:\e[m \e[31m",name1);
            scanf ("%d",&n);
            printf ("\e[m");
            stat=checkstatus(n,i);
            if (stat==0)
            {
                i++;
                k++;
                break;
            }
            else
            {
                continue;
            }
        }
        win=checkwin(a);
        if (win!=-2)
        {
            winner(name1,name2,name1,win);
            return;
        }
        else if (k==9)
        {
            winner(name1,name2,"drawn",0);
            return;
        }
        while (1)
        {
            system ("CLS");
            printf ("\e[31m%s\e[m \e[1;33mvs\e[m \e[32m%s\e[m",name1,name2);
            draw(a);
            printf ("\n\e[32m%s's\e[m \e[33mTurn:\e[m \e[32m",name2);
            scanf ("%d",&n);
            printf ("\e[m");
            stat=checkstatus(n,i);
            if (stat==0)
            {
                i--;
                k++;
                break;
            }
            else
            {
                continue;
            }
        }
        win=checkwin(a);
        if (win!=-2)
        {
            winner(name1,name2,name2,win);
            return;
        }
        else if (k==9)
        {
            winner(name1,name2,"drawn",0);
            return;
        }
    }
    getch();
}
void winner (char name1[50],char name2[50],char name[50],int n)
{
    system ("CLS");
    char ch;
    if (strcmp(name,"drawn")==0)
    {
        printf ("\e[31m%s\e[m \e[1;33mvs\e[m \e[32m%s\e[m",name1,name2);
        draw(a);
        printf ("\n\e[1;33mMatch Drawn\e[m");
    }
    else
    {
        printf ("\e[31m%s\e[m \e[1;33mvs\e[m \e[32m%s\e[m",name1,name2);
        draw(a);
        winningSimulation(n);
        printf ("\n\e[1;33m%s Wins\e[m",name);
    }
    Sleep (200);
    printf ("\n\n\e[36m1-Replay");
    printf ("\n2-Main Menu\e[m");
    printf ("\n\n\e[1;33mYour Choice: ");
    while (1)
    {
        ch=getch();
        if (ch=='1')
        {
            printf ("%c",ch);
            Sleep (300);
            printf ("\e[m");
            if (choice=='1')
            {
                startCompPlayerGame(name1,name2);
            }
            else if (choice='2')
            {
                startMultiPlayerGame(name1,name2);
            }
            break;
        }
        else if (ch=='2')
        {
            printf ("%c",ch);
            Sleep (300);
            printf ("\e[m");
            main();
            break;
        }
        else
        {
            continue;
        }
    }
}
int checkwin(int a[][18])
{
    if ((a[2][3]==1 && a[2][9]==1 && a[2][9]==1 && a[2][15]==1) || (a[2][3]==2 && a[2][9]==2 && a[2][9]==2 && a[2][15]==2))
    {
        return 1;
    }
    else if ((a[5][3]==1 && a[5][9]==1 && a[5][9]==1 && a[5][15]==1) || (a[5][3]==2 && a[5][9]==2 && a[5][9]==2 && a[5][15]==2))
    {
        return 2;
    }
    else if ((a[8][3]==1 && a[8][9]==1 && a[8][9]==1 && a[8][15]==1) || (a[8][3]==2 && a[8][9]==2 && a[8][9]==2 && a[8][15]==2))
    {
        return 3;
    }
    else if ((a[2][3]==1 && a[5][3]==1 && a[5][3]==1 && a[8][3]==1) || (a[2][3]==2 && a[5][3]==2 && a[5][3]==2 && a[8][3]==2))
    {
        return 4;
    }
    else if ((a[2][9]==1 && a[5][9]==1 && a[5][9]==1 && a[8][9]==1) || (a[2][9]==2 && a[5][9]==2 && a[5][9]==2 && a[8][9]==2))
    {
        return 5;
    }
    else if ((a[2][15]==1 && a[5][15]==1 && a[5][15]==1 && a[8][15]==1) || (a[2][15]==2 && a[5][15]==2 && a[5][15]==2 && a[8][15]==2))
    {
        return 6;
    }
    else if ((a[2][3]==1 && a[5][9]==1 && a[5][9]==1 && a[8][15]==1) || (a[2][3]==2 && a[5][9]==2 && a[5][9]==2 && a[8][15]==2))
    {
        return 7;
    }
    else if ((a[2][15]==1 && a[5][9]==1 && a[5][9]==1 && a[8][3]==1) || (a[2][15]==2 && a[5][9]==2 && a[5][9]==2 && a[8][3]==2))
    {
        return 8;
    }
    else
    {
        return -2;
    }
}
void draw(int a[][18])
{
    int i,j;
    int k=1;
    printf ("\n\n");
    for (i=1;i<=9;i++)
    {
        for (j=1;j<=17;j++)
        {
            if (j==6 || j==12)
            {
                printf ("|");
            }
            else if (i==3 || i==6)
            {
                printf ("_");
            }
            else if (a[i][j]==-1)
            {
                printf ("\e[2m%d\e[m",k);
                k++;        
            }
            else if (a[i][j]==1)
            {
                printf ("\e[1;31mX\e[m");
                k++;
            }
            else if (a[i][j]==2)
            {
                printf ("\e[1;32mO\e[m");
                k++;
            }
            else
            {
                printf (" ");
            }
        }
        printf ("\n");
    }
}
int checkstatus(int n,int i)
{
    if (n==1 || n==2 || n==3)
    {
        if (a[2][(5*n)+(2-(5-n))]==-1)
        {
            a[2][(5*n)+(2-(5-n))]=i;
            return 0;
        }
        else
        {
            return -2;
        }
    }
    else if (n==4 || n==5 || n==6)
    {
        if (a[5][(5*(n-3))+(2-(5-(n-3)))]==-1)
        {
            a[5][(5*(n-3))+(2-(5-(n-3)))]=i;
            return 0;
        }
        else
        {
            return -2;
        }
    }
    else if (n==7 || n==8 || n==9)
    {
        if (a[8][(5*(n-6))+(2-(5-(n-6)))]==-1)
        {
            a[8][(5*(n-6))+(2-(5-(n-6)))]=i;
            return 0;
        }
        else
        {
            return -2;
        }
    }
    else
    {
        return -2;
    }
}
void winningSimulation(int n)
{
    int i,j;
    Sleep(100);
    switch (n)
    {
        case 1:
        {
            for (i=1;i<=17;i++)
            {
                gotoxy(i,4);
                printf ("\e[1;33m-\e[m");
                Sleep (100);
            }
            break;
        }
        case 2:
        {
            for (i=1;i<=17;i++)
            {
                gotoxy(i,7);
                printf ("\e[1;33m-\e[m");
                Sleep (100);
            }
            break;
        }
        case 3:
        {
            for (i=1;i<=17;i++)
            {
                gotoxy(i,10);
                printf ("\e[1;33m-\e[m");
                Sleep (100);
            }
            break;
        }
        case 4:
        {
            for (i=3;i<=11;i++)
            {
                gotoxy(3,i);
                printf ("\e[1;33m|\e[m");
                Sleep (200);
            }
            break;
        }
        case 5:
        {
            for (i=3;i<=11;i++)
            {
                gotoxy(9,i);
                printf ("\e[1;33m|\e[m");
                Sleep (200);
            }
            break;
        }
        case 6:
        {
            for (i=3;i<=11;i++)
            {
                gotoxy(15,i);
                printf ("\e[1;33m|\e[m");
                Sleep (200);
            }
            break;
        }
        case 7:
        {
            for (i=3,j=1;i<=11,j<=17;i++,j+=2)
            {
                gotoxy(j,i);
                printf ("\e[1;33m\\\e[m");
                Sleep (100);
            }
            break;
        }
        case 8:
        {
            for (i=3,j=17;i<=11,j>=1;i++,j-=2)
            {
                gotoxy(j,i);
                printf ("\e[1;33m/\e[m");
                Sleep (100);
            }
            break;
        }
    }
    gotoxy (1,12);
    return;
}
void gotoxy(int x,int y)
{
    printf ("\e[%d;%df",y,x);
}