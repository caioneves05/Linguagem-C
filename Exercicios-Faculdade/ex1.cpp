#include <stdio.h>

int main()
{
int num1, num2, soma=0, div=0, sub=0;

printf("Digite um numero: ");
scanf("%d",&num1);

printf("Digite outro numero: ");
scanf("%d",&num2);

soma = num1+num2;
printf("O resultado da soma: %d",soma);

sub = num1 - num2;
printf("A subtracao do resultado: %d", sub);
return 0;
}
