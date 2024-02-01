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
	//cout << endl << "Il libro � in prestito ? : " << endl;
	//cin >> p->prestato;
	//while (getchar() != '\n');
	cout << "Inserisci il nome del utente che ha il libro: " << endl;
	cin.getline(p->utentePrestito, MAXNAMECHAR);
}

void printbook(struct _libro* p)
{

	cout << "Il titolo del libro �: " << endl << p->titolo << endl;
	cout << "L'autore del libro � :" << p->autore << endl;
	cout << "L'argomento del libro � : " << p->argomento << endl;
	cout << "Il nr delle pagine �: " << p->nrpagine << endl;
	cout << "Il prezzo �: " << p->prezzo << endl;
	cout << "Il codice �: " << p->codice << endl;
	cout << "Il libro � in prestito : " << p->prestato << endl;
	cout << "L'utente che ha il libro � : " << p->utentePrestito << endl;
}