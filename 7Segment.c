#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void draw(int a[][10]);
void set (void);
void create (char);
void main()
{
    set();
    char ch;
    while (1)
    {
        printf ("\n\e[1;31mINSTRUCTIONS\e[m\n");
        printf ("\n\e[1m<x>\e[m Press \e[1;34mE\e[m to exit\n");
        printf ("\e[1m<x>\e[m Press any number between \e[1;34m0-9\e[m to display");
        ch=getch();
        if (ch=='E')
        {
            system ("CLS");
            printf ("\e[1;31mEXITED SUCCESSFULLY\e[m");
            getch();
            exit(0);
        }
        else
        {
            create (ch);
        }
    }
    getch();
}
void draw(int a[][10])
{
    int i,j;
    system ("CLS");
    for (i=0;i<11;i++)
    {
        for (j=0;j<10;j++)
        {
            if (i==0 || i==5 || i==10 || j==0 || j==9)
            {
                if (a[i][j]==0)
                {
                    printf ("\e[2;31mO\e[m");
                }
                else
                {
                    printf ("\033[1;31mO\033[0m");
                }
            }
            else
            {
                printf (" ");
            }
        }
        printf ("\n");
    }
}
void set()
{
    int a[15][10],i,j;
    for (i=0;i<11;i++)
    {
        for (j=0;j<10;j++)
        {
            a[i][j]=0;
        }
    }
    draw(a);
}
void create(char ch)
{
    int i,j,a[15][10];
    switch (ch)
    {
        case '0':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (i==0 || i==10 || j==0 || j==9)
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '1':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (j==9)
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '2':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (i==0 || i==10 || i==5 || (j==0 && i>5) || (j==9 && i<5))
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '3':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (i==0 || i==10 || i==5 || j==9)
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '4':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if ((j==0 && i<5) || i==5 || j==9)
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '5':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (i==0 || i==10 || i==5 || (j==0 && i<5) || (j==9 && i>5))
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '6':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (i==0 || i==10 || i==5 || j==0 || (j==9 && i>5))
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '7':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (i==0 ||j==9)
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '8':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    a[i][j]=1;
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        case '9':
        {
            for (i=0;i<11;i++)
            {
                for (j=0;j<10;j++)
                {
                    if (i==0 || j==9 || i==10 || i==5 || (j==0 && i<5))
                    {
                        a[i][j]=1;
                    }
                    else
                    {
                        a[i][j]=0;
                    }
                }
            }
            draw(a);
            getch();
            set();
            break;
        }
        default:
        {
            set();
            break;
        }
    }
}