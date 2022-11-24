#include <iostream>

class Student{

protected:

 std::string m_name;
 int m_age;
 int m_start_year;
 int m_grad_year;

public:

Student(){}

Student(std::string name, int age, int start_year) : 
m_name(name),
m_age(age),
m_start_year(start_year),
m_grad_year(start_year + 4){
   std::cout<< "Object constructed" << std::endl;
}

Student(const Student& rhStudent) : m_name(rhStudent.m_name),
m_age(rhStudent.m_age),
m_start_year(rhStudent.m_start_year),
m_grad_year(rhStudent.m_grad_year){
    std::cout << "Base copy constructor called" << std::endl;
}

Student& operator = (const Student& rhStudent)
{
    std::cout << "Copy assignment operator called" << std::endl;
    m_name = rhStudent.m_name;
    m_age = rhStudent.m_age;
    m_start_year = rhStudent.m_start_year;
    m_grad_year = rhStudent.m_grad_year;
    return *this;
}

virtual void presentation(){
    std::cout<< "My name is: " << m_name << ", I'm " << m_age << " and I'm a Computer Science student" << std::endl;
}

~Student(){
    std::cout<< "Object destructed" << std::endl;
}

};
