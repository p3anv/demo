// Student Name :
// Roll No. :
// Programm Name :


#include<stdio.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};
struct Time
{
	int hour,minute,second;
};
int main()
{
	int ch=0;
	struct time start, stop, diff;
	 struct Time t1,t2,t3;



	printf("************** Welcome Addition & Difference Of Time System *********** ");

	do{

		printf("\n 1. Addition of Time ");
		printf("\n 2. Difference of Time");
		printf("\n 3. Exit");
		printf("\n Enter Your Choice : - ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
                printf("\n\nEnter the Time 1 \n");
                printf("Enter Hour: ");
                scanf("%d",&t2.hour);
                printf("Enter Minutes: ");
                scanf("%d",&t2.minute);
                printf("Enter Seconds: ");
                scanf("%d",&t2.second);


                printf("Enter the Time 2\n");
                printf("Enter Hour: ");
                scanf("%d",&t1.hour);
                printf("Enter Minutes: ");
                scanf("%d",&t1.minute);
                printf("Enter Seconds: ");
                scanf("%d",&t1.second);


                t3.hour=t1.hour+t2.hour+(t1.minute+t2.minute+(t1.second+t2.second)/60)/60;
                t3.minute=(t1.minute+t2.minute+(t1.second+t2.second)/60)%60;
                t3.second=(t1.second+t2.second)%60;
                //printf("\n Time 1 %d : %d : %d",t1.hour,t1.minute,t1.second);
                //printf("\n Time 2 %d : %d : %d",t2.hour,t2.minute,t2.second);
                printf("\n Addition of Time  %d :%d:%d",t3.hour,t3.minute,t3.second);

					break;

			case 2:
			    printf("Enter the Time 1\n");
                printf("Enter Hour: ");
                scanf("%d",&start.hours);
                printf("Enter Minutes: ");
                scanf("%d",&start.minutes);
                printf("Enter Seconds: ");
                scanf("%d",&start.seconds);

                printf("Enter Time 2\n");
                printf("Enter Hour: ");
                scanf("%d",&stop.hours);
                printf("Enter Minutes: ");
                scanf("%d",&stop.minutes);
                printf("Enter Seconds: ");
                scanf("%d",&stop.seconds);


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


			case 3:
					printf("\n\n ----------  THANK YOU  ------- ");
					break;
			default:
					printf("\n Enter Correct Choice");
		}

	}while(ch!=3);

	return 0;
}
