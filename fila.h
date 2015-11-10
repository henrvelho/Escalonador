//#include "fila.c"
//#include "fila.c"
#include <stdio.h>

void imprime();

struct lista2 {
	float info; 
	struct lista2* ant; 
	struct lista2* prox; 
}; typedef struct lista2 Lista2;

/* estrutura da fila */ 
struct fila2 {
	Lista2* ini; 
	Lista2* fim; 
}; typedef struct fila2 Fila2;



