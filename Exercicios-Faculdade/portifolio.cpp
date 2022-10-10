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
- Custo estimado por mês: 3000.*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	int tipo_animal;
	int quantidade_animal;
	float quantidade_comida_dia=0, quantidade_comida_mes=0, valor_kilo=3.80, custo_mensal=0;
	
	printf("\nQual o tipo de animal:\n [1]CACHORRO\n [2]GATO\n [3]CAVALO\n [4]COBRA\n [5]GALINHA\n ESCOLHA A OPCAO: ");
	scanf("%d",&tipo_animal);
	
	printf("\nQuantidade de animais: ");
	scanf("%d", &quantidade_animal);
	if (tipo_animal == 1){
	    quantidade_comida_dia = quantidade_animal *1;
	    quantidade_comida_mes = quantidade_comida_dia * 30;
	    custo_mensal = quantidade_comida_mes/quantidade_animal;
	    printf(" %0.0d Cachorros consomem %0.1fKg por dia, sendo 1Kg por animal, %0.1fKg por mes e o custo mensal estimado para cada aniaml sera de R$%0.0f.\n",quantidade_animal, quantidade_comida_dia, quantidade_comida_mes, custo_mensal);
	}
	if (tipo_animal == 2){
	    quantidade_comida_dia = quantidade_animal *1;
	    quantidade_comida_mes = quantidade_comida_dia * 30;
	    custo_mensal = quantidade_comida_mes/quantidade_animal;
	    printf(" %0.0d Gatos consomem %0.1fKg por dia, sendo 1Kg por animal, %0.1fKg por mes e o custo mensal estimado para cada animal sera de R$%0.0f.\n", quantidade_animal, quantidade_comida_dia, quantidade_comida_mes, custo_mensal);
	}
	if (tipo_animal == 3){
	    quantidade_comida_dia = quantidade_animal *2.5;
	    quantidade_comida_mes = quantidade_comida_dia * 30;
	    custo_mensal = quantidade_comida_mes/quantidade_animal;
	    printf(" %0.0d Cavalos consomem %0.1fKg por dia, sendo 2.5Kg por animal, %0.1fKg por mes e o custo mensal estimado para cada animal sera de R$%0.0f.\n", quantidade_animal, quantidade_comida_dia, quantidade_comida_mes, custo_mensal);
	}
	if (tipo_animal == 4){
	    quantidade_comida_dia = quantidade_animal *0.80;
	    quantidade_comida_mes = quantidade_comida_dia * 30;
	    custo_mensal = quantidade_comida_mes/quantidade_animal;
	    printf(" %0.0d Cobras consomem %0.1fKg por dia, sendo 0.8 Gramas por animal, %0.1fKg por mes e o custo mensal estimado para cada animal sera de R$%0.0f.\n", quantidade_animal, quantidade_comida_dia, quantidade_comida_mes, custo_mensal);
	}
	if (tipo_animal == 5){
	    quantidade_comida_dia = quantidade_animal *0.70;
	    quantidade_comida_mes = quantidade_comida_dia * 30;
	    custo_mensal = quantidade_comida_mes/quantidade_animal;
	    printf(" %0.0d Galinha consomem %0.1fKg por dia, sendo 0.70 Gramas por animal, %0.1fKg por mes e o custo mensal estimado para cada animal sera de R$%0.0f.\n", quantidade_animal, quantidade_comida_dia, quantidade_comida_mes, custo_mensal);
	}
	system("pause");
	
	return 0;
	}

