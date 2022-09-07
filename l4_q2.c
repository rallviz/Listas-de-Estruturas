#include <stdio.h>
#include <stdlib.h>
//estrutura com dados do aluno
typedef struct aluno{
	int matricula;
	char nome[80];
	char turma;
	float notas[3];
	float media;
} Aluno;
//funcao
void matricula(int n, Aluno* alunos){
	int i;
	
	printf("Informe quantos alunos deseja matricular:");
	scanf("%d", &n);
	printf("================================\n");
//alocando dinamicamente	
	alunos = (Aluno*)malloc(n*3);
//verificando se ha espaco na memoria
	if(alunos == NULL){
		printf("Sem memoria!\n");
		exit(1);
	}
//laco para limitar a quantidade de matriculas	
	for(i = 0; i < n; i++){
		if(n > 10){
			printf("Nao ha mais vagas!\n");
			system("pause\n");
			exit(1);
		}
		printf("\t\tMatricula: \n");
		scanf("%d", &alunos[i].matricula);
		printf("Nome:");
		scanf("%s", alunos[i].nome);
		printf("Turma:");
		scanf("%s", alunos[i].turma);
	}
	
	free(alunos);
}
//funcao imprime notas finais
void lanca_notas(int n, Aluno* alunos){
	int i;
	
	for(i = 0; i < n; i++){
		printf("\n Insira as notas: \n");
		scanf("%f", &alunos->notas[i]);
		alunos->media = (alunos->media + alunos->notas[i]/3);//operacao para atrinuir a media
	}
	printf("Media: %.1f\n", alunos);
}
//funcao para imprimir todos os dados
void imprime_tudo(int n, Aluno* alunos){
	int i;
	
	for(i = 0; i < n; i++){
		printf("Matricula: %d\n", alunos->matricula);
		printf("Nome: %s\n", alunos->nome);
		printf("================================\n");
	}
}

void imprime_turma(int n, Aluno* alunos, char turma){
	int i;
	
	for(i = 0; i < n; i++){
		printf("Matricula: %d\n", alunos->matricula);
		printf("Nome: %s\n", alunos->nome);
		printf("Turma: %s\n", alunos->turma);
		printf("================================\n");
	}
}

void imprime_turma_aprovados(int n, Aluno* alunos, char turma){
	int i;
	
	for(i = 0; i < n; i++){
		printf("Turma: %s\n", alunos->turma);
		
		if(alunos->media >= 7){
			printf("Aluno aprovado!\n");
			printf("Turma: %s\n", alunos->turma);
		}
		else{
			printf("Aluno reprovado!\n");
			printf("Turma: %s\n", alunos->turma);
		}
	}
}
int main(){
	
	Aluno* a;
	int n;
	char t;
	//chamando todas as funcoes
	matricula(n, a);
	printf("\n");
	lanca_notas(n, a);
	printf("\n");
	imprime_tudo(n, a);
	printf("\n");
	imprime_turma(n, a, t);
	printf("\n");
	imprime_turma_aprovados(n, a, t);
	
	return 0;
}