#include<stdio.h>


struct Time
{
	int hour,minute,second;
};
struct time2
{
    int hours;
    int minutes;
    int seconds;
};
int main()
{
    struct Time t1,t2,t3;
    struct time2 start, stop, diff;
    int ch=0;

    do{
            printf("ENTER CHOICE");
            scanf("%d",&ch);

            switch(ch)
        case 1 :
                printf("Enter the Time 1 (Hour,minute and Second)");
                scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
                printf("Enter the Time 2 (Hour,minute and Second)");
                scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);
                t3.hour=t1.hour+t2.hour+(t1.minute+t2.minute+(t1.second+t2.second)/60)/60;
                t3.minute=(t1.minute+t2.minute+(t1.second+t2.second)/60)%60;
                t3.second=(t1.second+t2.second)%60;
                printf("\n Time 1 %d : %d : %d",t1.hour,t1.minute,t1.second);
                printf("\n Time 2 %d : %d : %d",t2.hour,t2.minute,t2.second);
                printf("\n Time 3 %d : %d : %d",t3.hour,t3.minute,t3.second);
            break;
        case 2:

    /* Reading first time period */
    printf("Enter hours, minutes and seconds of start time: ");
    scanf("%d%d%d", &start.hours,&start.minutes, &start.seconds);

    /* Reading second time period */
    printf("Enter hours, minutes and seconds of stop time: ");
    scanf("%d%d%d", &stop.hours,&stop.minutes, &stop.seconds);

    if(start.seconds > stop.seconds)
    {
        stop.seconds += 60;
        --stop.minutes;
    }

    if(start.minutes > stop.minutes)
    {
        stop.minutes += 60;
        --stop.hours;
    }

    diff.seconds = stop.seconds - start.seconds;
    diff.minutes = stop.minutes - start.minutes;
    diff.hours = stop.hours - start.hours;

    printf("Difference = %d : %d : %d", diff.hours, diff.minutes, diff.seconds);






    }while(ch!=3);


}
