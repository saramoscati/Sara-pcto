#include <stdio.h>

int main ()
{
    int a;
    int b;
    int c;
printf("inserisci tre numeri");
scanf("%d %d %d" , &a, &b, &c);

if(a + b > c && b + c > a && a + c > b)
{
    printf("è un triangolo");
    if( a==b && b==c && c==a) 
    {
        printf("è equilatero");
    }
else if( a==b && b!=c && a!=c)
{
    printf("è isoscele");
}

else if(a!=b && b!=c && c!=a
)
{
    printf("è scaleno");
}

}

else 
{
    printf("non è un triangolo");
}

}