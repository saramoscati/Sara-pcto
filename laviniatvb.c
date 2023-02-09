#include <stdio.h>
int main()
{
int i = 0;
int x=10;
int array[11];

while(i<=11)
{
array[i] = x;
i = i+1;
x= x+1;
}

i = 0;
while (i<=11)
{
    printf("%d\n", array[i]);
    i=i + 1;
}





}