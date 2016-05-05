#include <iostream>
#include "deque.h"
using namespace std;

Deque* criarDeque(){
	Deque* novoDeque = new Deque;
	novoDeque->tamanho = TAMANHO_PADRAO;
	novoDeque->inicio = -1;
	novoDeque->fim = -1;
	novoDeque->elementos = new int[TAMANHO_PADRAO];
	novoDeque->meio = TAMANHO_PADRAO/2;
	return novoDeque;
}

Deque* criarDeque(int tamanho){
	Deque* novoDeque = new Deque;
	novoDeque->tamanho = tamanho;
	novoDeque->inicio = -1;
	novoDeque->fim = -1;
	novoDeque->elementos = new int[tamanho];
	novoDeque->meio = tamanho/2;

	return novoDeque;
}
void printDeque(Deque* deque){
	for (int i = 0; i < deque->tamanho; i++){
		cout << "Deque [" << i << "]: " << deque->elementos[i] << endl;
	}
}
bool dequeVazio(Deque* deque){
	if (deque->inicio == -1){
		return true;
	}else{
		return false;
	}
}
bool dequeCheio(Deque* deque){
	if (deque->inicio == 0 && deque->fim == deque->tamanho-1){
		return true;
	}else{
		return false;
	}
}
bool pushFront(Deque* deque, int elemento){
	if (dequeCheio(deque)){
		return false;
	}else{
		if(dequeVazio(deque)){
			deque->inicio += 1;
			deque->fim += 1;
			deque->elementos[deque->inicio] = elemento;
			return true;
		}else{
			movimentar(deque);
			//deque->inicio -= 1;
			deque->elementos[deque->inicio] = elemento;
			return true;
		}
	}
}
bool pushBack(Deque* deque, int elemento){
	if (dequeCheio(deque) || (deque->fim == deque->tamanho-1)){
		return false;
	}else{
		if (dequeVazio(deque)){
			pushFront(deque, elemento);
			return true;
		}else{
			deque->fim += 1;
			deque->elementos[deque->fim] = elemento;
			return true;
		}
	}
}
void movimentar(Deque* deque){
	deque->fim += 1;
	for (int i = deque->fim; i >= deque->inicio; i--){
		deque->elementos[i] = deque->elementos[i-1];
	}
}
void testes(Deque* deque){
	cout << "---TESTES---" << endl;
	cout << "Deque inicio: " << deque->inicio << endl;
	cout << "Deque meio: " << deque->meio << endl;
	cout << "Deque fim: " << deque->fim << endl;	
	cout << "---FIM TESTES---" << endl;
}

bool popFront(Deque* deque){
	if (dequeVazio(deque)){
		return false;
	}else{
		movimentarFrente(deque);
		deque->fim--;
		if (deque->fim == -1){
			deque->inicio = -1;
		}
		return true;
	}
}
bool popBack(Deque* deque){
	if (dequeVazio(deque)){
		return false;
	}else{
		deque->elementos[deque->fim] = 0;
		deque->fim--;
		return true;
	}
}
void movimentarFrente(Deque* deque){
	for (int i = deque->inicio; i < deque->tamanho; i++){
		deque->elementos[i] = deque->elementos[i + 1];
	}
}