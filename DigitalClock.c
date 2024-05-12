#include<conio.h>
#include<stdio.h>
#include "currtime.h"
void drawHour(int,int);
void drawMinute(int,int);
void drawSecond(int,int);
void gotoxy(int,int);
void main()
{
    while (1)
    {
        system ("CLS");
        int h=hour();
        int m=minute();
        int s=second();
        if (h<10)
        {
            drawHour(0,(h%10));
        }
        else
        {
            drawHour((h/10),(h%10));
        }
        gotoxy(29,4);
        printf ("\e[1;31mo");
        gotoxy(29,6);
        printf ("o\e[m");
        if (m<10)
        {
            drawMinute(0,(m%10));
        }
        else
        {
            drawMinute((m/10),(m%10));
        }
        gotoxy(63,4);
        printf ("\e[1;31mo");
        gotoxy(63,6);
        printf ("o\e[m");
        if (s<10)
        {
            drawSecond(0,(s%10));
        }
        else
        {
            drawSecond((s/10),(s%10));
        }
        sleep (1);
    }
}
void drawHour(int h1,int h2)
{
    switch(h1)
    {
        case 0:
        {
            printf ("\e[1;31m O O O O \n");
            printf ("O       O\n");
            printf ("O       O\n");
            printf ("O       O\e[m\n");
            printf ("\e[2;31m O O O O \e[m\n");
            printf ("\e[1;31mO       O\n");
            printf ("O       O\n");
            printf ("O       O\n");
            printf (" O O O O \e[m\n");
            break;
        }
        case 1:
        {
            printf ("\e[2;31m O O O O \e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31m O O O O \e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 2:
        {
            printf ("\e[1;31m O O O O \e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            printf ("\e[1;31m O O O O \e[m\n");
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
    }
    switch(h2)
    {
        case 0:
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(15,2);
            printf ("O       O\n");
            gotoxy(15,3);
            printf ("O       O\n");
            gotoxy(15,4);
            printf ("O       O\e[m\n");
            gotoxy(15,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[1;31mO       O\n");
            gotoxy(15,7);
            printf ("O       O\n");
            gotoxy(15,8);
            printf ("O       O\n");
            gotoxy(15,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 1:
        {
            gotoxy(15,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(15,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 2:
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 3:
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 4:
        {
            gotoxy(15,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(15,2);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,3);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,4);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 5:
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 6:
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(15,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 7:
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(15,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 8:           
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(15,2);
            printf ("O       O\n");
            gotoxy(15,3);
            printf ("O       O\n");
            gotoxy(15,4);
            printf ("O       O\n");
            gotoxy(15,5);
            printf (" O O O O \n");
            gotoxy(15,6);
            printf ("O       O\n");
            gotoxy(15,7);
            printf ("O       O\n");
            gotoxy(15,8);
            printf ("O       O\n");
            gotoxy(15,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 9:
        {
            gotoxy(15,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(15,2);
            printf ("O       O\n");
            gotoxy(15,3);
            printf ("O       O\n");
            gotoxy(15,4);
            printf ("O       O\n");
            gotoxy(15,5);
            printf (" O O O O \e[m\n");
            gotoxy(15,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(15,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\n");
            gotoxy(15,9);
            printf (" O O O O \e[m\n");
            break;
        }
    }
}
void drawMinute(int m1,int m2)
{
    switch(m1)
    {
        case 0:
        {
            gotoxy(35,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(35,2);
            printf ("O       O\n");
            gotoxy(35,3);
            printf ("O       O\n");
            gotoxy(35,4);
            printf ("O       O\e[m\n");
            gotoxy(35,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(35,6);
            printf ("\e[1;31mO       O\n");
            gotoxy(35,7);
            printf ("O       O\n");
            gotoxy(35,8);
            printf ("O       O\n");
            gotoxy(35,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 1:
        {
            gotoxy(35,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(35,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(35,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 2:
        {
            gotoxy(35,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(35,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(35,6);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(35,7);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(35,8);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(35,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 3:
        {
            gotoxy(35,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(35,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(35,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 4:
        {
            gotoxy(35,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(35,2);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,3);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,4);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(35,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 5:
        {
            gotoxy(35,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(35,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(35,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(35,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(35,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(35,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(35,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
    }
    switch(m2)
    {
        case 0:
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(49,2);
            printf ("O       O\n");
            gotoxy(49,3);
            printf ("O       O\n");
            gotoxy(49,4);
            printf ("O       O\e[m\n");
            gotoxy(49,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[1;31mO       O\n");
            gotoxy(49,7);
            printf ("O       O\n");
            gotoxy(49,8);
            printf ("O       O\n");
            gotoxy(49,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 1:
        {
            gotoxy(49,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(49,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 2:
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 3:
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 4:
        {
            gotoxy(49,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(49,2);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,3);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,4);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 5:
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 6:
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(49,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 7:
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(49,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 8:           
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(49,2);
            printf ("O       O\n");
            gotoxy(49,3);
            printf ("O       O\n");
            gotoxy(49,4);
            printf ("O       O\n");
            gotoxy(49,5);
            printf (" O O O O \n");
            gotoxy(49,6);
            printf ("O       O\n");
            gotoxy(49,7);
            printf ("O       O\n");
            gotoxy(49,8);
            printf ("O       O\n");
            gotoxy(49,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 9:
        {
            gotoxy(49,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(49,2);
            printf ("O       O\n");
            gotoxy(49,3);
            printf ("O       O\n");
            gotoxy(49,4);
            printf ("O       O\n");
            gotoxy(49,5);
            printf (" O O O O \e[m\n");
            gotoxy(49,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(49,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\n");
            gotoxy(49,9);
            printf (" O O O O \e[m\n");
            break;
        }
    }
}
void drawSecond(int s1,int s2)
{
    switch(s1)
    {
        case 0:
        {
            gotoxy(69,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(69,2);
            printf ("O       O\n");
            gotoxy(69,3);
            printf ("O       O\n");
            gotoxy(69,4);
            printf ("O       O\e[m\n");
            gotoxy(69,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(69,6);
            printf ("\e[1;31mO       O\n");
            gotoxy(69,7);
            printf ("O       O\n");
            gotoxy(69,8);
            printf ("O       O\n");
            gotoxy(69,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 1:
        {
            gotoxy(69,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(69,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(69,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 2:
        {
            gotoxy(69,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(69,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(69,6);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(69,7);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(69,8);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(69,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 3:
        {
            gotoxy(69,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(69,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(69,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 4:
        {
            gotoxy(69,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(69,2);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,3);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,4);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(69,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 5:
        {
            gotoxy(69,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(69,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(69,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(69,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(69,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(69,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(69,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
    }
    switch(s2)
    {
        case 0:
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(83,2);
            printf ("O       O\n");
            gotoxy(83,3);
            printf ("O       O\n");
            gotoxy(83,4);
            printf ("O       O\e[m\n");
            gotoxy(83,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[1;31mO       O\n");
            gotoxy(83,7);
            printf ("O       O\n");
            gotoxy(83,8);
            printf ("O       O\n");
            gotoxy(83,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 1:
        {
            gotoxy(83,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(83,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 2:
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 3:
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 4:
        {
            gotoxy(83,1);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(83,2);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,3);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,4);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 5:
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 6:
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,2);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,3);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,4);
            printf ("\e[1;31mO\e[m       \e[2;31mO\e[m\n");
            gotoxy(83,5);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[1;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,9);
            printf ("\e[1;31m O O O O \e[m\n");
            break;
        }
        case 7:
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \e[m\n");
            gotoxy(83,2);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,3);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,4);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,5);
            printf ("\e[2;31m O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,9);
            printf ("\e[2;31m O O O O \e[m\n");
            break;
        }
        case 8:           
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(83,2);
            printf ("O       O\n");
            gotoxy(83,3);
            printf ("O       O\n");
            gotoxy(83,4);
            printf ("O       O\n");
            gotoxy(83,5);
            printf (" O O O O \n");
            gotoxy(83,6);
            printf ("O       O\n");
            gotoxy(83,7);
            printf ("O       O\n");
            gotoxy(83,8);
            printf ("O       O\n");
            gotoxy(83,9);
            printf (" O O O O \e[m\n");
            break;
        }
        case 9:
        {
            gotoxy(83,1);
            printf ("\e[1;31m O O O O \n");
            gotoxy(83,2);
            printf ("O       O\n");
            gotoxy(83,3);
            printf ("O       O\n");
            gotoxy(83,4);
            printf ("O       O\n");
            gotoxy(83,5);
            printf (" O O O O \e[m\n");
            gotoxy(83,6);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,7);
            printf ("\e[2;31mO\e[m       \e[1;31mO\e[m\n");
            gotoxy(83,8);
            printf ("\e[2;31mO\e[m       \e[1;31mO\n");
            gotoxy(83,9);
            printf (" O O O O \e[m\n");
            break;
        }
    }
}
void gotoxy(int x,int y)
{
    printf("\e[%d;%df",y,x);
}