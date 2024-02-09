#include <iostream>
#include <stdio.h>

#include "general.h"

using namespace std;


void insertbook(struct _libro * p)
{
	int i = 0;
	while (p->esiste)
	{
		p++;
		if ((i++) == MAXLIBRI)
			cout << "Raggiunto il limite massimo dei libri." << endl;

	}
		
	if (i < MAXLIBRI)
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
		cout << "Inserisci il codice : " << endl;
		cin >> p->codice;
		cin.clear();
		//while (getchar() != '\n');
		cout << "Il libro è in prestito ? : " << endl;
		cin >> p->prestato;
		while (getchar() != '\n');
		cout << "Inserisci il nome del utente che ha il libro: " << endl;
		cin.getline(p->utentePrestito, MAXNAMECHAR);
		p->esiste = 1;
	}
	
}

void printbook(struct _libro * p)
{
	
	cout << "Il titolo del libro è: " << endl << p->titolo << endl;
	cout << "L'autore del libro è :" << p->autore << endl;
	cout << "L'argomento del libro è : " << p->argomento<<endl;
	cout << "Il nr delle pagine è: " << p->nrpagine <<endl;
	cout << "Il prezzo è: " << p->prezzo << endl;
	cout << "Il codice è: " << p->codice << endl;
	cout << "Il libro è in prestito : " << p->prestato<<endl;
	cout << "L'utente che ha il libro è : " << p->utentePrestito << endl;
}

int savebook(struct _libro* p)
{
	FILE* fp;

	if (fopen_s(&fp,"biblioteca.dat", "wb") != NULL)
	{
		cout << "Errore apertura file della biblioteca." << endl;
		return (-1);
	}
	
	while (p->esiste)
	{
		fwrite(p, sizeof(struct _libro), 1, fp);
		p++;
	}
		

	if (!fclose(fp))
	{
		cout << "File biblioteca creato correttamente." << endl;
		return(0);
	}

	else
	{
		cout << "Errore salvataggio file biblioteca." << endl;
		return(-2);
	}
		
	


}