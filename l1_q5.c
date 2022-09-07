#include <stdio.h>
#include <stdlib.h>
//declarando funcao e seus parametros
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *m){ 
	int freq;
//percentual de frequencia e calculo da media
	freq = (faltas/aulas)*100; 
	*m = (p1 + p2 + p3)/3; 
	
	if(freq <= 25 && *m >= 6){
		printf("APROVADO. \n");
		return 'A'; 
	}
	else if(freq <= 25 || *m < 6){
		printf("REPROVADO. \n");
		return 'R'; 
	}
	else{
		printf("REPROVADO POR FALTAS. \n");
		return 'F';
		}//retorno
}
int main(){

    float p1, p2, p3, m;
    int faltas, aulas;
    int result; //variavel para chamar funcao
	
	printf("Informe as 3 notas:\n");
    scanf("%f %f %f", &p1, &p2, &p3);
    
	printf("Informe suas faltas: \n");
    scanf("%d", &faltas);
	
	printf("Total de aulas: \n");
    scanf("%d", &aulas);
	printf("Sua media eh: %.1f, e voce esta ", m); //imprimindo a media
    result = situacao(p1, p2, p3, faltas, aulas, &m); //chamando a funcao e os parametros
    
    return 0;
}