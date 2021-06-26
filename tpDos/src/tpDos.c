/*
 ============================================================================
 Name        : tpDos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Empleado.h"
#include "utn.h"


#define CANT_EMPLEADOS 1000

int main(void) {
	setbuf(stdout,NULL);
	int opcionMenu;
	Empleado auxiliar[CANT_EMPLEADOS];
	//int indiceAux;

//MENU
	if(get_int(&opcionMenu, 2,"-MENU DE OPCIONES-\nIngrese una opcion:"
													"1)ALTA DE EMPLEADO\n"
													"2)MODIFICACION DE EMPLEADO\n"
													"3)BAJA DE EMPLEADO\n"
													"4)INFORMAR\n"
													"5)SALIR\n","Opcion Invalida.\n",1,5,2,0))
	{
		do{

			switch(opcionMenu)
			{
			case 1:
				break;
		//	case 2:
		//		break;
			case 3:
				//emp_bajaDeEmpleado(auxiliar,CANT_EMPLEADOS, indiceAux);
				break;
			case 4:
				break;




			}

		}while(opcionMenu != 5);
	printf("GRACIAS, VUELVA PRONTO.");
	}
	return EXIT_SUCCESS;
}
