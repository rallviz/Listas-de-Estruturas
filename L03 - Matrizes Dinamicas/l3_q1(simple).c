#include <stdio.h>
#include <stdlib.h>
//função para somar
int soma_vetor(int I[3][3], int II[3][3]){ 
    int i, j;
    int soma[3][3]; //variavél para receber a soma

    for(i = 0; i < 3; i++){ //realização a soma
        for(j = 0; j < 3; j++){
            soma[i][j] = I[i][j] + II[i][j];
        }
    }
	//imprimindo a matriz
    printf("\n \tAdicao: \n");  
    //percorrendo linha e coluna, respectivamente
	for(i = 0; i < 3; i++){ 
        printf("\t| ");
		for(j = 0;j < 3; j++){ 
      
        printf("%d \t| ", soma[i][j]);
        }
    printf("\n");
	}//retornando a soma em seguida:
    return soma; }
//função para subtrair   
int sub_vetor(int I[3][3], int II[3][3]){ 
    int i, j;
    int sub[3][3]; //variavél para receber a subtração

    for(i = 0; i < 3; i++){ //subtaindo
        for(j = 0; j < 3; j++){
            sub[i][j] = I[i][j] - II[i][j]; //operação
        }
    }

    printf("\n \tSubtracao: \n"); //imprimindo a matriz
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("\t| ");
        for(j = 0; j < 3; j++){ //percorre a coluna
      
        printf("%d \t| ", sub[i][j]);
        }
        printf("\n");
    }
	//retornando o resultado da subtração:
    return sub; 
}
//função para multiplicar
int mult_vetor(int I[3][3], int II[3][3]){ 
    int i, j, k, aux;
    int mult[3][3]; //variavel para receber a multiplicação
  
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 3; j++){ 
            for(k = 0; k < 3; k++){ //multiplica a linha de 'A' pela coluna de 'B' e faz a soma
                aux = aux + (I[i][k] * II[k][j]);
        }
        mult[i][j] = aux;
        aux = 0;
        }
    }

    printf("\n \tMultiplicacao: \n");
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("\t| ");
        for(j = 0; j < 3; j++){ //percorre a coluna
      
        printf("%d \t| ", mult[i][j]);
        }
        printf("\n");
    }
    return mult;
}
int main(){
    int i, j; 
//matrizes    
    int I[3][3], II[3][3]; 
//Pede o valor de cada elemento da  1ra matriz
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 3; j++){
            printf("Insira o elemento para posicao [%d][%d] da matriz I: ", i, j);
            scanf("%d", &I[i][j]);
        }
    }
    printf("----------------------------------------------------\n");
//Pede o valor de cada elemento da 2da matriz
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 3; j++){
            printf("Insira o elemento para posicao [%d][%d] da matriz II: ", i, j);
            scanf("%d", &II[i][j]);
        }
    }
//chamando as funções
    soma_vetor(&I, &II); 
	sub_vetor(&I, &II);
    mult_vetor(&I, &II); 

    return 0;
}
