#include <iostream>
using namespace std;

struct nodo {
	int dato;
	nodo* ant;
	nodo* sig;


	nodo* crear(nodo* s, int dato) {
		nodo* nuevo = new nodo;
		nuevo->dato = dato;
		nuevo->ant = NULL;
		nuevo->sig = NULL;
		s = nuevo;
		return s;
	}
	nodo* insertar(nodo* s, int dato) {
		nodo* nuevo = new nodo;
		nuevo->dato = dato;
		nuevo->ant = NULL;
		nuevo->sig = s;
		s->ant = nuevo;
		s = nuevo;
		return s;
	}

	void mostrar(nodo* s) {
		nodo* aux = s;
		while (aux != NULL) {
			cout << aux->dato << " ";
			aux = aux->sig;
		}
		cout << endl;
	}
	void mostrarInverso(nodo* s) {
		nodo* aux = s;
		while (aux->sig != NULL) {
			aux = aux->sig;
		}
		while (aux != NULL) {
			cout << aux->dato << " ";
			aux = aux->ant;
		}
	}
};

int main(void){

	nodo *s = NULL;
	nodo *p=0;
	s = p->crear(s, 4);
	s = p->insertar(s, 3);
	s = p->insertar(s, 2);
	s = p->insertar(s, 1);
	cout << "datos de la lista" << endl;
	p->mostrar(s);
	cout << "datos de la lista inversos" << endl;
	p->mostrarInverso(s);


	return 0;
}
