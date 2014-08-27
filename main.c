#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv ) 
{
	if( argc != 1 ){
		printf("El programa no debe llevar argumentos\n");
		return 1;
	}

	printf("<<<<<<<<<<<<<<<<<<<< PROGRAMA TERMINADO >>>>>>>>>>>>>>>>>>>>\n");
	return 0;
}
