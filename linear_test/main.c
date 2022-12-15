#include<stdio.h>

//binary still doesnt work

int linearSearch(int a[9],int n,int val)// for linear search//
{
	for (int i=0;i<n;i++)
	{
		if (a[i]==val)
			return i+1;
	}
	return -1;
}


int main(void)
{
	int ch=0,b[5],val,n,res;
	int a[5],m,x,result,a3,low,mid;
	do{
		printf("\n\n\t1. LINEAR SEARCH\n");
		printf("\n\t2. BINARY SEARCH \n");
		printf("\n\t3. EXIT ");
		scanf("%d",&ch);

		switch(ch)
		{



			case 1:
				printf("ENTER INTERGER : ");
				for (int i=0;i<=5;i++)
				{
					scanf("%d",&a[i]);
				}
				printf("ENTER NUMBER TO BE SEARCHED : ");
				scanf("%d",&val);

				n=sizeof(b) /sizeof(b[0]);
				res=linearSearch(b,n,val);

				for (int i=0;i<n;i++)
				{
					printf("%d",b[i]);
				}

				if (res== -1){
				printf("\nElement is not present in array");}
				else
				{printf("\nElement is present at %d position of array",res);}
				break;
			case 2:
				printf("ENTER INTERGER : ");
				for (int i=0;i<=5;i++)
				{
					scanf("%d",&a[i]);
				}


				n = sizeof(a) / sizeof(a[0]);
				printf("Enter the number to be searched\n");
				scanf("%d", &m);
				result = binaryScr(a, 0, n - 1, m);
				printf("\n\n");

				if (result == -1)
                    printf("The element is not present in array");
				else
                    printf("The element is present at index %d",result);}

			break;
	}while(ch!=3);


		}








int binaryScr(int a[], int low, int high, int m)
{
if (high >= low) {
int mid = low + (high - low) / 2;
if (a[mid] == m)
return mid;
if(a[mid] > m)
return binaryScr(a, low, mid - 1, m);
return binaryScr(a, mid + 1, high, m);
}
return -1;
}

