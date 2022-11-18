#include <iostream>

class Student{

protected:

 std::string m_name;
 int m_age;
 int m_start_year;
 int m_grad_year;

public:

Student(std::string name, int age, int start_year) : 
m_name(name),
m_age(age),
m_start_year(start_year),
m_grad_year(start_year + 4) {
   std::cout<< "Object constructed" << std::endl;
}

virtual void presentation(){
    std::cout<< "My name is: " << m_name << ", I'm " << m_age << " and I'm a Computer Science student" << std::endl;
}

~Student(){
    std::cout<< "Object destructed" << std::endl;
}

private:

Student& operator = (const Student&);
Student(const Student&);
// Student& operator = (const Student&) = delete;
// Student(const Student&) = default;
// Student(const Student&);

};