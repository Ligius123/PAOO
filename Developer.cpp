#include <iostream>
#include "Laptop.cpp"

class Developer{

private:

std::string m_name;
int m_age;
Laptop *m_laptop;

public:

Developer(std::string name, int age, Laptop &laptop) : m_name(name),
m_age(age),
m_laptop(new Laptop(laptop)){
    std::cout << "Developer constructed" << std::endl;
}

Developer& operator = (const Developer& rhDeveloper){
    std::string self = " ";
    if(this == &rhDeveloper){
       self = "self-";
    }
 
     std::cout << self << "Copy asignment operator called" << std::endl;
     m_name = rhDeveloper.m_name;
     m_age = rhDeveloper.m_age;
     m_laptop = rhDeveloper.m_laptop;
     Laptop *pOrig = m_laptop;
     m_laptop = new Laptop(*rhDeveloper.m_laptop);
     delete pOrig;
     return *this;
}

void print(){
    std::cout << "My name is " << m_name << " I'm " << m_age << " years old and y laptop has" << m_laptop->getRam() << " ram" << std::endl;
}

};#include <iostream>
#include "Laptop.cpp"

class Developer{

private:

std::string m_name;
int m_age;
Laptop *m_laptop;

public:

Developer(std::string name, int age, Laptop &laptop) : m_name(name),
m_age(age),
m_laptop(new Laptop(laptop)){
    std::cout << "Developer constructed" << std::endl;
}

Developer& operator = (const Developer& rhDeveloper){
    std::string self = " ";
    if(this == &rhDeveloper){
       self = "self-";
    }
 
     std::cout << self << "Copy asignment operator called" << std::endl;
     m_name = rhDeveloper.m_name;
     m_age = rhDeveloper.m_age;
     m_laptop = rhDeveloper.m_laptop;
     Laptop *pOrig = m_laptop;
     m_laptop = new Laptop(*rhDeveloper.m_laptop);
     delete pOrig;
     return *this;
}

void print(){
    std::cout << "My name is " << m_name << " I'm " << m_age << " years old and y laptop has" << m_laptop->getRam() << " ram" << std::endl;
}

};