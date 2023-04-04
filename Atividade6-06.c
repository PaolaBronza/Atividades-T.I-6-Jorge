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
	int cod,nota[3],media;
	
//INÍCIO CÓDIGO
	printf("Insira o código do aluno.\nAluno1\t001\nAluno2\t002\nAluno3\t003\nAluno4\t004\nAluno5\t005\nInsira aqui: ");
	scanf("%d",&cod);
	srand(time(NULL));
	
	for(int i=0;i<3;i++){
		nota[i]=rand()% 70+30;
	}
	media=(nota[0]+nota[1]+nota[2])/3;
	printf("\nAluno: %d\n\nNota1: %d\nNota2: %d\nNota3: %d\n\nMédia: %d",cod,nota[0],nota[1],nota[2],media);
	
	if(media>=70){
		printf("\n\nAprovado");
	}
	else if(media<=69){
		printf("\n\nReprovado");
	}
	
	return 0;
}
