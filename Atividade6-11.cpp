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
	int qtd;
	int num[qtd], media, maior=0, menor;
	
//INÍCIO CÓDIGO		
	printf("Insira a quantidade de alunos: ");
	scanf("%d", &qtd);
	printf("\n");		
			
	for(int i=0;i<qtd;i++){
		printf("insira a nota do aluno: ");
		scanf("%d", &num[i]);	
		media+=num[i];
		}
			
		media=media/qtd;
			
		printf("\nA média de notas é: %d", media);
		//Maior nota
			
		for(int i=0;i<qtd;i++){
			if(num[i] > maior){
			maior=num[i];
			}	
		}
		printf("\nA maior nota é: %d", maior);
		//Menor nota
		menor = maior;
			
		for(int i=0;i<qtd;i++){
			if(num[i] < menor){
				menor=num[i];
			}	
		}
		printf("\nA menor nota é:%d", menor);
		
		return 0;
		
}
