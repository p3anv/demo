#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary;
    float invest;
    float famt;
    float a;

    printf("Enter Your Salary ");
    scanf("%f",&salary);
    printf("Enter Your Investment ");
    scanf("%f",&invest);
    famt=salary-invest;
    printf("%\n",famt);
    if (famt>=250001 && famt<=500000)
        {
            a=famt-250000;
            printf("Your Taxable amount is %.2lf",a*0.05);
        }
    else if (famt>=500001 && famt<=750000)
    {
        a=famt-500000;
        printf("Your Taxable amount = %.2lf",a*0.1+12500);
    }
    else if (famt>=750000 && famt<=1000000)
    {
        a=famt-750000;
        printf("Your Taxable Amount = %.2lf",a*0.15+37500);
    }
    else if (famt>=1000001 && famt<=1250000)
    {
        a=famt-1000000;
        printf("Your Taxable Amount = %.2lf",a*0.2+75000);

    }
    else if (famt>=1250001 && famt<=1500000)
    {
        a=famt-1250000;
        printf("Your Taxable Amount = %.2lf",a*0.25+125000);
    }
    else if (famt>1500001)
    {
        a=famt-1500001;
        printf("Your Taxable Amount = %.2lf",a*0.3+1500000);
    }
    else if (famt<250000)
    {
        printf("No Tax Is Applicable");
    }

}
