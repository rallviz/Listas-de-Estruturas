#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double *v;
	int i, t;
//alocando dinamicamente	
	v = (double*)malloc(t*4);  
//verificando se ha espaco
	if(v == NULL){
		printf("nao ha espaco!\n");
		exit(1); 
	}
//recebendo o tamanho do vetor	
	printf("quantos valores ele deseja armazenar? \n");
	scanf("%d", &t);
//enquanto o usuário digitar um tamanho menor que 10	
	while(t < 10){ 
		printf("Operacao recusada, digite um valor igual ou acima de 10!\n");
		exit(1); //encerra o programa
	}
//atribuindo valores random de 0 a 100 para a posição 'i'	
	for(i=0;i<t;i++){ 
		v[i] = rand()%100;
	}
//imprimindo os vetores aleatórios	
	for(i=0;i<t;i++){ 
		printf("[%.2f] ", v[i]);
	}
//liberando memoria	
	free(v); 
	
	return 0;
}