#include <iostream>
#include "deque.h"

using namespace std;

int main(){
	
	cout << "Valor lógico" << endl;
	cout << "true " << true << endl;
	cout << "false " << false << endl;
	cout << "=========" << endl;
	//Deque* deque = criarDeque();
	Deque* deque = criarDeque(5);
	printDeque(deque);
	testes(deque);
	cout << "Deque Vazio: " << dequeVazio(deque) << endl;
	cout << "Deque cheio: " << dequeCheio(deque) << endl;
	cout << "Insere 1 atras: " << pushBack(deque, 1) << endl;
	printDeque(deque);
	testes(deque);
	cout << "Insere 2 na frente: " << pushFront(deque, 2) << endl;
	printDeque(deque);
	testes(deque);
	cout << "Insere 3 atrás: " << pushBack(deque, 3) << endl;
	printDeque(deque);
	testes(deque);
	cout << "Insere 4 atras: " << pushBack(deque, 4) << endl;
	printDeque(deque);
	testes(deque);
	cout << "Insere 5 na frente: " << pushFront(deque, 5) << endl;
	printDeque(deque);
	testes(deque);
	cout << "Insere 6 na frente: " << pushFront(deque, 6) << endl;
	printDeque(deque);
	testes(deque);
	cout << "Insere 7 na frente: " << pushFront(deque, 7) << endl;
	printDeque(deque);
	testes(deque);
	cout << "Deque Vazio: " << dequeVazio(deque) << endl;
	cout << "Deque cheio: " << dequeCheio(deque) << endl;
	cout << "Remove frente: " << popFront(deque) << endl;

	testes(deque);
	printDeque(deque);
	cout << "Remove trás: " << popBack(deque) << endl;
	testes(deque);
	printDeque(deque);
}