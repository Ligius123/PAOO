#include <iostream>
#include "Fighter.cpp"

class Boxer : public Fighter{

   private:

   int m_category;

   public:

   Boxer(int nrVictories, std::string name, int category) : Fighter(nrVictories, name), 
   m_category(category){
    std::cout << "Boxer constructed" << std::endl;
   }

    void presentation(){
    std::cout << "I'm " << m_name << " and I have " << m_nrVictories << " victories at " << m_category << " kg category" << std::endl;
}

   ~Boxer(){
    std::cout << "Boxer destructed" << std::endl;
   }

};