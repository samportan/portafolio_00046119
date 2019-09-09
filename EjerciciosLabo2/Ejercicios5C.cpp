#include <iostream>
using namespace std;

void Moves(int, int, int, int);

int main()
{ 
int n;
cout<<"Ingrese la cantidad de discos a mover: ";
cin>>n;
Moves( n, 1, 2, 3);
cout<<endl;

return 0;
}

void Moves(int N, int Origen, int Intermedio, int Destino)
{ 

if(N>1)
{ 
Moves(N-1, Origen, Destino, Intermedio);

cout<<"Mueve el disco "<<N<<" de "<<Origen<<" a "<<Destino<<endl;
Moves(N-1, Intermedio, Origen, Destino);
} 

if(1==N)
cout<<"Mueve el disco 1 de "<<Origen<<" a "<<Destino<<endl;
} 