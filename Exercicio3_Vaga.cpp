#include <stdio.h>
#define MAX 30


void PreencheVetor(float vet[MAX]){
	int i, soma, menor=9999;
	
	printf("Cadastre abaixo os faturamentos diarios: \n");
	for(int i=0; i<MAX; i++){
		printf("Faturamento do %do dia: ", i+1);
		scanf("%f", &vet[i]);
	}
}

void CalculaMaior(float vet[30]){
	float maior=0;
	int i, dia;
	for(int i=0; i<MAX; i++)
		if(vet[i] > maior){
			maior = vet[i];
			dia = i;
		}
	
	printf("\nMaior faturamento eh de %.4f no dia %d\n", maior, dia+1);
}

void CalculaMenor(float vet[30]){
	float menor=9999;
	int i, dia;
	for(i=0; i<MAX; i++)
		if(vet[i] < menor){
			menor = vet[i];
			dia = i;
		}
	
	printf("\nMenor faturamento eh de %.4f no dia %d\n", menor, dia+1);
}

void MediaMensal(float vet[30]){
	float media, soma=0;
	int cont=0;
	
	for(int i=0; i<MAX; i++)
		soma = soma + vet[i];
	
	media = soma/30;
	
	for(int i=0; i<MAX; i++)
		if(vet[i]>media)
			cont++;
	
	printf("O numero de dias superiores a media mensal eh de %d\n", cont);
}

int main()
{
	float vet[30];
	PreencheVetor(vet);
	CalculaMaior(vet);
	CalculaMenor(vet);
	MediaMensal(vet);
}
