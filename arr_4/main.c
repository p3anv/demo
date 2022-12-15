#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int a[5];
    int j;

    printf("Enter Numbers to find square\n\n");

    for (int i=0;i<=5;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n\n");
    for (int i=0;i<=5;i++; && j=0;j<=5;j++)
    {
        printf("Squares of Num %d : %d\n",j+1,pow(a[i],2));
    }
}
