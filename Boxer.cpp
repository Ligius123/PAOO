#include <iostream>
#include "Figther.cpp"

class Boxer : public Figther{

   private:

   int m_category;
   bool m_isLocked;

   public:

   Boxer(int nrVictories, std::string name, int category) : Figther(nrVictories, name), 
   m_category(category){
    std::cout << "Boxer constructed" << std::endl;
   }

     Boxer(const Boxer& rhBoxer) : Figther(rhBoxer) {
            std::cout<<"Derived Copy Constructor called"<<std::endl; 
            this->m_category = rhBoxer.m_category;
            this->m_isLocked = rhBoxer.m_isLocked;
        }

        Boxer operator=(const Boxer& rhBoxer) {
            if(this == &rhBoxer) {
                std::cout<<"The same object"<<std::endl;
                return *this;
            }
            std::cout<<"Derived Copy Assignment called"<<std::endl;
            Boxer::operator=(rhBoxer);
            this->m_category = rhBoxer.m_category;
            this->m_isLocked = rhBoxer.m_isLocked;
            return *this;
        }

    void presentation(){
    std::cout << "I'm " << m_name << " and I have " << m_nrVictories << " victories at " << m_category << " kg category" << std::endl;
}

void setIsLocked(bool isLocked) {
    m_isLocked = isLocked;
   }

  bool getIsLocked() {
    return m_isLocked;
        }

   ~Boxer(){
    std::cout << "Boxer destructed" << std::endl;
   }

};