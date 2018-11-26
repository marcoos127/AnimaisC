#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]){
	/* Programa para identificar qual animal é entre os 12 propostos.
		Feito por: Marcos Vinicius;
	*/
	
	
	setlocale(LC_ALL,"Portuguese");
	int r1,r2,r3,r4,r5,r6,resp;
	
	do{
	system("CLS");
	printf ("\n----Projeto de lógica de Programação----");
	printf ("\nDigite [1] Para sim e [2] para não.\n");
	printf ("\nO animal é mamífero?\n ");
	scanf ("%d", &r1);
	printf ("\nO animal é Quadrúpede?\n ");
	scanf ("%d", &r2);
	printf ("\nO animal é Carnívoro?\n ");
	scanf ("%d", &r3);
	printf ("\nO animal é Herbívoro?\n ");
	scanf("%d", &r4);
	printf ("\nO animal é Voador?\n ");
	scanf ("%d", &r5);
	printf ("\nO animal é um Réptil?\n ");
	scanf ("%d", &r6);
	
	if(r1 == 1 && r2 == 1 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal é LEÃO!");
}
	else if(r1 == 1 && r2 == 1 && r3 == 2 && r4 == 1 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal é CAVALO!");
	}	
	else if(r1 == 1 && r2 == 2 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal é o HOMEM!");
	}	
	else if(r1 == 1 && r2 == 1 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal é MACACO!");
	}	
	else if(r1 == 1 && r2 == 2 && r3 == 2 && r4 == 2 && r5 == 1 && r6 == 2){
		system("CLS");
		printf ("O animal é MORCEGO!");
	}	
	else if(r1 == 1 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal é BALEIA!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal é AVESTRUZ!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 2){
		system("CLS");
		printf ("O animal é PINGUIM!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 2 && r4 == 1 && r5 == 1 && r6 == 2){
		system("CLS");
		printf ("O animal é PATO!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 1 && r6 == 2){
		system("CLS");
		printf ("O animal é ÁGUIA!");
	}	
	else if(r1 == 2 && r2 == 1 && r3 == 2 && r4 == 2 && r5 == 2 && r6 == 1){
		system("CLS");
		printf ("O animal é TARTARUGA!");
	}	
	else if(r1 == 2 && r2 == 1 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 1){
		system("CLS");
		printf ("O animal é CROCODILO!");
	}	
	else if(r1 == 2 && r2 == 2 && r3 == 1 && r4 == 2 && r5 == 2 && r6 == 1){
		system("CLS");
		printf ("O animal é COBRA!");
	}	
	
	else{
		system("CLS");
		printf("\nAnimal não encontrado!");
	}
	printf ("\nDeseja fazer novamente?\n1 Para sim e 2 para não\n");
	scanf("%d", &resp);
}while(resp==1);

return 0;
}
