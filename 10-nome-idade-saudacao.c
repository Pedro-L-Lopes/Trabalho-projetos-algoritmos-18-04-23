#include <stdio.h>
#include <stdlib.h>

int main(){
	char nome[50];
	int idade;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Ola %s, seja muito bem vindo! \n Voce tem %d anos, certo?!\n", nome, idade);
	
	system("pause");
}
