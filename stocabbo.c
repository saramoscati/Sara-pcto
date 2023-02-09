#include <stdio.h>

int main()
{ 
int numero;
int y=1;
printf("inserisci un numero\n");
scanf("%d", &numero);

while(numero>0)
{
    y = numero * y;
    numero = numero - 1;
}  

printf("il risultato e': %d\n", y);

}
