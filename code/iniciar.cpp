
#include "stdafx.h"
#include "conio.h"

using namespace System;

//Método de prueba
float suma(int a, int b){
	float valor;

	//Ejecución con ensamblador
	_asm{
		mov eax, a
		add eax, b
		mov valor, eax
	}
	return valor;
}


/**
*** Método que suma 2 matrices
**/
float add(){

}

/**
*** Método que resta 2 matrices
**/
float sub(){

}

/**
*** Método que multiplica 2 matrices
**/
float mult(){

}

/**
*** Método que divide 2 matrices
**/
float div(){

}

/**
*** Método principal, ejecución del programa
**/
int main(array < System::String ^> ^args){
	Console::WriteLine("Inicio del programa");

	int resultado = suma(3, 4);
	Console::WriteLine(suma);


	return 0;
}
