// HeapBinario.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include "HeapBinario.h"


int main()
{
	HeapBinario heap;
	inicializarHeap(heap);
	inserirElemento(heap, 150, "oi1");
	inserirElemento(heap, 140, "oi2");
	inserirElemento(heap, 130, "oi3");
	inserirElemento(heap, 50, "oi4");
	inserirElemento(heap, 40, "oi5");
	inserirElemento(heap, 1, "oi6");
    return 0;
}

