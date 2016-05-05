#define TAMANHO_PADRAO 5


typedef struct{
	int inicio;
	int fim;
	int meio;
	int tamanho;
	int *elementos;
}Deque;

Deque* criarDeque();
Deque* criarDeque(int tamanho);
bool pushBack(Deque* deque, int elemento);
bool pushFront(Deque* deque, int elemento);
bool popBack(Deque* deque);
bool popFront(Deque* deque);
void printDeque(Deque* deque);

bool dequeVazio(Deque* deque);
bool dequeCheio(Deque* deque);

void testes(Deque* deque);
void movimentar(Deque* deque);
void movimentarFrente(Deque* deque);