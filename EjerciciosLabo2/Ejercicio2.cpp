#include <iostream>
#include <stdlib.h>
using namespace std;

float raiz(int, int);

int main()
{
    int n;
    float r2;
    cout<<"Digite el numero: ";
    cin>>n;
    if(n>0){
    r2=raiz(n,1);
    }
    else{
        return 0;
    }
    cout<<"La raiz cuadrada de "<<n<<" es: "<<r2;
    
    return 0;
}

float raiz(int n, int r)
{
    float a, b;
    if(n==1){
        return 1;
    }
    else{
        a=((n/r)+r)/2;
        b=((n/a)+a)/2;
        
        while((a-b)>0.0001){
            a=((n/b)+b)/2;
            b=((n/a)+a)/2;
        }
        
        return b;
    }
}