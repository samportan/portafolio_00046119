#include <iostream>
using namespace std;

struct nodo {
	string nombre;
	string apellido;
	int edad;
	int carne;
	string email;
	nodo* sig;
};

class datos {
private:
	nodo* lista;
public:
	datos() {
		lista = NULL;
	}
	void llenar(string, string, int, int, string);
	void mostrar(void);
	void eliminar(string);
	void dato(string);
};

int main() {
	datos lista;
	string nombre;
	string apellido;
	int edad;
	int carne;
	string email;
	int opc;
	char resp;
	do {
		cout << "MENU" << endl;
		cout << "----------------------"<<endl;
		cout << "[1] Llenar lista" << endl;
		cout << "[2] Mostrar lista" << endl;
		cout << "[3] Eliminar de lista" << endl;
		cout << "[4] Cambiar datos" << endl;
		cout << "[5] SALIR" << endl;
		cout << "----------------------"<<endl;
		cin >> opc;
		cout << "----------------------" << endl;
		switch (opc) {
		case 1:
			do {
				cout << "Ingrese los siguientes campos:" << endl;
				cout << "\nNombre: ";
				cin >> nombre;
				cout << "Apellido: ";
				cin >> apellido;
				cout << "Edad: ";
				cin >> edad;
				cout << "Carnet: ";
				cin >> carne;
				cout << "Email: ";
				cin >> email;
				lista.llenar(nombre,apellido, edad, carne, email);
				cout << "----------------------" << endl;
				cout << "Desea agregar otra persona(s/n)? " << endl;
				cout << "----------------------" << endl;
				cin >> resp;
			} while (resp == 's');
			break;
		case 2:
			lista.mostrar();
			break;
		case 3:
			cout << "Ingrese el nombre: ";
			cin >> nombre;
			lista.eliminar(nombre);
			break;
		case 4:
			cout << "Ingrese el nombre: ";
			cin >> nombre;
			lista.dato(nombre);
			break;
		}

	} while (opc != 5);
	return 0;
}


void datos::llenar(string nombre,string apellido, int edad, int carne, string email) {
	nodo* nuevo = new nodo;
	nuevo->nombre = nombre;
	nuevo->apellido = apellido;
	nuevo->edad = edad;
	nuevo->carne = carne;
	nuevo->email = email;

	nuevo->sig = lista;
	lista = nuevo;
}

void datos::mostrar() {
	nodo* dato = new nodo;
	dato = lista;

	while (dato != NULL) {
		cout << endl << "Nombre: " << dato->nombre << endl;
		cout << "Apellido: " << dato->apellido << endl;
		cout << "Edad: " << dato->edad << endl;
		cout << "Carnet: " << dato->carne << endl;
		cout << "Email: " << dato->email << endl;
		dato = dato->sig;
	}
}

void datos::eliminar(string nombre) {
	nodo* aux = lista;
	nodo* ant = NULL;
	while ((aux != NULL && aux->nombre != nombre)) {
		ant = aux;
		aux = aux->sig;
	}

	if (aux == NULL) {
		cout << "Persona no encontrada..." << endl;
	}
	else if (ant == NULL) {
		lista = lista->sig;
		delete aux;
	}
	else {
		ant->sig = aux->sig;
		delete aux;
	}
}

void datos::dato(string nombre) {
	string nuevoDatos;
	string apellido;
	int edad;
	int carne;
	string email;
	nodo* dato = new nodo;
	dato = lista;
	while (dato->nombre != nombre) {
		dato = dato->sig;
	}
	cout << "Nuevo nombre: ";
	cin >> nuevoDatos;
	cout << "Nuevo apellido: ";
	cin >> apellido;
	cout << "Nueva Edad: ";
	cin >> edad;
	cout << "Nuevo Carnet: ";
	cin >> carne;
	cout << "Nuevo Email: ";
	cin >> email;
	dato->nombre = nuevoDatos;
	dato->apellido = apellido;
	dato->edad = edad;
	dato->carne = carne;
	dato->email = email;
}