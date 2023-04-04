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
	int temp[7],media;
	
//INÍCIO CÓDIGO
		printf("Insira a temperatura do dia (em °C):");
		printf("Segunda:\t");
		scanf("%d °C",&temp[0]);
		printf("Terça:\t\t");
		scanf("%d °C",&temp[1]);
		printf("Quarta:\t\t");
		scanf("%d °C",&temp[2]);
		printf("Quinta:\t\t");
		scanf("%d °C",&temp[3]);
		printf("Sexta:\t\t");
		scanf("%d °C",&temp[4]);
		printf("Sábado:\t\t");
		scanf("%d °C",&temp[5]);
		printf("Domingo:\t");
		scanf("%d °C",&temp[6]);
		
		media=(temp[0]+temp[2]+temp[3]+temp[4]+temp[5]+temp[6])/7;
		printf("\nMédia da semana: %d",media);
		return 0;
	return 0;
}
