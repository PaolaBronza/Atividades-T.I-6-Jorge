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
	system("color 02");
	
//VARIÁVEIS
	char nome[40][10],email[40][10],tel[20][10];
	
//INÍCIO CÓDIGO
	
	for(int i=0;i<=9;i++){
		printf("\nInsira seu nome: ");
		fgets(nome[i],40,stdin);
		printf("\nInsira seu email: ");
		fgets(email[i],40,stdin);
		printf("\nInsira seu telefone: ");
		fgets(tel[i],11,stdin);
		printf("\n\nNome: %sEmail: %sTel: %s",nome,email,tel);
	}
	
	return 0;
}
