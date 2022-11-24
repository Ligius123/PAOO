#include <iostream>
#include "Laptop.cpp"




class FacultyStudent : public Student{
 
  private:
     
     int m_credits;
     Laptop* laptop;    
   
  public:
 
     FacultyStudent(){}

     FacultyStudent(std::string name, int age, int start_year, int credits) : Student(name, age, start_year), 
     m_credits(credits){
      std::cout << "Derived object constructed" << std::endl; 
      }

    FacultyStudent(const FacultyStudent& rhStudent) : Student(rhStudent),
    m_credits(rhStudent.m_credits){
      std::cout << "Derived copy constructor called" << std::endl;
    }

    FacultyStudent& operator = (const FacultyStudent& rhStudent){
    std::cout << "Derived copy assignment operator called" << std::endl;
    if(this != &rhStudent){
      Student::operator = (rhStudent);
      m_credits = rhStudent.m_credits;
      return *this;
    }
    else{
      std::cout << "The same object" << std::endl;
      return *this;
    }
}

     ~FacultyStudent(){
      std::cout << "Derived object destructed" << std::endl;
      }

     void presentation(){
        std::cout<< "My name is: " << m_name << ", I'm " << m_age << " started in " << m_start_year << "and I'm a Computer Science student with " << m_credits << " number of credits and I graduate in " << m_grad_year << " year" << std::endl;
     }

};