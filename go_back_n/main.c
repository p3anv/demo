#include <stdio.h>
#include <stdlib.h>

int main()
{
    int windowsize, sent=0,ack,i;
    printf("ENTER THE WINDOW SIZE: ");
    scanf("%d",&windowsize);

    while(1)
    {
        for (i=0;i<windowsize;i++)
        {
            printf("Frame %d has been transmitted.\n",sent);
            sent++;
            if (sent ==windowsize)
                break;
        }
        printf("\n PLEASE ENTER THE LAST ACKNOWLEDGEMENT RECEIVED.\n");
        scanf("%d",&ack);
        if (ack==windowsize)
        break;
        else
            sent=ack;
        }
        printf("SUCCESSFULLY RECEIVED ALL FRAMES");
}
