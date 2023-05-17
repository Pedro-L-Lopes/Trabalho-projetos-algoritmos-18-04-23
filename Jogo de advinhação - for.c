#include <stdio.h> // Biblioteca que inclui as funções de entrada/saída
#include <time.h> // Fornece funões relacionada ao tempo que sera usada para incializar o gerador de número

int main() {
    int numeroSecreto, palpite, tentativas = 0; // Inicação das variaveis
    
	    srand(time(0)); // Inicializa o gerador de números aleatorios
	    numeroSecreto = rand() % 100 + 1; // O rand() gera um numero aleatório o 100 + 1 faz com que esse numero seja entre um e 100
	
	    printf("Bem-vindo ao jogo de adivinhacao!\n"); // Imprime na tela a frase entre ""
	
	    do { // Inicio do loop de repetição do-while que primeiro testa e depois executa
	    
	        printf("Digite um numero entre 1 e 100: "); // Imprime na tela a frase entre ""
	        scanf("%d", &palpite); // Espera a entrada do usuário de um número do tipo inteiro
	        
	        tentativas++; // A cada vez que o loop se repete a variavel "tentativas" é aumentada em um
	
	        if (palpite > numeroSecreto) { // Verifica se "palpite" é maior que o numeroSecreto
	            printf("Tente um numero menor.\n"); // se "palpite" for maior que o numeroSecreto imprime a frase
	            
	        } else if (palpite < numeroSecreto) { // Verifica se "palpite" é menor que o numeroSecreto
	            printf("Tente um numero maior.\n");// se "palpite" for menor que o numeroSecreto imprime a frase
	            
	        } else { // Se nenhuma das opções acima se forem corretas, o usuário acertou o número
	            printf("Parabens! Voce acertou o numero em %d tentativas!\n", tentativas); // Imprime a frase caso o usuário acerte
	        }
	        
	    } while (palpite != numeroSecreto); // Enquanto "palpite" for diferente de "numeroSecreto" o loop continua

}

