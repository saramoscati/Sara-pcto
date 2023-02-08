#include <stdio.h>

int main ()
{
    int x = 0;
    int somma = 0;

    while(x <= 100)
    {
        somma = somma + x;
        x = x + 2;
    }
    printf("%d\n", somma);
}