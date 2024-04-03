#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Dime un número: ";
    cin>>numero;
    
    if(numero>0){
        cout<<"El número es positivo "<<endl;
    }
    else if(numero<0){
        cout<<"El número es negativo "<<endl;
    }
    else{
        cout<<"El número es cero "<<endl;
    }
    
    bool descuento=false;
    if(descuento){
         cout<<"Tengo descuento "<<endl;
    }
    else{
         cout<<"No tengo descuento "<<endl;
    }
    
    return 0;
}