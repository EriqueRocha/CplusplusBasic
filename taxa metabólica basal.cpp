#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstring>
using namespace std;

	float peso, altura, tmb, idade;
	
	int genero;
	
	int calcMasc();
	int calcFem();
	
	int m = 1;
	int f = 2;

int main() {
	
	printf("===================================================================================\n");
	printf("\n");
	printf("A taxa de metabolismo basal (TMB) indica a quantidade\n");
	printf("de calorias que o corpo necessita para realizar funcoes metabolicas\n");
	printf("basicas. Este calculo nao inclui o numero de calorias queimadas em \n");
	printf("atividades fisicas.\n");
	printf("\n");
	printf("digite _ 1 _ se vc se enquandar no genero masculino ou _ 2 _ para feminino\n");
	scanf( "%d", &genero);
	if(genero == m){
		calcMasc();
	
	}else if(genero == f){
		calcFem();
		
	}else{printf("informe apenas masculino e femenino");
	}
}

int calcMasc(){
	
	printf("\n");
	printf("entre com seus dados\n");
	printf("informe seu peso (KG)\n");
	scanf( "%f", &peso);
	printf("informe sua altura (CM)\n");
	scanf( "%f", &altura);
	printf("informe sua idade (Anos)\n");
	scanf( "%f", &idade);
	
	tmb = 66 + ((13.8 * peso) + (5 * altura) - (6.8 * idade));
	printf("%f calorias diariamente",tmb);
}

int calcFem(){
	
	printf("\n");
	printf("entre com seus dados\n");
	printf("informe seu peso (KG)\n");
	scanf( "%f", &peso);
	printf("informe sua altura (CM)\n");
	scanf( "%f", &altura);
	printf("informe sua idade (Anos)\n");
	scanf( "%f", &idade);
	
	tmb = 655 + ((9.6 * peso) + (1.8 * altura) - (4.7 * idade));
	printf("%f calorias diariamente",tmb);
}
