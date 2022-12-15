#include<stdio.h>

int main()
{
	int ch=0,rem,a[10],i=20,num,j,binary,temp;
	int num2,binary_val,decimal_val=0,base=1,flag=0;

	printf("************** Welcome to Binary & Decimal Converter *********** ");

	do{
        printf("\n\n");
		printf("\n 1. What is Binary & Decimal Number ");
		printf("\n 2. Decimal to Binary");
		printf("\n 3. Binary to Decimal");
		printf("\n 4. Exit");
		printf("\n Enter Your Choice : - ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					printf("What is Binary Number?\n");
					printf("ANS - A binary number is a number expressed in the base-2 numeral system or binary \n \t numeral system, a method of mathematical expression which uses only two symbols: \n \t typically 0 (zero) and 1(one)");
					printf("\n\n");
					printf("What is Decimal Number ?\n");
					printf("ANS - Decimal is a term that describes the base-10 number system, probably the most \n \t commonly used number system. The decimal number system consists of ten single-digit \n \t numbers: 0, 1, 2, 3, 4, 5, 6, 7, 8 and 9. The number after 9 is 10. The number after 19 is 20 and so forth");

					printf("\n\n");
					break;
			case 2:

                    printf("Enter Number:");
                    scanf("%d",&num);
                    printf("\n\n");
                    for (i=0;num >0;i++)
                    {
                        a[i]=num%2;
                        num = num/2;
                    }
                    printf("Binary Number= ");
                    for(j=i-1;j>=0;j--)
                    {
                        printf("%d",a[j]);
                    }
                    break;
            case 3:
                printf("Enter Binary num(1s and 0s)\n");
                scanf("%d",&num2);
                binary_val=num2;
                while(num2>0)
                {
                    rem=num2%10;
                    if(rem==1 || rem==0)
                    {
                        decimal_val=decimal_val+rem*base;
                        num2=num2/10;
                        base=base*2;
                    }
                    else
                    {
                        printf("\n\nENTER VALID BINARY NUMBER");
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    printf("Binary Number= %d\n\n",binary_val);
                    printf("Decimal Equivalent = %d\n\n",decimal_val);
                }

                break;

            case 4:
					printf("\n\n ---- >  THANK YOU   < ------- ");
					break;
			default:
					printf("\nXXXXXXXXXXXXXXXXXX Enter Correct Choice xxxxxxxxxxxxxxxx\n");
		}

	}while(ch!=4);

	return 0;
}
