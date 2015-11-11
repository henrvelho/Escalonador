//#include "fila.h"
#include <stdio.h>

void imprime(){
	printf("Okodkjoaskjdçsa");
}

Pilha* pilha_cria (void)
{
Pilha* p = (Pilha*) malloc(sizeof(Pilha));
p->prim = NULL;
return p;
}
