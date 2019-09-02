#include <iostream>
using namespace std;



int main()
{
   int i=0, j=0, a[10], suma=0;
   double prom=0; 
   cout<<"ingrese los numeros."<<endl;
   while(i<10){
       cout<<"ingresa numero: ";
       cin>>a[i];
       i++;
   }
   
   while(j<10){
       suma = suma + a[j];
       j++;   
   }
   cout<<"la suma es: "<<suma<<endl;
   prom= suma/10;
   cout<<"el promedio es: "<<prom<<endl;
    
    return 0;
}
