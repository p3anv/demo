#include <stdio.h>
#include <stdlib.h>
int linearSearch(int a[9],int n,int val)
{
    for (int i=0;i<n;i++)
    {
        if(a[i]==val)
            return i+1;
    }
    return -1;
}
int main()
{
    int ch=0;
    int a[9];
    int val;
    int n,res;
    do{printf("1.Linear Search");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("ENTER INTEGERS");
        scanf("%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8]);
        printf("ENTER NUMBER TO SEARCHED");
        scanf("%d",&val);

        n = sizeof(a) / sizeof(a[0]); // size of array 
        res = linearSearch(a, n, val); 
        printf("The Element of the array are - ");
        for (int i=0;i<n;i++)
        {
            printf("%d",a[i]);}

        if (res== -1)
            printf("\nElement is not present in array");
        else
            printf("\nElement is present at %d position of array",res);



    }
    }while(ch!=2);
}
