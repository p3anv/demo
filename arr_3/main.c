#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];

    printf("Enter start now\n\n");
    for (int i=0;i<=5;i++)
    {
        printf("Enter Num %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i=0;i<=5;i++)
    {

        printf("Entered Num %d %d\n",i+1,a[i]);

    }
        printf("\n\n");
    return 0;
}
