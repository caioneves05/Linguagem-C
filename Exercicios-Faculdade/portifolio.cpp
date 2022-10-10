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
	int quantidade_animal, tipo_animal;
	float quantidade_comida_dia, quantidade_comida_mes, valor_kilo=3.80, custo_mensal;
	
	printf("\nQual o tipo de animal:\n [1] CACHORRO\n [2]GATO\n [3]Cavalo\n [4]COBRA\n [5]GALINHA\n");
	scanf("%d", &tipo_animal);
	
	printf("\nQuantidade de animais: ");
	scanf("%d", &quantidade_animal);
	if (tipo_animal == 1){
	    quantidade_comida_dia = 1;
	    quantidade_comida_mes = quantidade_comida_dia * 30;
	    custo_mensal = quantidade_comida_mes * valor_kilo;
	    printf("O Cachorro consome %f kg por dia, %f kg por mês e o custo mensal estimado será de %f.\n"quantidade_comida_dia, quantidade_comida_mes, custo_mensal);
	}
	
	return 0;
}