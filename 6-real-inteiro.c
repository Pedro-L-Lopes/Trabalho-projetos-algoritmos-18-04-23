#include <stdio.h>
#include <stdlib.h>

int main(){
	float num;
	int inteiro;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	inteiro = (int)num;
	
	printf("A parte inteira do numero e: %d\n", inteiro);
	
	system("pause");
}
