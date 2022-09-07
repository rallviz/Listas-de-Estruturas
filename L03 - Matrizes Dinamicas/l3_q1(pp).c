#include <stdio.h>
#include <stdlib.h>

int **soma_vetor_ponteiros(int **I, int **II){ //fun��o soma
    int i, j;
    int **soma; //criando uma nova variav�l para receber a soma
    soma = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente o tamanho dessa matriz
    for(i = 0; i < 3; i++){ 
        soma[i] = (int*)malloc(3*sizeof(int));
    }
    for(i = 0; i < 3; i++){ //realiza��o a soma
        for(j = 0; j < 3; j++){
            soma[i][j] = I[i][j] + II[i][j];
        }
    }

    printf("\n\tSoma: \n"); //imprimindo a matriz para o usu�rio
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("\t| ");
        for(j = 0;j < 3; j++){ //percorre a coluna
      
        printf("%d\t| ", soma[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++){ //liberando a mem�ria alocada
        free(soma[i]);
    }
    free(soma); 

    return soma; //retorna C para o usu�rio
}

int **sub_vetor_ponteiros(int **I, int **II){ //fun��o para subtra��o
    int i, j;
    int **sub; //criando uma nova variav�l para receber a subtra��o
    sub = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente o tamanho dessa matriz
    for(i = 0; i < 3; i++){
        sub[i] = (int*)malloc(3*sizeof(int));
    }
    for(i = 0; i < 3; i++){ //realiza��o a subtra��o
        for(j = 0; j < 3; j++){
            sub[i][j] = I[i][j] - II[i][j];
        }
    }

    printf("\n\tSubtracao: \n"); //imprimindo a matriz para o usu�rio
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("\t| ");
        for(j = 0; j < 3; j++){ //percorre a coluna
      
        printf("%d\t| ", sub[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++){ //liberando a mem�ria alocada
        free(sub[i]);
    }
    free(sub);

    return sub; //retorna D para o usu�rio
}

int **mult_vetor_ponteiros(int **I, int **II){ //fun��o para multiplica��o
    int i, j, k, aux;
    int **mult; //criando uma nova variav�l para receber a multiplica��o
    mult = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente o tamanho dessa matriz
    for(i = 0; i < 3; i++){
        mult[i] = (int*)malloc(3*sizeof(int));
    }
    for(i = 0; i < 3; i++){ 
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){ //multiplica os elementos da linha de 'A' pela coluna de 'B' e faz a soma
                aux = aux + (I[i][k] * II[k][j]); 
        }
        mult[i][j] = aux;
        aux = 0;
        }
    }

    printf("\n\tMultiplicacao: \n");
    for(i = 0; i < 3; i++){ //percorre a linha
        printf("\n\t| ");
        for(j = 0; j < 3; j++){ //percorre a coluna
      
        printf("%d\t| ", mult[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++){ //liberando a mem�ria alocada
        free(mult[i]);
    }
    free(mult); //retorna E para o usu�rio

    return mult;
}

int main(void){
    int i, j; 
    
    int **I, **II; //matrizes din�micas 

    I = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente
    for(i = 0; i < 3; i++){
        I[i] = (int*)malloc(3*sizeof(int));
    }

    for(i = 0; i < 3; i++){ //recebe do usu�rio o valor de cada elemento da matriz A
        for(j = 0; j < 3; j++){
            printf("Digite o elemento [%d][%d] da matriz I: ", i, j);
            scanf("%d", &I[i][j]);
        }
    }

    printf("-----------------------------------------------\n");

    II = (int**)malloc(3*sizeof(int*)); //alocando dinamicamente
    for(i = 0; i < 3; i++){
        II[i] = (int*)malloc(3*sizeof(int));
    }

    for(i = 0; i < 3; i++){ //recebe do usu�rio o valor de cada elemento da matriz B
        for(j = 0; j < 3; j++){
            printf("Digite o elemento para a posicao [%d][%d] da matriz II: ", i, j); 
            scanf("%d", &II[i][j]);
        }
    }

    soma_vetor_ponteiros(I, II); //chamando a fun��o soma
    sub_vetor_ponteiros(I, II); //chamando a fun��o subtra��o
    mult_vetor_ponteiros(I, II); //chamando a fun��o multiplica��o

    for(i = 0; i < 3; i++){ //liberando a matriz de A
        free(I[i]);
    }
    free(I);

    for(i = 0; i < 3; i++){ //liberando a matriz de B
        free(II[i]);
    }
    free(II);

    return 0;
}