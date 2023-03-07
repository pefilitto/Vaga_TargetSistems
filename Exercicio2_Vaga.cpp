#include <stdio.h>
#define MAX 20

void Fibonnaci(){
	int vet[MAX], num, soma, cont=0;
	
	vet[0] = 0;
	vet[1] = 1;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	for(int i=2; i<MAX; i++)
		vet[i] = vet[i-1]+vet[i-2];
	
	printf("\nSequencia fibonnaci:\n");
	for(int i=0; i<MAX; i++)
		printf("%d ", vet[i]);
	
	
	for(int i=0; i<MAX; i++)
		if(num == vet[i])
			cont++;
	
	printf("\n");
	if(cont == 1)	
		printf("\nO numero pertence a sequencia fibonnaci\n");
	else
		printf("\nO numero nao pertence a sequencia fibonnaci\n");
}

int main()
{
	Fibonnaci();
}
