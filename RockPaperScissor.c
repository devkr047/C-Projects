#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
struct name
{
    char a[100];
};
struct name name1[3];
void main()
{
    strcpy (name1[1].a,"Rock");
    strcpy (name1[2].a,"Paper");
    strcpy (name1[3].a,"Scissor");
    int you,comp,youScore=0,compScore=0,i=1;
    while (1)
    {
        system ("CLS");
        printf ("1-Rock\n");
        printf ("2-Paper\n");
        printf ("3-Scissor\n");
        printf ("\nPress 0 to Exit");
        printf ("\n\nYour Turn:");
        scanf ("%d",&you);
        system ("CLS");
        comp=(rand()%3)+1;
        if (you>3)
        {
            printf ("Wrong Choice!\n\nPlease Wait...");
            sleep (2);
            continue;
        }
        if (you==0)
        {
            if (youScore>compScore)
            {
                printf ("Your Score:%d\t\t\tComputer Score:%d\n\n",youScore,compScore);
                printf ("You Won");
            }
            else if (compScore>youScore)
            {
                printf ("Your Score:%d\t\t\tComputer Score:%d\n\n",youScore,compScore);
                printf ("Computer Won");
            }
            else if (compScore==0 && youScore==0)
            {
                printf ("You have not played any round");
            }
            else
            {
                printf ("Your Score:%d\t\t\tComputer Score:%d\n\n",youScore,compScore);
                printf ("Game Drawn");
            }
            getch();
            exit (1);
        }
        if ((you==1) && (comp==2))
        {
            printf ("You:%s",name1[you].a);
            printf ("\nComputer:%s",name1[comp].a);
            printf ("\n\nRound %d:Computer Won",i);
            compScore++;
        }
        else if ((you==1) && (comp==3))
        {
            printf ("You:%s",name1[you].a);
            printf ("\nComputer:%s",name1[comp].a);
            printf ("\n\nRound %d:You Won",i);
            youScore++;
        }
        else if ((you==2) && (comp==1))
        {
            printf ("You:%s",name1[you].a);
            printf ("\nComputer:%s",name1[comp].a);
            printf ("\n\nRound %d:You Won",i);
            youScore++;
        }
        else if ((you==2) && (comp==3))
        {
            printf ("You:%s",name1[you].a);
            printf ("\nComputer:%s",name1[comp].a);
            printf ("\n\nRound %d:Computer Won",i);
            compScore++;
        }
        else if ((you==3) && (comp==1))
        {
            printf ("You:%s",name1[you].a);
            printf ("\nComputer:%s",name1[comp].a);
            printf ("\n\nRound %d:Computer Won",i);
            compScore++;
        }
        else if ((you==3) && (comp==2))
        {
            printf ("You:%s",name1[you].a);
            printf ("\nComputer:%s",name1[comp].a);
            printf ("\n\nRound %d:You Won",i);
            youScore++;
        }
        else
        {
            printf ("You:%s",name1[you].a);
            printf ("\nComputer:%s",name1[comp].a);
            printf ("\n\nRound %d:Drawn",i);
        }
        printf ("\n\nYour Score:%d\t\t\tComputer Score:%d\n\n",youScore,compScore);
        printf ("Press any Key to Continue");
        i++;
        getch();
    }
    getch();
}