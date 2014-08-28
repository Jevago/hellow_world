#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main( int argc, char **argv ) 
{
	/**
	 *	\brief FUNCION PRINCIPAL DEL PROGRAMA.
	 *
	 *	LA FUNCION VERIFICA QUE EL NUMERO TOTAL DE PARAMETROS SEA IGUAL A 1, SINO COMPLE CON ESTA CONDICIÓN
	 *	LA FUNCION MUESTRA UN MENSAJE DE ERROR Y TERMINA CON UN CÓDIGO DE ERROR.
	 *
	 */

	if( argc != 1 ){
		printf("El programa no debe llevar argumentos\n");
		return 1;
	}

	printf("<<<<<<<<<<<<<<<<<<<< PROGRAMA TERMINADO >>>>>>>>>>>>>>>>>>>>\n");
	return 0;
}
