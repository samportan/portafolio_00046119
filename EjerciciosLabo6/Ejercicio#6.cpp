#include <iostream>
using namespace std;

struct nodo {
int dato;
nodo* sig;
};

struct arbol {
int dato;
arbol* hijoIzq;
arbol* hijoDer;
};

nodo* pInicio = NULL;
arbol* pArbol = NULL;

void eliminarlista(void);
void insertarInicioLista(int);
void mostrarLista(void);
void mostrarLista(nodo*);
void mostrarIn(void);
void mostrarIn(arbol*);
void insNodo(int);
void insNodo(arbol**, int);


void eliminarlista(void)
{
    nodo *s = pInicio;

    while(pInicio != NULL){
        s = pInicio;
        pInicio = pInicio->sig;
        delete(s);
    }
}

void insNodo(int dato) {
insNodo(&pArbol, dato);
}

void insNodo(arbol** p, int dato)
{
if (!(*p)) {
*p = new arbol;
(*p)->dato = dato;
(*p)->hijoIzq = (*p)->hijoDer = NULL;
}
else
if (dato < (*p)->dato) {
insNodo(&((*p)->hijoIzq), dato);
}
else
if (dato > (*p)->dato) {
insNodo(&((*p)->hijoDer), dato);
}
else
cout << "El nodo ya existe\n";
}

void mostrarIn(void)
{
cout << "Vamos a mostrarIn" << endl;
mostrarIn(pArbol);
}

void mostrarIn(arbol* p)
{

if (p != NULL) {
mostrarIn(p->hijoIzq);
cout << p->dato<<" " ;
mostrarIn(p->hijoDer);
}
}

void insertarInicioLista(int dato) {
nodo* nuevo;

nuevo = new nodo;
nuevo->dato = dato;
nuevo->sig = pInicio;
pInicio = nuevo;
}

void mostrarLista(void){
    mostrarLista(pInicio);
}

void mostrarLista(nodo* s) {
cout << "Los elementos de la lista son:" << endl;
while (s != NULL) {
cout << s->dato << " ";
int d =  s->dato;
insNodo(d);
s = s->sig;
}
}

int main() {

char resp;
int dato;

cout << "Desea meter un dato (s/n)?";
cin >> resp;
while (resp == 's') {
cout << "Digite el dato: ";
cin >> dato;
insertarInicioLista(dato);
cout << "Desea meter un dato (s/n)?";
cin >> resp;
}

mostrarLista();
cout<<endl;
cout << "Copiando datos en el arbol..." << endl;

cout << "\nMostrar in-orden (ascendente):" << endl;
mostrarIn();
cout<<endl;
eliminarlista();
cout<<"La lista ha sido borrada!!"<<endl;


return 0;
}