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
	int qtd,nota,media, i;
	
//INÍCIO CÓDIGO
		printf("Insira a quantidade de alunos");
		scanf("%d",&qtd);
		srand(time(NULL));
		
		for(int i=0;i<=qtd-1;i++){
			for(int i=0;i<3;i++){
				nota=rand()% 70+30;
			}
			media=(nota[0]+nota[1]+nota[2])/3;
			printf("\nAluno: %d\n\nNota1: %d\nNota2: %d\nNota3: %d\n\nMédia: %d",qtd[i],nota[0],nota[1],nota[2],media);
			}
			if(media>=70){
				printf("\n\nAprovado");
			}
			else if(media<=69){
				printf("\n\nReprovado");
			}
		
	return 0;
}
