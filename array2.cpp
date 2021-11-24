#include <iostream>

int main()
{
	int matriz[5][5] = { { 01, 2, 3, 4, 5},
						 { 6, 7, 8, 9,10},
						 {11,12,13,14,15},
						 {16,17,18,19,20},
						 {21,22,23,24,25} };
			//matriz  5x5

	for ( int linha = 0;  linha < 5;  linha++)
	{ // O for de FORA = LINHAS
		for (int coluna = 0; coluna < 5; coluna++)
		{ //O for de DENTRO = COLUNA
			printf("%d ", matriz[linha][coluna]);
		}
		printf("\n");//pular a linha de fora para o codigo ficar igual uma matriz
	}
	printf("\n\n_____________\n\n");
	//Essa é uma alteração
	for (int i = 0; i < 5 ; i++)
	{
		printf("\n Linha %d\n", i+1);
		for (int x = 0; x < 5; x++)
		{
			printf("%d",x);
			scanf("%d", &matriz[i][x]);
		}
		printf("\n");
	}

	printf("\n\n_____________\n\n");

	for (int i = 0; i < 5; i++)
	{
		for (int x = 0; x < 5; x++)
		{
			printf("%d ", matriz[i][x]);
		}
		printf("\n");
	}

	return 0;
}
