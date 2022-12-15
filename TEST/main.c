#include <stdio.h>
//#include <string.h>
#include <stdlib.h>


int concat(int a, int r)
{

	char s1[20];
	char s2[20];


	sprintf(s1, "%d", a);
	sprintf(s2, "%d", r);


	strcat(s1, s2);


	int c = atoi(s1);


	return c;
}
int main()
{
    int a,d,r,q,m;

    printf("Enter your data: ");
    scanf("%i",&a);
    printf("Enter your divider: ");
    scanf("%i",&d);
    r=a%d;
    printf("\nRemainder is %i",r);

    printf("\nYour data:%i%i ",a,r);



    printf("\n\nEnter Received Data : ");
    scanf("%d",&m);
    if (concat(a, r)==m)
    {
        printf("\n\nSUCCESSFULLY RECIEVED DATA!!!\n\nDATA MATHCHED\n\n");
    }
    else
        {
            printf("\n\nERROR DETECTED !!!!\n\nDATA DID NOT MATCH\n\n");
        }

    return 0;
}



