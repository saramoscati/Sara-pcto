#include <stdio.h>

int main()
{

int anno;

printf("in che anno sei nato?");
scanf("%d\n"   , &anno);

if (anno == 1969)
{
    printf("nato l'anno in cui è andato sulla luna");
}
else if (anno > 1969)
{
    printf("nato dopo lo sbarco sulla luna");
    printf("%d\n", anno - 1969);
}
else 
{
    printf(" nato prima dello sbarco sulla luna");
    printf("%d\n", 1969 - anno);
}
}