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
	
//vari�veis
	int num[20];
	
//in�cio c�digo
	for(int i=0;i<=19;i++){
	printf("Insira um n�mero: ");
	scanf("%d",&num[i]);
	}
	for(int i=19;i>=0;i--){
	printf("\n%d",num[i]);
	Sleep(100);
	}
return 0;
}
