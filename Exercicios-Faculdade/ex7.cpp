#include <stdio.h>
#include <stdlib.h>
// Faça um programa em C que pergunte qual filme o usuário escolher, e ao final da votação mostre na tela a quantidade de pessoa que escolheram determinado filme.
int main(){
	int qtdvotosSherek = 0, qtdvotosCarrros = 0, qtdvotosDragao =0;
	int votos = 1;
	
	while (votos != 0){
	printf(" [0] Finalizar votacao \n [1] Sherek \n [2] Carros \n [3] Dragao  \n\n Escolha sua opcao: ");
	scanf("%d",&votos);
	if (votos == 1){
		qtdvotosSherek +=1;	
	}
	if (votos ==2){
		qtdvotosCarrros +=1;
	}
	if (votos ==3){
		qtdvotosDragao +=1;
	}
	if (votos ==0){
		votos = 0;
	}
	}
	printf(" \n FIM DA VOTACAO \n Votos para Sherek: %d \n Votos para Carros: %d \n Votos para Dragao: %d. \n ",qtdvotosSherek, qtdvotosCarrros, qtdvotosDragao );
	system("PAUSE");
	return 0; 
}