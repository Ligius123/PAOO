#include <iostream>
#include <memory>
#include "Boxer.cpp"

class Lock{

private:

Boxer& m_boxer;

public:

Lock(Boxer& boxer) : m_boxer(boxer){
  lock(m_boxer);
}

void lock(Boxer& boxer){
   std::cout << "Se blocheaza boxerul" << std::endl;
   boxer.setIsLocked(true);
}

void unlock(Boxer& boxer){
   std::cout << "Se deblocheaza boxerul" << std::endl;
   boxer.setIsLocked(false);
}

~Lock(){
unlock(m_boxer);
}


};