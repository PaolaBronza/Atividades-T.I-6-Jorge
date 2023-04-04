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
	int qtd,num[1000];
	
//início código
	printf("Insira a quantidade de números: ");
	scanf("%d",&qtd);
	
	
	for(int i=1;i<=qtd;i++){
	printf("Insira um número: ");
	scanf("%d",&num[i]);
	}
	for(int i=1;i<=qtd;i++){
	printf("\n%d",num[i]);
	Sleep(100);
	}
return 0;
}
