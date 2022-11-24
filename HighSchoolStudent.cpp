#include <iostream>

class HighSchoolStudent : public Student{

protected:

int m_wear_note;

public:

HighSchoolStudent(){}

HighSchoolStudent(std::string name, int age, int start_year, int wear_note) : Student(name, age, start_year),
 m_wear_note(wear_note){
        std::cout<< "Derived object constructed" << std::endl;
 }

void presentation(){
    std::cout<< "My name is: " << m_name << ", I'm " << m_age << " and I'm a HighSchool student with " << m_wear_note << " as my wear note"  << std::endl;
}

~HighSchoolStudent(){
    std::cout<< "Derived object destructed" << std::endl;
    }


};
