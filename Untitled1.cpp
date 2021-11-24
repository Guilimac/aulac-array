#include <iostream>

#include <string.h>


using namespace std;
int main(void)
{
	
	char nome[13] = "JoaoHenrique";
	
	printf("\n %s:", nome);
	
	printf("\n*************\n");
	int i=0;
	char a = 'a';
	while(a != '\0'){
		printf("\nO valor na posicao %d da string e :%c", i, nome[i]);
		i++;
		a = nome[i];
	}
	
	printf("\n*************\n");
	
	for (int i = 0; nome[i] != '\0'; i++); // aqui ele vai ler todos os caracteres do vetor independente de quantos são ate chegar no ultimo que será o caractere nulo '\0'
	{
	
		printf("\nO valor na posicao %d da string e :%c", i, nome[i]);
	
	}
	
	printf("\nO nome digitado foi :%s\n\n\n", nome);
	
	return 0;
}
