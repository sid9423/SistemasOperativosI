#include <stdio.h>
int main()
{
	int x=0;
	int numero1=0, numero2=0, resultado=0;
	printf("Selecciona la opcion que deseas realizar: \n 1. Suma\n 2. Resta\n 3. Multiplicacion \n 4. Division \n");
	scanf("%d", &x);
	switch (x)
	{
		case 1: 
		printf("Introduce el primer numero a sumar: \n");
		scanf("%d", &numero1);
		printf("Introduce el segundo numero a sumar: \n");
		scanf("%d", &numero2);
		resultado=numero1+numero2;
		printf("La suma de los numeros es: \n%i",resultado);
		break;
		case 2: 
		printf("Introduce el primer numero a restar: \n");
		scanf("%d", &numero1);
		printf("Introduce el segundo numero a restar: \n");
		scanf("%d", &numero2);
		resultado=numero1-numero2;
		printf("La resta de los numeros es: \n%i",resultado);
		break;
		case 3: 
		printf("Introduce el primer numero a multiplicar: \n");
		scanf("%d", &numero1);
		printf("Introduce el segundo numero a multiplicar: \n");
		scanf("%d", &numero2);
		resultado=numero1*numero2;
		printf("La multiplicacion de los numeros es: \n%i",resultado);
		break;
		case 4: 
		printf("Introduce el primer numero a dividir: \n");
		scanf("%d", &numero1);
		printf("Introduce el segundo numero a dividir: \n");
		scanf("%d", &numero2);
		if(numero2==0)
		printf("Error de Sintaxis");
		else
			resultado=numero1/numero2;
			printf("La division de los numeros es: \n%i",resultado);
		break;
		default: printf("Error. Selecciona una opcion valida");
	}
	return 0;
}