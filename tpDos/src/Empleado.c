/*
 * Empleado.c
 *
 *  Created on: May 13, 2021
 *      Author: Stefano
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Empleado.h"



int emp_setNombre(Empleado* this,char* nombre)
{
	int retorno=-1;
	if(this != NULL && nombre != NULL && isValidNombre(nombre))
	{
		strcpy(this->nombre,nombre);
		retorno=0;
	}
	return retorno;
}
char* emp_getNombre(Empleado* this,int* flagError)
{
	*flagError=-1;
	char* aux=NULL;
		if(this != NULL && flagError != NULL)
		{
			aux=this->nombre;
			*flagError=0;
		}
		return aux;
}
int isValidNombre(char* nombre)
{
	int i=0;
	int retorno = -1;
	if(nombre != NULL)
	{
		retorno = 1;
		while(nombre[i] != 0) // busco el final
		{
			if(!((nombre[i]>='a' && nombre[i]<='z') || (nombre[i]>='A' && nombre[i]<='Z') || nombre[i]==' '))
			{
				retorno = 0;
				break;
			}
			i++;
		}
	}
	return retorno;
}

//------------------------------------------------------

int emp_setApellido(Empleado* this,char* apellido)
{
	int retorno=-1;
	if(this != NULL && apellido != NULL && isValidApellido(apellido))
	{
		strcpy(this->apellido,apellido);
		retorno=0;
	}
	return retorno;
}
char* emp_getApellido(Empleado* this,int* flagError)
{
	*flagError=-1;
	char* aux=NULL;
		if(this != NULL && flagError != NULL)
		{
			aux=this->apellido;
			*flagError=0;
		}
		return aux;
}
int isValidApellido(char* apellido)
{
	int i=0;
	int retorno = -1;
	if(apellido != NULL)
	{
		retorno = 1;
		while(apellido[i] != 0) // busco el final
		{
			if(!((apellido[i]>='a' && apellido[i]<='z') || (apellido[i]>='A' && apellido[i]<='Z') || apellido[i]==' '))
			{
				retorno = 0;
				break;
			}
			i++;
		}
	}
	return retorno;
}
///*************************************************************
int emp_inicializarArray(Empleado* array,int limiteArray)
{
	int retorno=-1;

	if(array != NULL && limiteArray > 0)
	{
		array->isEmpty=1;
	}
	return retorno;
}
int cli_getIndexById(Empleado* array, int limiteEmpleado, int id)
{
	int retorno = -2;
	int i;
	if(array != NULL && limiteEmpleado > 0 && id> 0)
	{
		retorno = -1;
		for(i=0;i<limiteEmpleado;i++)
		{
			if(array[i].id == id)
			{
				retorno = i;
				break;
			}
		}
	}
	return retorno;
}
///*************************************************************
int emp_setIdEmpleado(Empleado* this,int id)
{
	int retorno=-1;
	if(this != NULL && isValidId(id))
	{
		this->id=id;
		retorno=0;
	}
	return retorno;
}
int emp_getIdEmpleado(Empleado* this,int* flagError)
{
	*flagError=-1;
	int auxId=-1;
		if(this != NULL && flagError != NULL)
		{
			this->id=auxId;
			*flagError=0;
		}
		return auxId;
}
int isValidId(int id)
{
	return 1;
}
///*************************************************************
int emp_setSector(Empleado* this,int sector)
{
	int retorno=-1;
	if(this != NULL && isValidSector(sector))
	{
		this->sector=sector;
		retorno=0;
	}
	return retorno;
}
int emp_getSector(Empleado* this,int* flagError)
{
	*flagError=-1;
	int auxSector=-1;
		if(this != NULL && flagError != NULL)
		{
			this->sector=auxSector;
			*flagError=0;
		}
		return auxSector;
}
int isValidSector(int sector)
{
	return 1;
}
///*************************************************************
int emp_setSalario(Empleado* this,float salario)
{
	int retorno=-1;
	if(this != NULL && isValidSalario(salario))
	{
		this->salario=salario;
		retorno=0;
	}
	return retorno;
}
int emp_getSalario(Empleado* this,int* flagError)
{
	*flagError=-1;
	float auxSalario=-1;
		if(this != NULL && flagError != NULL)
		{
			this->sector=auxSalario;
			*flagError=0;
		}
		return auxSalario;
}
int isValidSalario(float salario)
{
	return 1;
}



Empleado* emp_new(void)
{
	return (Empleado*) malloc(sizeof(Empleado));
}
Empleado* emp_newParam(float salario,int sector,char* nombre,char* apellido,int id)
{
	Empleado* auxEmpleado=emp_new();
	if(nombre != NULL && apellido != NULL && id > -1 && salario > 0 && sector > 1)
	{
		if(emp_setNombre(auxEmpleado, nombre) ||
			emp_setApellido(auxEmpleado,apellido) ||
			emp_setSalario(auxEmpleado, salario) ||
			emp_setIdEmpleado(auxEmpleado, id) ||
			emp_setSector(auxEmpleado,sector))
		{
			emp_delete(auxEmpleado);
			auxEmpleado = NULL;
		}
	}
	return auxEmpleado;
}
int emp_delete(Empleado* this)
{
	int retorno=-1;
	if(this != NULL)
	{
		free(this);
		retorno=0;
	}
	return retorno;
}
