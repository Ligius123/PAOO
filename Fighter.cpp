#include <iostream>


class Figther{

protected:

int m_nrVictories;
std::string m_name;

public:

Figther(int nrVictories, std::string name) : m_nrVictories(nrVictories),
m_name(name){
   std::cout << "Fighter constructed" << std::endl; 
}

Figther(const Figther& rhFigther) : m_nrVictories(rhFigther.m_nrVictories),
 m_name(rhFigther.m_name){
    std::cout << "Base copy constructor called" << std::endl;
}

Figther& operator = (const Figther& rhFigther)
{
    std::cout << "Copy assignment operator called" << std::endl;
    m_nrVictories = rhFigther.m_nrVictories;
    m_name = rhFigther.m_name;
    return *this;
}

virtual void presentation(){
    std::cout << "I'm " << m_name << " and I have " << m_nrVictories << " victories" << std::endl;
}

~Figther(){
    std::cout << "Fighter destructed" << std::endl;
}

};