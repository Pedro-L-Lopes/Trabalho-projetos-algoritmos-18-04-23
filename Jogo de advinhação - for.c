#include <stdio.h> // Biblioteca que inclui as fun��es de entrada/sa�da
#include <time.h> // Fornece fun�es relacionada ao tempo que sera usada para incializar o gerador de n�mero

int main() {
    int numeroSecreto, palpite, tentativas = 0; // Inica��o das variaveis
    
	    srand(time(0)); // Inicializa o gerador de n�meros aleatorios
	    numeroSecreto = rand() % 100 + 1; // O rand() gera um numero aleat�rio o 100 + 1 faz com que esse numero seja entre um e 100
	
	    printf("Bem-vindo ao jogo de adivinhacao!\n"); // Imprime na tela a frase entre ""
	
	    do { // Inicio do loop de repeti��o do-while que primeiro testa e depois executa
	    
	        printf("Digite um numero entre 1 e 100: "); // Imprime na tela a frase entre ""
	        scanf("%d", &palpite); // Espera a entrada do usu�rio de um n�mero do tipo inteiro
	        
	        tentativas++; // A cada vez que o loop se repete a variavel "tentativas" � aumentada em um
	
	        if (palpite > numeroSecreto) { // Verifica se "palpite" � maior que o numeroSecreto
	            printf("Tente um numero menor.\n"); // se "palpite" for maior que o numeroSecreto imprime a frase
	            
	        } else if (palpite < numeroSecreto) { // Verifica se "palpite" � menor que o numeroSecreto
	            printf("Tente um numero maior.\n");// se "palpite" for menor que o numeroSecreto imprime a frase
	            
	        } else { // Se nenhuma das op��es acima se forem corretas, o usu�rio acertou o n�mero
	            printf("Parabens! Voce acertou o numero em %d tentativas!\n", tentativas); // Imprime a frase caso o usu�rio acerte
	        }
	        
	    } while (palpite != numeroSecreto); // Enquanto "palpite" for diferente de "numeroSecreto" o loop continua

}

