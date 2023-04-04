#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	unsigned int cp = 1252; 
    unsigned int cpin  = GetConsoleCP();
    unsigned int cpout = GetConsoleOutputCP();
    SetConsoleCP(cp);       
	SetConsoleOutputCP(cp);
	
//VARIÁVEIS
	bool achou;
	int valor[10];
	int pesquisa, i;
	
//INÍCIO CÓDIGO
	for(int i=0;i<=9;i++){
		printf("digite um valor: ");
		scanf("%d",&valor[i]);
	}
	printf("_____________________________\n");
	printf("Digite um valor pra pesquisa: ");
	scanf("%d",&pesquisa);
	for(int i=0;i<=9;i++){
		if(valor[i]==pesquisa){
			achou=true;
		}
	}
	
	if(achou==true){
		system("color 02");
		printf("\nPossui");
	}
	else{
		system("color 04");
		printf("\nNão possui");
	}
	return 0;
}
