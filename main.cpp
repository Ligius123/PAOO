#include <iostream>
#include <memory>
// #include "Boxer.cpp"
#include "Lock.cpp"


int main(int argc, char *argv[]){

//    std::shared_ptr<Boxer> boxer1 = std::make_shared<Boxer>(10, "Ligius", 67);
//    {
//    std::shared_ptr<Boxer> boxer2 = boxer1;
//    boxer2->presentation();
//    std::cout << boxer2.use_count() << " refrences to fighter object" << std::endl;
//    }

//    boxer1->presentation();
//    std::cout << boxer1.use_count() << " refrences to fighter object" << std::endl;

    Boxer boxer3(15, "Bla", 74);
    Boxer boxer4(boxer3);

    Lock* boxerLocked = new Lock(boxer3);
    std::cout<<boxer3.getIsLocked()<<std::endl;
    boxer3.presentation();
    boxer4.presentation();
    delete boxerLocked;
    std::cout<<boxer3.getIsLocked()<<std::endl;
    boxer3.presentation();
    boxer4.presentation();

    return 0;
}