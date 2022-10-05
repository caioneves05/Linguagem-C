#include <stdio.h>
#include <stdlib.h>

int main() {
 float n1, n2, res=0;
 int opcao;
 printf("Primeiro numero: ");
 scanf("%f",&n1);
 
 printf("Segundo numero: ");
 scanf("%f",&n2);
 
 printf("\n[1] - Adição");
 printf("\n[2] - Subtração");
 printf("\n[3] - Divisao");
 printf("\n[4] - Multiplicacao");
 
 printf("\nOpcao escolhida: ");
 scanf("%d",&opcao);
 
 if (opcao == 1){
    res = n1+n2;
    printf("O resultado da soma dos dois numeros e: %0.0f", res);
 }
 
 if (opcao == 2){
    res = n1-n2;
    printf("O resultado da subtracao dos dois numeros e: %0.0f", res);
 }
 
 if (opcao == 3){
    res = n1/n2;
    printf("O resultado da divisao dos dois numeros e: %0.0f", res);
 }
 
 if (opcao == 1){
    res = n1*n2;
    printf("O resultado da multiplicacao dos dois numeros e: %0.0f", res);
 }
}