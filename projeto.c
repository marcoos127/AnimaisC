#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	/* Programa para identificar qual animal � entre os 12 propostos.
		Feito por: Marcos Vinicius;
	*/
	
	
	setlocale(LC_ALL,"Portuguese");
	int r1,r2,r3,r4,r5,r6,resp;
	
	do{
	system("CLS");
	printf ("\n----Projeto de l�gica de Programa��o----");
	printf ("\nDigite [1] Para sim e [2] para n�o.\n");
	printf ("\nO animal � mam�fero?\n ");
	scanf ("%d", &r1);
	printf ("\nO animal � Quadr�pede?\n ");
	scanf ("%d", &r2);
	printf ("\nO animal � Carn�voro?\n ");
	scanf ("%d", &r3);
	printf ("\nO animal � Herb�voro?\n ");
	scanf("%d", &r4);
	printf ("\nO animal � Voador?\n ");
	scanf ("%d", &r5);
	printf ("\nO animal � um R�ptil?\n ");
	scanf ("%d", &r6);
	
	if(r1 == 1 && r2 == 1 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal � LE�O!");
}
	else if(r1 == 1 && r2 == 1 && r3 == 2 && r4 == 1 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal � CAVALO!");
	}	
	else if(r1 == 1 && r2 == 2 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal � o HOMEM!");
	}	
	else if(r1 == 1 && r2 == 1 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal � MACACO!");
	}	
	else if(r1 == 1 && r2 == 2 && r3 == 2 && r4 == 2 && r5 == 1 && r6 == 2){
		system("CLS");
		printf ("O animal � MORCEGO!");
	}	
	else if(r1 == 1 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal � BALEIA!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal � AVESTRUZ!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal � PINGUIM!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 2 && r4 == 1 && r5 == 1 && r6 == 2){
		system("CLS");
		printf ("O animal � PATO!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 1 && r6 == 2){
		system("CLS");
		printf ("O animal � �GUIA!");
	}	
	else if(r1 == 2 && r2 == 1 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 1){
		system("CLS");
		printf ("O animal � TARTARUGA!");
	}	
	else if(r1 == 2 && r2 == 1 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 1){
		system("CLS");
		printf ("O animal � CROCODILO!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 1){
		system("CLS");
		printf ("O animal � COBRA!");
	}	
	
	else{
		system("CLS");
		printf("\nAnimal n�o encontrado!");
	}
	printf ("\nDeseja fazer novamente?\n1 Para sim e 2 para n�o\n");
	scanf("%d", &resp);
}while(resp==1);

return 0;
}
