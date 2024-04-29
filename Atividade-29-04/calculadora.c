#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main (){
	
int nu1, nu2, resul;
int op;
op =1;

while (op>0){  

	printf("escolha uma das opcoes abaixo para calcular");
	printf(" \n(1) soma");
	printf(" \n(2) subtracao");
	printf(" \n(3) multiplicacao");
	printf(" \n(4) divisao");
	printf ("\n(5) desligar calculadora\n");
	scanf("%d",&op);

	switch (op){
		case 1 :
			printf("digite um valor\n");
			scanf("%d",&nu1);
			printf("digite outro valor\n" );
			scanf("%d",&nu2);
			resul=nu1+nu2;
			printf("a soma dos números %d e %d e igual a:%d \n",nu1 ,nu2 ,resul);
			break;
		case 2 :
			printf("digite um valor\n");
			scanf("%d",&nu1 );
			printf("digite outro valor\n");
			scanf("%d",&nu2);
			resul=nu1-nu2;
			printf("a subtracao dos números %d e %d e igual a: %d \n",nu1 ,nu2, resul);
		break;
		case 3 :
			printf("digite um valor\n");
			scanf("%d",&nu1 );
			printf("digite outro valor\n");
			scanf("%d",&nu2);
			resul=nu1*nu2;
			printf("a  multiplicacao dos números %d e %d e igual a:%d\n ",nu1 ,nu2 , resul);
		break;
		case 4 :
			printf("digite um valor\n");
			scanf("%d", &nu1 );
			printf("digite outro valor\n");
			scanf("%d", &nu2);
			
			while(nu1==0){
				printf("Erro!! Valor 0 é impossível de se dividir /n");
				printf("digite novamente " );
			}
			resul=nu1/nu2;
			printf("a  divisão dos números %d e %d e igual a:%d  \n",nu1 ,nu2 ,resul);
		break;
		case 5 :
			printf("desligando.....");
			op=0;
		break;
		default:
			printf("Erro!! Número inválido, digite novamente\n");
    	}
	}	
}
