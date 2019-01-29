//Teoria de numeros, programa que sirve para calcular el n-�simo termino de fibonacci usando la constante de la razon aurea
//FI, que es igual a: 1+raiz cuadrada de 5 entre 2
#include <iostream>
#include <cmath>
//valor de la constante Fi
#define FI ((1+sqrt(5))/2)

using namespace std;

int main (int argc, char *argv []) {
int n, fn;
cout<<"Ingrese la poscicion del termino fibonacci a calcular: ";
cin>>n;

double aux=(-1/FI);//-fi inverso
fn=(1/sqrt(5))*((pow(FI, n))-(pow(aux, n)));//1/raiz de 5*fi^n-fi inv^n

cout<<"\nEl termino "<<n<<" de fibonacci es: "<<fn<<"\n";


system ("pause");
return 0;
}

