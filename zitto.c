 #include <stdio.h>
 int main()

 {

int esponente;
int base;
float risultato=1;

printf("inserisci la base:\n");
scanf("%d", &base);

printf("inserisci l'esponente:\n");
scanf("%d", &esponente);


while(esponente>0)
{
    risultato = risultato*base;
    esponente = esponente -1;
}

printf("risposta %f\n", risultato);






 }










 