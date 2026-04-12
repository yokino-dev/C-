#include <iostream>

int main(){
    
    int age = 0;
    double const price = 20.0; // Const significa valor, constante, que não pode ser alterado, trazendo segurança ao codigo
    std::cout << "Insira sua idade: ";
    std::cin >> age;

    std::cout << "Vocẽ tem" << age << '\n' << "anos" << '\n';
    
    if (age <= 10){
        std::cout << "Vocẽ não precisa pagar a entrada";
    
    } else if (age > 50) {
        std::cout << "Você pagará metdade do valor, ficando" << price/2 << "!\n";
    }
    else {
        std::cout << "Você pagará:" << price << " Reais \n";
    }

    return 0;

}


