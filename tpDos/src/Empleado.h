/*
 * Empleado.h
 *
 *  Created on: May 13, 2021
 *      Author: Stefano
 */

#ifndef EMPLEADO_H_
#define EMPLEADO_H_

#define LEN_NOMBRE 15
#define LEN_APELLIDO 15

typedef struct{
		int id;
		char nombre[LEN_NOMBRE];
		char apellido[LEN_NOMBRE];
		float salario;
		int sector;
		int isEmpty;
}Empleado;

Empleado* emp_new(void);
Empleado* emp_newParam(float salario,int sector,char* nombre,char* apellido,int id);
int emp_delete(Empleado* this);

int emp_setIdEmpleado(Empleado* this,int id);
int emp_getIdEmpleado(Empleado* this,int* flagError);
int isValidId(int id);

int emp_setNombre(Empleado* this,char* nombre);
char* emp_getNombre(Empleado* this,int* flagError);
int isValidNombre(char* nombre);

int emp_setApellido(Empleado* this,char* apellido);
char* emp_getApellido(Empleado* this,int* flagError);
int isValidApellido(char* apellido);

int emp_getSalario(Empleado* this,int* flagError);
int emp_getSalario(Empleado* this,int* flagError);
int isValidSalario(float salario);

int emp_setSector(Empleado* this,int sector);
int emp_getSector(Empleado* this,int* flagError);
int isValidSector(int sector);

int emp_inicializarArray(Empleado* array,int limiteArray);
int emp_agregarEmpleado(Empleado* array,int limiteArray,char* nombre,char* apellido,float salario,int id,int sector);
int emp_encontrarEmpleadoById(Empleado* array, int limiteArray,int id);
int emp_bajaDeEmpleado(Empleado* array,int limiteArray,int indice);



#endif /* EMPLEADO_H_ */
