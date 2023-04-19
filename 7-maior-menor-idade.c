#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);

	if(idade <= 18){
		printf("E maior de idade!\n");
	}else{
		printf("E menor de idade!\n");
	}
	
	system("pause");
}
