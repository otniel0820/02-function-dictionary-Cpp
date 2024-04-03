/******************************************************************************
Data Structures
dictionary : key value
guardar los días de la semana y la temperatura
mostrar la temperatura media - bucle- forEach


*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>

double calcularMedia(const std::vector<double>temperaturas ){
    double suma=0.0;
    for(double temperatura:temperaturas){
        suma+=temperatura;
    }
    return suma/temperaturas.size();
    
}

int main(){
    std::cout<<"temperatura media\n";
    std::vector<std::string> dias={"lunes","martes","miércoles","jueves","viernes","sábado","domingo"};
  //  std::vector<double> temperaturas={7.9,8.5,9.6,4.5,6.8,7.9,12.5};
  std::vector<double> temperaturas;
  for(const std::string dia:dias){
      double t;
      std::cout<<"dime la temperatura del día "<<dia<<"\n";
      std::cin>>t;
      temperaturas.push_back(t);
  }
  //temperaturas.forEach(dias);
    double promedio=calcularMedia(temperaturas);
    std::cout<<"La temperatura media es "<<promedio<<".\n";
    return 0;
}