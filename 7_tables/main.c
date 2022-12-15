#include <stdio.h>
#include <stdlib.h>
//print tables using function//
int table1(int n,int i);

int main()
{
    int n,m;
    printf("Enter Table 1 ");
    scanf("%d",&n);
    printf("Enter Table 2 ");
    scanf("%d",&m);

    for(int i=1;i<=10;i++)
    {
         printf("%d\t%d\n",table1(n,i),table1(m,i));//argument

    }



    return 0;
}
    int table1(int n,int i){//parameter

    return n*i;
}
