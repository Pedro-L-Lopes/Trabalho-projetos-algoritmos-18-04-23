#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3, media;
	
	printf("Numero 1: ");
	scanf("%d", &n1);
	
	printf("Numero 3: ");
	scanf("%d", &n2);
	
	printf("Numero 3: ");
	scanf("%d", &n3);
	
	media = (n1 + n2 + n3) / 3;
	
	printf("A media e: %d\n", media);
}
