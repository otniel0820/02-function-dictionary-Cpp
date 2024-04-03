/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>


int suma(int a, int b){
    return a+b;
}

double calculoCirculo(double radio){
    const double PI=3.14159;
    //PI=2.2565;
    return PI*radio*radio;
}

void mostrarMensaje(){
     std::cout<<"Mensaje de prueba\n";
}

int main()
{
    std::cout<<"Hello World\n";
    int total=suma(5,6);
    double area=calculoCirculo(9.95);
    mostrarMensaje();
    std::cout<<"la suma es "<<total<<".\n";
    std::cout<<"la area del círculo es "<<area<<".\n";
    char opcion='a';
    std::string ciudad="madrid";
    std::cout<<"la letra es  "<<opcion<<".\n";
    std::cout<<"la ciudad  es  "<<ciudad<<".\n";
    int unidades[5];
    unidades[0]=2;
    unidades[1]=15;
    unidades[2]=25;
    unidades[3]=74;
    unidades[4]=36;
    unidades[5]=75;
    std::cout<<"el primer elemento es   "<<unidades[0]<<".\n";
    for(int i=0;i<=5;i++){
         std::cout<<"el  elemento es   "<<unidades[i]<<".\n";
    }
    return 0;
}



