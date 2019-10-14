#include <iostream>
#include <string>
using namespace std;

struct nodo {
	int num;
	nodo* sig;
};

class baseDiez {
private:
	nodo* lista;
public:
	baseDiez() {
		lista = NULL;
	}

	void llenar(int);
	void mostrar(void);
};

int main() {
	baseDiez lista;
	int numero;
	cout << "Ingrese el numero base diez: " << endl;
	cin >> numero;
	if (numero > 0) {
		while (numero > 0) {
			if (numero % 2 == 0) {
				lista.llenar(0);
			}
		    else {
		lista.llenar(1);
	}
	numero = (int)numero / 2;
	}	
}
	else if (numero == 0) {
		lista.llenar(0);
	}
	else {
		cout << "No se puede realizar la conversión";
	}

	lista.mostrar();

	}


void baseDiez::llenar(int num) {
	nodo* nuevo = new nodo;
	nuevo->num = num;

	nuevo->sig = lista;
	lista = nuevo;
}

void baseDiez::mostrar(void) {
	nodo* s = lista;

	cout << "El numero binario es:" << endl;
	while (s != NULL) {
		cout << s->num;
		s = s->sig;
	}
}