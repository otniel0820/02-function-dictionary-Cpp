#include<iostream>
#include "soluciones"



int main(){
float num1, num2;
    std::cout << "Introduce el primer número: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    
    float result = division(num1, num2);
    std::cout << "La división de " << num1 << " entre " << num2 << " es: " << result << std::endl;

    int num;
    std::cout << "Introduce un número para comprobar si es par: ";
    std::cin >> num;

    
    if (validation(num) == 0) {
        std::cout << "El número " << num << " es par." << std::endl;
    } else {
        std::cout << "El número " << num << " es impar." << std::endl;
    }

    return 0;
}