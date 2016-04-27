// organizacionComputadores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include "conio.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


using namespace std;

int matriz1[4][4];
int matriz2[4][4];

void llenarMatriz(int matriz[4][4]) {
	cout << "Ingrese los datos de la primera matriz" << endl;
	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++) {
			cin >> matriz[i][j];
		}
	}

	for (int i = 0; i<4; i++) {
		for (int j = 0; j<4; j++) {
			cout << matriz[i][j] << endl;
		}
	}
}

//Método de prueba
int suma(int a, int b) {
	int valor;

	//Ejcución con ensamblador
	_asm {
		mov eax, a
		add eax, b
		mov valor, eax
	}
	return valor;
}

float pSuma(float numA, float numB) {
	return 0.0;
}

float pResta(float numA, float numB) {
	return 0.0;
}
float pMultiplicacion(float numA, float numB) {
	return 0.0;
}
float pDivision(float numA, float numB) {
	return 0.0;
}



/**
int main(array < System::String ^> ^args)
{
Console::WriteLine("Inicio del programa");

int resultado = suma(3, 4);
Consoles::WriteLine(resultado);


return 0;
}*/

void mostrarMenu() {
	cout << "Menu" << endl;
	cout << "1. Ingresar valores a matriz 1" << endl;
	cout << "2. Ingresar valores a matriz 2" << endl;
	cout << "3. Sumar matrices" << endl;
	cout << "4. Restar matrices" << endl;
	cout << "5. Multiplicar matrices" << endl;
	cout << "6. Dividir matrices" << endl;
	cout << "7. Salir del programa" << endl;

}

void ejecutarOpciones(int opcion) {
	switch (opcion)
	{
		//AGREGAR VALORES A MATRIZ 1
	case 1:
		llenarMatriz(matriz1);
		break;
		//AGREGAR VALORES A MATRIZ 2
	case 2:
		llenarMatriz(matriz2);
		break;
		//SUMA DE MATRICES
	case 3:
		pSuma(0.0, 0.0);
		break;
		//RESTA DE MATRICES
	case 4:
		pResta(0.0, 0.0);
		break;
		//MULTIPLICACIÓN DE MATRICES
	case 5:
		pMultiplicacion(0.0, 0.0);
		break;
		//DIVISIÓN DE MATRICES
	case 6:
		pDivision(0.0, 0.0);
		break;
		//SELECCIÓN ERRONEA
	default:
		cout << "No haz seleccionado ninguna opción correcta" << endl;
		break;
	}
}

int main()
{
	int opcion;
	do {
		mostrarMenu();
		cin >> opcion;
		ejecutarOpciones(opcion);
	} while (opcion != 7);
	cout << "Sale del menu" << endl;

	cout << "PRUEBA DE SUMA EN " << endl;

	cout << suma << endl;

	system("PAUSE");
	return 0;
}


