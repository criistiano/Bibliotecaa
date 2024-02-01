// Biblioteca.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include "general.h"
#include "Bookfunctions.h"



using namespace std;

struct _libro libro[MAXLIBRI];


int main()
{

	setlocale(LC_ALL, "italian");
	insertbook(&libro[0]);
	printbook(&libro[0]);
	return(0);
}

