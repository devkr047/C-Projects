#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    char s[100];
    while (1)
    {
        int i,c=0,sum=0;
        system ("CLS");
        printf ("Enter \e[1;31mQ\e[m to exit");
        printf ("\n\nInput: ");
        gets(s);
        int l=strlen(s);
        printf ("\n");
        for (i=0;i<l;i++)
        {
            if (s[i]!=' ')
            {
                c++;
            }
        }
        if (strcmp (s,"Q")==0)
        {
            exit(1);
        }
        else if (c==7)
        {
            for (i=0;i<l;i++)
            {
                if (s[i]!=' ')
                {
                    strupr(s);
                    printf ("%c+",s[i]);
                }
            }
            printf ("\b=%d\n\n",c);
            printf ("%s is \e[1;34mTHALA\e[m for a Reason",strupr(s));
        }
        else if (c<7 || c>7)
        {
            for (i=0;i<l;i++)
            {
                if ((int)s[i]>=48 && (int)s[i]<=57)
                {
                    sum=sum+((int)s[i]-48);
                }
            }
            if (sum==7)
            {
                for (i=0;i<l;i++)
                {
                    if ((int)s[i]>=48 && (int)s[i]<=57)
                    {
                        printf ("%c+",s[i]);
                    }
                }
                printf ("\b=%d\n\n",sum);
                printf ("%s is \e[1;34mTHALA\e[m for a Reason",strupr(s));
            }
            else
            {
                printf ("%s is \e[1;34mNOT\e[m thala for a Reason",strupr(s));
            }
        }
        getch();
    }
}