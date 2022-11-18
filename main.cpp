#include <iostream>
#include "Student.cpp"
#include "FacultyStudent.cpp"
#include "HighSchoolStudent.cpp"

int main(int argc, char *argv[]){

{
HighSchoolStudent highSchoolStudent("Ligius", 19, 2015, 10);

highSchoolStudent.presentation();
}

FacultyStudent facultyStudent("Ligius", 22, 2019, 20);

facultyStudent.presentation();

std::cout<< "Calling copy constructor: " << std::endl;
 
 {
FacultyStudent facultyStudent2(facultyStudent);

facultyStudent2.presentation();

std::cout<< "Copy constructor called. " << std::endl;
}

std::cout<< "Calling copy asignment operator: " << std::endl;

{
 FacultyStudent facultyStudent3("Mara", 20, 2021, 20);

 facultyStudent3 = facultyStudent;

 facultyStudent3.presentation();

 std::cout<< "Copy asignment operator called: " << std::endl;

}

    return 0;
}