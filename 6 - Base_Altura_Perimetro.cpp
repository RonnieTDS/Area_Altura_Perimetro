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
		
			
		printf("Op��es de processamento:\n");
		printf("Insira 0 para calcular o per�metro:\n");
		printf("Insira 1 para calcular o �rea:\n");
		scanf("%d",&op);
		
		if((op == 0) || (op == 1)){
	
			
			
			if(op == 0){
				calc=2*(b+h);
				
				printf("Per�metro %f\n",calc);
				
			}
			if(op == 1){
				calc=b*h;
				printf("�rea: %f\n",calc);}
			
			}else{
			
				printf("Opera��o Inv�lida: \n");
				
			}
		
			
		
		
		
		
	
			
			
		
	
	
	return 0;
}

