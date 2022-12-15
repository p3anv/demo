#include <stdio.h>
#include <stdlib.h>

int main()
{
   do {int a[10],num,i,j;
   char ch;
    printf("1.Decimal to Binary");

     switch(ch)
     {
     case 1:
         printf("\n Enter Decimal Number:");
         scanf("%d",&num);

         for (i =0;num>0;i++)
        {
            a[i]=num%2;
            num=num/2;
        }
        printf("\nBinary Number= ");

        for (j=1;j>=0;j--)
        {
            printf("%d",a[j]);
        }
        break;
     }while (ch!=4);
}
   }

