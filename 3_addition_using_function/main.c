#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b);
int main()
{
    int a,b;
    printf("Enter Number One : ");
    scanf("%d", &a);
    printf("Enter Number Two : ");
    scanf("%d",&b);

    int s = sum(a,b);
    printf("Sum is : %d",s);
    return 0;



}
int sum (int a, int b)
{
   return a+b;
}
