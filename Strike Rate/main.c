#include <stdio.h>
int main()
{
int ch;

do
{
printf("1--> Calculate Batting Average of a batsman of last 10 matches\n 2-- Exit\n");
scanf("%d", &ch);
switch (ch)
{
case 1:
{

int i, wickets, wicket[10];
char g;
float total = 0, run[10], average, wick;
printf("\nEnter the runs of batsman of last 10 matches\n");
for (i = 0; i < 10; i++)
{
printf("\nEnter the runs of batsman in MATCH NO.%d IS\t\t\t=", i +
1);
scanf("%f", &run[i]);
g:
printf("\nEnter the wicket drawn or not. in match %d IS=\n Not out= 0 and OUT= 1 \t\t\t\t\t wicket =", i + 1);
scanf("%d", &wicket[i]);
if (wicket[i] == 0 || wicket[i] == 1)
{
printf("\n");
}
else
{
printf("\n\n\t\t\t\t\t>>>>>>>>>>Please enter a valid Wicket<<<<<<<<<<\n\n");
goto g;
}
}
printf("THE RUNS OF BATSMAN IN LAST 10 MATCHES\n");
printf("MATCHES PLAYED \t RUNS\t wickets ");
for (int k = 1; k < 11; k++)
{
printf("MATCH %d \t%f \t %d", k, run[k - 1], wicket[k - 1]);
printf("\n");

}
for (i = 0; i < 10; i++)
{
total = total + run[i];
}
for (i = 0; i < 10; i++)
{
wick = wick + wicket[i];
}
if (wick > 0)
{
average = total / wick;
printf("The Batting average of last 10 performance of batsman is %.2f\n\n", average);
printf("The total runs of last 10 matches is %.2f\n\n", total);
printf("The Wickets per match of batsman is %.0f\n\n", wick);
}
else{
printf("Average cannot be defined\n\n");
}
}
break;
case 2:
break;
}
} while (ch != 2);
return 0;
}
