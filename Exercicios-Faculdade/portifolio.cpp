/*Criar um programa que receba os dados de cada tipo de animal cadastrado no
zoológico, à quantidade de animais da espécie e o programa deve calcular a quantidade
kilos de comida para cada tipo de animal por dia e por mês e o preço estimado por
kilo.
Exemplo fictício :
Dados de entrada:
- Tipo de Animal: Leopardo- Quantidade de animais: 2- Custo estimado por kilo de comida: 10
Dados de Saída:
- Quantidade por de kilo por animal: 5
- Quantidade por dia: 10 
- Quantidade por mês: 300
- Custo estimado por mês: 3000.


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char tipo_animal;
	int quantidade_animal;
	float custo_kilo;
	
	printf("\nQual o tipo de animal: ");
	scanf("%s", &tipo_animal);
	
	printf("\nQuantidade de animais: ");
	scanf("%d", &quantidade_animal);
	
	printf("\nCusto estimado por kilo de comida: ");
	scanf("%f", &custo_kilo);
	return 0;
}