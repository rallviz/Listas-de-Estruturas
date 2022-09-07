#include <stdio.h>
#include <stdlib.h>
//estrutura
typedef struct ingresso{  
	float preco;
	char local[100];
	char atracao[100];
} Ingresso;  //renomeando
//funcao para preencher
void preencha(Ingresso* i){  
	printf("Preco do ingresso: ");
	scanf("%f", &i->preco);  
	printf("Local: ");
	scanf("%s", i->local);  
	printf("Atracao: ");
	scanf("%s", i->atracao);
}
//funcao para imprimir
void imprima(Ingresso* i){  
	printf("Preco: %.2f\n", i->preco);  
	printf("Local: %s\n", i->local);  
	printf("Atracao: %s\n", i->atracao); 
	printf("==================================\n");
}
//funcao para alterar o preco
void altera_preco(Ingresso* i, float valor){  
//atribuido variavel ao preco	
	i->preco = valor; 
	
	printf("valor do ingresso atualizado: %.1f\n", valor);  //imprimindo novo valor
	printf("==================================\n");
}
//funcao para saber o maior e menor preco
void imprime_menor_maior_preco(int n, Ingresso* vet){  
	int i; 
	float maior, menor;
	
	printf("Quantos ingressos deseja: ");
	scanf("%d", &n); 
//percorrendo as saidas para o usuario
	for(i = 0; i < n; i++){  
		printf("\nInforme o preco do ingresso: ");
		scanf("%f", &vet->preco);
		printf("Local: \n");
		scanf("%s", vet->local);  
		printf("Atracao: \n");
		scanf("%s", vet->atracao);  
//se preco for menor que a variavel menor, iprime o menor		
		if(vet->preco < menor){  
			menor = vet->preco;  
			printf("Menor valor: %.1f\n", menor); 
			printf("Local mais barato: %s\n", vet->local); 
		}	
//se preco for maior que a variavel maior, iprime o maior
			if(vet->preco > maior){
			maior = vet->preco; 
			printf("Maior valor: %.1f", maior); 
			printf("\nLocal mais caro: %s", vet->local);
		}
	} 
}

int main(){

	Ingresso* I;
	float novo;
	int n;
//chamando funcao	
	preencha(&I);  
//chamando funcao	
	imprima(&I);
	
	printf("Novo valor do ingresso: \n");
	scanf("%f", &novo);  
	
//chamando funcao	
	altera_preco(&I, novo); 
	
	printf("\n");
//chamando funcao	
	imprime_menor_maior_preco(n, &I);
	
	return 0;
}