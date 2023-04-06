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
	char nome[40], email[40], tel[20];
	char *pont_nome = &nome[40];
	char *pont_email = &email[40];
	char *pont_tel = &tel[20];
	
//INÍCIO CÓDIGO
	for(int i=0;i<=9;i++){
	printf("Nome: ");
	fgets(nome,40,stdin);
	printf("Email: ");
	fgets(email,40,stdin);
	printf("Telefone: ");
	fgets(tel,20,stdin);
	
	printf("\nNome:\t\t%s",nome);
	printf("Email:\t\t%s",email);
	printf("Telefone:\t%s",tel);
	printf("_______________________\n");
	}
	
	return 0;
}
