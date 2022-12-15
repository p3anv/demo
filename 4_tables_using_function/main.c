#include <stdio.h>
#include <stdlib.h>
//print tables using function//
//void table(int n);
int main()
{
    int n;
    int c;
    do{printf("Enter Number :");
    scanf("%d",&n);

    table(n);//argument
    }while(c!=1);


    return 0;
}
    void table(int n){//parameter
    for(int i=1;i<=10;i++)
    {
        printf("%d\n",i*n);
    }
}
