#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	
		
	float b,h,calc;
	int op;
	
		printf("Insira a base :\n");
		scanf("%f",&b);		
		printf("Insira a altura:\n");
		scanf("%f",&h);
		
			
		printf("Opções de processamento:\n");
		printf("Insira 0 para calcular o perímetro:\n");
		printf("Insira 1 para calcular o área:\n");
		scanf("%d",&op);
		
		if((op == 0) || (op == 1)){
	
			
			
			if(op == 0){
				calc=2*(b+h);
				
				printf("Perímetro %f\n",calc);
				
			}
			if(op == 1){
				calc=b*h;
				printf("Área: %f\n",calc);}
			
			}else{
			
				printf("Operação Inválida: \n");
				
			}
		
			
		
		
		
		
	
			
			
		
	
	
	return 0;
}

