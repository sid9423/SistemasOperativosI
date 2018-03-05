#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arreglo[5];
	printf("Este programa muestra la impresion de un arreglo\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("El arreglo en la posicion %i es %i\n",i,arreglo[i]);
	}
	return 0;
}