#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    int i,wickets,wickets[10];
    float total=0,run[10],average,wick;
    do
    {
        printf("1>Calculate Batting Average of Last 10 Match\n2.Exit");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:

            char g;
            printf("\nEnter the run of batsman of last 10 matches\n");
            for (i=0;i<10;i++)
            {
                printf("\n Enter the run of Batsman in MATCH NO. %d= "i+1);
                scanf("%f",&run[i]);
                g:
                    printf("\nEnter the wicket drawn ")
            }

        }
    }



}
