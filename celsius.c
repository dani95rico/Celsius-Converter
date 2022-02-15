/*
 * celsius.c
 *
 *  Created on: 24/9/2014
 *      Author: daniricoesteban
 */


/**********************************************************
* Nombre:    celsius.c 	      	                           *
* Autor:     Programacion I                               *
* Fecha:     Septiembre de 2012                           *
* Algoritmo: Convertir grados fahrenheit a celsius y      *
*            avisar si se estÂ· por encima de un umbral    *
**********************************************************/

#include <stdio.h>

#define UMBRAL 50	/* Umbral de conversiÃ›n */

int main ( void )
{
	double fahrenheit;	/* Almacena los grados fahrenheit */
	double celsius;		/* Almacena los grados celsius */

	/* Inicializar   */

	printf("Teclee grados fahrenheit: ");
	/*fflush(stdout);*/

	scanf("%lf",&fahrenheit);
	/*fflush(stdin);*/

	/* Convertir datos   */

	/*celsius=(fahrenheit-32)*(5/9);*/
celsius=(fahrenheit-32)*(5/9.0);
	/* Presentar resultados  */

	printf("Conversion a celsius %lf\n",celsius);
	/*fflush(stdout);*/

	if(celsius>UMBRAL)
	{
		printf("Estamos por encima del umbral\n");
		/*fflush(stdout);*/
	}
		else

			if(celsius==UMBRAL)
			{
					printf("Estamos en el umbral\n");
					/*fflush(stdout);*/
			}
					else
					printf("Estamos por debajo del umbral\n");
					/*fflush(stdout);*/



	return 0;
	}
