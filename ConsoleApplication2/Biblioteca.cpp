// Biblioteca.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//

#include <iostream>
#include "general.h"
#include "Bookfunctions.h"



using namespace std;

struct _libro libro[MAXLIBRI];

int libri_presenti = 2;

int main()
{
	struct _libro* pl;
	int i;
	setlocale(LC_ALL, "italian");
	for (i = 0,pl=libro; i < libri_presenti;i++,pl++)
	{
		insertbook(pl);
	}
	for (i = 0,pl=libro; i < libri_presenti; i++, pl++)
	{
		printbook(pl);
	}
	return(0);
}

