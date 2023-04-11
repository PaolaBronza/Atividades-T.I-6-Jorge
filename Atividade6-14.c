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
	int qtd_num, conta; 
//INÍCIO CÓDIGO
    printf("Insira a quantidade de números");
    scanf("%d", &qtd_num);

    int num[qtd_num];
    int repet[qtd_num];
    int repet1[qtd_num];
    
    for (int i = 0; i < qtd_num; i++){
    	conta=i+1;
    	printf("Digite o %dºNúmero: ", conta);
        scanf("%d", &num[i]);  
    }

    for(int i=0;i<qtd_num;i++){
    	repet[i] = 0;
    	repet1[i] = 0;
		for(int i1=0;i1<qtd_num/2;i1++){
			if(num[i]==num[i1] && i!=i1){
				repet[i] = 1;
				repet1[i1] = 0;
			}		
		}
	}
	
    for(int i=0;i<qtd_num;i++){
		if(repet[i]==0){
			printf("%d ", num[i]);
		
		}
	}
	
	for(int i=0;i<qtd_num;i++){
		if(repet[i]==1){
			printf("%d\n", num[i]);
		}
		printf("\n%d", repet);
	} 
	   
    return 0;
}
