#include <stdio.h>
#include <stdlib.h>
//function that prints Namaste if user is Indian &
//Bonjour if the user is French

void namaste();

void bonjour();
int main()
{
    char ch;
    printf("I : Indian\nF : French\n");
    scanf("%c",&ch);
    if(ch == 'I')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
}
void namaste()
{
    printf("Namste\n");

}
void bonjour()
{
    printf("Bonjour");
}
