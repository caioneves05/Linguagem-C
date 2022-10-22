#include <stdio.h>
#include <stdlib.h>


// Entendendo a utilização da função
/* float calcula_media(float n1, float n2){
	return(n1 + n2) /2; 
}

int main(){
	float nota1, nota2, media =0;
	printf("Digite a nota1:\n");
	scanf("%f",&nota1);
	
	printf("Digite a nota2:\n");
	scanf("%f",&nota2);
	
	media = calcula_media(nota1, nota2);
	printf("A MEDIA DESSE ALUNO E %0.2f\n", media);
	
	system("PAUSE");
	return 0;
}
*/

int maior_numero(int numero_escolhido1, int numero_escolhido2, int numero_escolhido3){
	if (numero_escolhido1 > numero_escolhido2 && numero_escolhido1 > numero_escolhido3){
	return numero_escolhido1;
	}
	if (numero_escolhido2 > numero_escolhido1 && numero_escolhido2 > numero_escolhido3){
		return numero_escolhido2;
	}
	else{
	return numero_escolhido3;
	}
}
int main (){
	int numero_escolhido1, numero_escolhido2, numero_escolhido3, verifica_maior=0;
	printf("Digite o primeiro numero: ");
	scanf("%d",&numero_escolhido1);
	
	printf("Digite o segundo numero: ");
	scanf("%d",&numero_escolhido2);
	
	printf("Digite o terceiro numero: ");
	scanf("%d",&numero_escolhido3);
	
	verifica_maior = maior_numero(numero_escolhido1, numero_escolhido2, numero_escolhido3);
	
	printf("O maior numero foi o %d\n",verifica_maior);
	
	system("PAUSE");
	
	return 0;
}