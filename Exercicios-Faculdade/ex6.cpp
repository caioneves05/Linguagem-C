#include <stdio.h>
#include <stdlib.h>
//Aprendendo a utilizar o while na Linguagem C


/* int main(){
	int contador =1000;
	while (contador >=0){
		printf("%d\n",contador);
		contador-=100;
		//contador trabalha de forma "negativa", ou seja do maior pro menor.
	}
	system("PAUSE");
	return 0;
} */

//            ou

/* int main(){
	int contador =1000;
	do{
		printf("%d\n",contador);
		contador-=100;
		//contador trabalha de forma "negativa", ou seja do maior pro menor.
	}while (contador >=0);
	system("PAUSE");
	return 0;
} */

//            ou

int main(){
	int contador;
	for (contador=10;contador >=0;contador-=1){  // (Início; Fim; Incremento)
		printf("%d \n", contador);
	}
}