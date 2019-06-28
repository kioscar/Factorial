//Factorial of 2 numbers using functions

#include <stdio.h>

int factorial();
void Mensaje();

int main(){
	int n,m,fact1,fact2;
	int factorial();
	
	printf("\t\tPrograma que calcula el factorial de dos números.");
	
	printf("Dame el primer numero: ");
	scanf("%i",&n);
	
	printf("Dame el segundo numero: ");
	scanf("%i",&m);
	
	fact1= factorial(n);
	fact2=factorial(m);
	system("cls");
	printf("El factorial de %i es: %i\n\n", n, fact1);
	printf("El factorial de %i es: %i\n\n", m, fact2);
	
	system("pause");
	system("cls");
	
	Mensaje();
	system("pause");
	return 0;
}

int factorial(int num){
	
	int i, fact;
	fact =1;
	for(i=1;i<=num;i++){
		
		fact= fact* i;
	}
	
	return fact;
}

void Mensaje(){
	printf("Este programa se termina\n\n");
}
