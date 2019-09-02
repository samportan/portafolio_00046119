#include <iostream>
#include <conio.h>
using namespace std;

struct comp
{
  float real, imag;
} z1, z2;

comp suma (comp, comp);
void mostrar(comp);

int main()
{
  cout << "Digite el primer numero complejo." << endl;
  cout << "Parte real: ";
  cin >> z1.real;
  cout << "Parte imaginaria: ";
  cin >> z1.imag;

  cout << "Digite el segundo numero complejo." << endl;
  cout << "Parte real: ";
  cin >> z2.real;
  cout << "Parte imaginaria: ";
  cin >> z2.imag;

  comp x = suma(z1, z2);
  mostrar(x);
  return 0;
}

comp suma (comp z1, comp z2)
{
  z1.real += z2.real;
  z1.imag += z2.imag;

  return z1;

}

void mostrar(comp zt)
{
cout<<"El resultado es: "<<zt.real<<" "<<zt.imag<<endl;    
}
