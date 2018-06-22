#ifndef HEAPBINARIO_H
#define HEAPBINARIO_H
#define MAX 100
#include <string>

using namespace std;

struct Elemento
{
	int chave;
	string dado;
};


struct HeapBinario
{
	Elemento heap[MAX];
	int qtd;
};

void inicializarHeap(HeapBinario &h) {
	Elemento null;
	null.chave = NULL;
	null.dado = "nulo";
	for (int i = 0; i < MAX; i++)
	{
		h.heap[i] = null;
	}
	h.qtd = 0;
}

bool inserirElemento(HeapBinario &h, int chave, string dado) {
	if (h.qtd == MAX - 1)
	{
		return false;
	}
	h.heap[h.qtd + 1].chave = chave; h.heap[h.qtd + 1].dado = dado;
	if (h.qtd == 0)
	{
		h.qtd++;
		return true;
	}
	int pos = h.qtd + 1;
	int auxChave;
	string auxDado;
	while (h.heap[pos].chave < h.heap[pos / 2].chave)
	{
		if (pos == 0)
		{
			break;
		}
		auxChave = h.heap[pos].chave;
		auxDado = h.heap[pos].dado;
		h.heap[pos].chave = h.heap[pos / 2].chave;
		h.heap[pos].dado = h.heap[pos / 2].dado;
		h.heap[pos / 2].chave = auxChave;
		h.heap[pos / 2].dado = auxDado;

		pos = pos / 2;
	}
	h.qtd++;
	return true;
}


#endif
