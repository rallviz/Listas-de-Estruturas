#include <stdio.h>
#include <stdlib.h>

//funcao
int cont(int elemento, int **matriz, int l, int c) {
	int i, j;
	//percorrendo verificacao para que retorne 0 ou 1
	for(i=0; i<l; i++) {
		for(j=0; j<c; j++) 
			if (matriz[i][j] == elemento)
				return 1;
	}
	
	return 0;
}
//verificando se ha especo, caso nao haja, encerra
void sair() {
	printf("\nao ha espaco na memoria!\n");
	exit(1);
}

int main() {
	int **matriz;
	int l, c, i, j;
	
	printf("\nInforme as dimensoes");
	printf("linhas: ");
	scanf("%d", &l);
	printf("colunas: ");
	scanf("%d", &c);
//declarando alocacao	
	matriz = (int **) malloc(l * sizeof(int *));
//encerra programa caso matriz for igual a nulo	
	if (matriz == NULL) sair(); 
	
//preenchenco com os dados	
	for(i=0; i<l; i++) {
		matriz[i] = (int *) malloc(c * sizeof(int));
		
		if (matriz[i][0] == NULL) sair();
//lendo cada elemento 		
		for(j=0; j<c; j++) {
			printf("[%d][%d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
		}
	
	}
	
	do {
		printf("Insira o numero que deseja procurar na matriz: ");
		scanf("%d", &j);
//chamando a funcao		
		(cont(j, matriz, l, c))?
			  printf("O elemento %d existe na matriz.\n", j):
			  printf("O elemento %d nao existe.\n", j);
		
		putchar('\n');
//finaliza programa			

