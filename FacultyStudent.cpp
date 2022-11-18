#include <iostream>

class FacultyStudent : public Student{
 
  private:
     
     int m_credits;
   
  public:
 
     FacultyStudent(std::string name, int age, int start_year, int credits) : Student(name, age, start_year), 
     m_credits(credits){}

     void presentation(){
        std::cout<< "My name is: " << m_name << ", I'm " << m_age << " and I'm a Computer Science student with " << m_credits << " number of credits" << std::endl;
     }

};