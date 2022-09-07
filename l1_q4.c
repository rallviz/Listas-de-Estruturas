#include <stdio.h>
#include <math.h>
//funcao area e o perimetro
void calcula_hexagono(float l, float *area, float *per){ 
	
	//calculo area e perimetro, respectivamente
	*area = 3 * pow(l, 2) * sqrt(3)/2;  
	*per = 6 * l;
}
int main(){
	
	float l, a, p;
	
	printf("informe o tamanho de L: ");
	scanf("%f", &l);
	//chamando a funcao
	calcula_hexagono(l, &a, &p);  
	//imprimindo os resultados
	printf("\nO tamanho da area eh: %.1f, e seu perimetro eh: %.1f\n", a, p);
	return 0;
}