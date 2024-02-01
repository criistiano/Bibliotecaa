//Bookfunctions
#include <iostream>
#include "general.h"

using namespace std;


void insertbook(struct _libro* p)
{

	cout << "Inserisci il nome del libro: " << endl;
	cin.getline(p->titolo, MAXTITLECHAR);
	cout << "Inserisci il nome dell'autore: " << endl;
	cin.getline(p->autore, MAXAUTHCHAR);
	cout << "Inserisci l'argomento del libro: " << endl;
	cin.getline(p->argomento, MAXARGCHAR);
	cout << "Inserisci il nr delle pagine: " << endl;
	cin >> p->nrpagine;
	cout << "Inserisci il prezzo : " << endl;
	cin >> p->prezzo;
	cout << endl << "Inserisci il codice : " << endl;
	cin >> p->codice;
	while (getchar() != '\n');
	//cout << endl << "Il libro è in prestito ? : " << endl;
	//cin >> p->prestato;
	//while (getchar() != '\n');
	cout << "Inserisci il nome del utente che ha il libro: " << endl;
	cin.getline(p->utentePrestito, MAXNAMECHAR);
}

void printbook(struct _libro* p)
{

	cout << "Il titolo del libro è: " << endl << p->titolo << endl;
	cout << "L'autore del libro è :" << p->autore << endl;
	cout << "L'argomento del libro è : " << p->argomento << endl;
	cout << "Il nr delle pagine è: " << p->nrpagine << endl;
	cout << "Il prezzo è: " << p->prezzo << endl;
	cout << "Il codice è: " << p->codice << endl;
	cout << "Il libro è in prestito : " << p->prestato << endl;
	cout << "L'utente che ha il libro è : " << p->utentePrestito << endl;
}