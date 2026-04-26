#include <iostream>
#include <string>

class Hello
{
private:
        std::string nome;

public:
        Hello(std::string nome)
        {
                this->nome = nome;
        }

        void sayHello()
        {
                std::cout << this->nome << " diz oi!" << std::endl;
        }
};

int main()
{
        Hello oi = Hello("Jurema");

        oi.sayHello();

        return 0;
}