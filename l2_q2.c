#include <stdio.h>
#include <stdlib.h>

int main(){

	int alunos, i;
	float *n;
	float media = 0;
//alocando dinamincamente	
	n = (float*)malloc(alunos*4);  
//verificando se ha espaço na memoria	
	if(n == NULL){  
		printf("sem memoria!\n");
		exit(0);  
	}
	
	printf("Digite a quantidade de alunos: \n");
	scanf("%i", &alunos);
//percorrendo vetor
	for(i = 0; i < alunos; i++){  

		scanf("%f", &n[i]); 
//somando as notas e atribuido a variavel
		media = media + n[i];   
	}
//dividindo com a quantidade de alunos informados e imprimindo a média
	printf("Media: %.1f", media = media/alunos);
//liberando a memória	
	free(n);  
	
	return 0;
}