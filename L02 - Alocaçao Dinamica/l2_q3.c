#include <stdio.h>
#include <stdlib.h>
//função para preencher
void preenche_ordenado(int n, int *v){  
	
	int i, j;
	int org;

	printf("Insira a quantidade de numeros do vetor: \n");
	scanf("%d", &n);
//percorrendo e lendo o vetor	
	for(i = 0; i < n; i++){  
		scanf("%d", &v[i]); 
	}
//percorrendo	
	for(i = 0; i < n - 1; i++){  
        for(j = i; j < n - 1; j++){
//se a variavel na posição 'i' for maior que o da posição 'j'            
			if(v[i] > v[j]){  
//a variavel temp recebe o valor da posição 'i'                
				org = v[i];  
                v[i] = v[j];  
            }
        }
    }
//percorrendo o vetor e imprimindo
    for(i = 0; i < n; i++){  
		printf("[%d]", v[i]);
	}
}

int main(){
	
	int *vetor, num;
//alocando dinamicamente
	vetor = (int*)malloc(num *sizeof(int));  
//verificando se tem espaço pra alocar	
	if(vetor == NULL){  
		printf("memoria insuficiente!\n");
		exit(1);  
	}
//chamando função	
	preenche_ordenado(num, &vetor);  
//liberando memoria	
	free(vetor); 
	
	return 0;
}