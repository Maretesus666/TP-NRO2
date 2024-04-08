#include <stdio.h>

main()
{
	int i,numeros,par,nopar;
	do
	{
	printf("ingrese valor, ingrese (0) para terminar de ingresar numeros: ");
	scanf("%d",&i);
	
	if (i!=0)
	{
		if ( (i % 2) != 0)
		{
			printf ("no es par\n");
			nopar++;
		}
		else if ( (i % 2) == 0 )
		{
			printf ("es par\n");
			par++;
		}
	}
	numeros++;
	} while (i!=0);
	
	printf ("la cantidad de numeros que pasaron fue de %d \nla cantidad de numeros par fue de %d y la cantidad de numeros no par %d\n",numeros-1,par-1,nopar);
}

