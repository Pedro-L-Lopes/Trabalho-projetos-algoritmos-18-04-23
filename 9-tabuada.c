#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, i;
	
	printf("Digite um numero: ");
	scanf("%d", &num);

	for(i=0; i<=10; i++){
		printf("%d x %d = %d\n", num, i, num*i);
	}

	system("pause");
}
