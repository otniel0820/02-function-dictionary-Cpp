#include <iostream>
using namespace std;

int main(){
int numero=12;
int tunumero=0;
int contador=0;

while(tunumero!=numero){
cout<<"dime un número del 1 al 100. A ver si lo adivinas";
cin>>tunumero;
contador++;
}

    cout<<"has acertado"<<endl;
    cout<<"has necesitado "<<contador<<" intentos"<<endl;


}