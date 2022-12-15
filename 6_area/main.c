#include <stdio.h>
#include <stdlib.h>
float square(float side);
float circle(float rad);
float rect(float l,float b);

int main()
{
    float side=5, rad, l, b;
    char ch;
    printf("1:square\n2:circle\n3:rectangle");

    if(ch=='a')
    {
        square(side);
    }
else
{
    printf("ERROR");
}
}
float square(float side)
{
    return side*side;
}
