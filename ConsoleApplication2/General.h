//General
#pragma once

#define MAXTITLECHAR			150
#define MAXAUTHCHAR				60
#define	MAXARGCHAR				30
#define MAXNAMECHAR				60
#define	MAXLIBRI				1000


struct _libro
{
	char titolo[MAXTITLECHAR];
	char autore[MAXAUTHCHAR];
	char argomento[MAXARGCHAR];
	int  nrpagine;
	double prezzo;
	int codice;
	bool prestato;
	char utentePrestito[MAXNAMECHAR];
};
