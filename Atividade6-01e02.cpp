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
int num[10];

//INÍCIO CÓDIGO
	for(int i=1;i<=10;i++){
		printf("Insira um número: ");
		scanf("%d",&num[i]);
}
	for(int i=1;i<=10;i++){
		printf("\nvetor:%d",num[i]);
		Sleep(100);
	}
	
return 0;
}
