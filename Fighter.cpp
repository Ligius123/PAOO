#include <iostream>


class Fighter{

protected:

int m_nrVictories;
std::string m_name;

public:

Fighter(int nrVictories, std::string name) : m_nrVictories(nrVictories),
m_name(name){
   std::cout << "Fighter constructed" << std::endl; 
}

virtual void presentation(){
    std::cout << "I'm " << m_name << " and I have " << m_nrVictories << " victories" << std::endl;
}

~Fighter(){
    std::cout << "Fighter destructed" << std::endl;
}

};