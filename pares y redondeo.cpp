/******************************************************************************

Actividad
En un archivo llamado soluciones
creas una función para calcular la división
entre dos números:quiero dos decimales

creas otra función para mostrar true o false
si el número que le doy es par
si el resto de la división entre 2 es 0

archivo main
utiliza los dos métodos y muestra el 
resultado en pantalla

reto.
los números los introduces por consola

*******************************************************************************/
#include <iostream>

#include <iomanip>
//#include "soluciones"


float dividir(float a, float b){
    float solucion=a/b;
    return solucion;
}

bool esPar(int numero){
    
    if(numero%2==0){
        return true;
    }
    else{
        return false;
    }
   
    
}

int main(){
    std::cout<<"Calculos de funciones\n";
    float resultado=dividir(58,3);
    bool par=esPar(15);
      std::cout<<"el resultado de la división es "<<std::setprecision(3)<<resultado<<"\n";
       std::cout<<"el numero es par "<<par<<"fgggf\n";
    return 0;
}