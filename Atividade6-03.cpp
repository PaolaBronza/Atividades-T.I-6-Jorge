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
	
//variáveis
	char nome[30][40];

//INÍCIO PROGRAMA
	for(int i=0;i<=29;i++){
		printf("Insira um nome: ");
		gets(nome[i]);
	}
	for(int i=0;i<=29;i++){
		printf("\n Nome: %s",nome[i]);
		Sleep(100);
	}
	
return 0;
}
