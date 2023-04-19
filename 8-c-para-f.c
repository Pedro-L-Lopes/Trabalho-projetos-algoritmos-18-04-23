#include <stdio.h>
#include <stdlib.h>

int main(){
	float c, f;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &c);
	
	f = c * 1.8 + 32;
	
	printf("A temperatura em fahrenheit e: %2.f\n", f);

	
	
	system("pause");
}
