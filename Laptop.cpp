#include <iostream>

class Laptop{

private:
int m_ram;

public:

Laptop(int ram) : m_ram(ram){
    std::cout << "Laptop constructed" << std::endl;
}

int getRam(){
    return this->m_ram;
}

~Laptop(){
    std::cout << "Laptop destructed" << std::endl;
}

};