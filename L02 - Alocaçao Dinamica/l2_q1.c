#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *v;
	int i, qnt;
	int menor, maior = 0;
	//alocando dinamicante
	v = (int*)malloc(qnt*sizeof(int)); 
	//verificando se tem memoria suficiente para a alocar
	if(v == NULL){  
		printf("memoria insuficiente\n");
		exit(1);
	}
	
	printf("Informe a quantidade de numeros do vetor: ");
	scanf("%d", &qnt);  //lendo a quantidade de n?meros
	printf("--------------------------------------------\n");
	//percorrendo
	for(i = 0; i < qnt; i++){ 
		scanf("%d", &v[i]);
		
		if(v[i] > maior){  //se o numero for maior que a variavel maior
		   	maior = v[i];//a variavel recebe o numero	
		} 
		if(v[i] <= menor){ //se o n?mero for menor que a variavel menor
			menor = v[i]; //a variavel recebe o numero	
		}
	}
	
	printf("Maior: %d | Menor: %d\n", maior, menor);  //imprimindo maior e menor

	free(v); //liberando a memoria	
	return 0;
}