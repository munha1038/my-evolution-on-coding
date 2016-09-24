#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
	
	char loginreal[10] = "munha";
	char logindig[10];

int main() {
	setlocale (LC_ALL, "");
	
	// variaveis
	
	int l, s;
	float parte_a, parte_b, digsenha, senhareal;
	parte_a = 2;
	parte_b = 2;
	
	// processo de login
	
	printf ("\nlogin: ");
	scanf ("%s", logindig);
	printf ("\nsenha: ");
	scanf ("%f", &digsenha);
	
	//calculos
	
	senhareal = parte_a * parte_b;
	if(strcmp(logindig, loginreal) == 0){
	
		l = 1;
	}
	else{
		printf("\nlogin invalido");
	}
	if ((digsenha == senhareal) && (l == 1)){
		printf ("\nacesso permitido\n");
	}
	else {
		printf("\nacesso negado\n");
	}
	if(digsenha != senhareal){
		printf ("senha incorreta\n");
	}
	system("pause");
    return 0;
	}
