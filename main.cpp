#include <iostream>
#include <memory>
#include "Boxer.cpp"


int main(int argc, char *argv[]){

   std::shared_ptr<Boxer> boxer1 = std::make_shared<Boxer>(10, "Ligius", 67);
   {
   std::shared_ptr<Boxer> boxer2 = boxer1;
   boxer2->presentation();
   std::cout << boxer2.use_count() << " refrences to fighter object" << std::endl;
   }

   boxer1->presentation();
   std::cout << boxer1.use_count() << " refrences to fighter object" << std::endl;

    return 0;
}