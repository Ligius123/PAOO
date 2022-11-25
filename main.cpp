#include <iostream>
#include "Student.cpp"
#include "FacultyStudent.cpp"
#include "HighSchoolStudent.cpp"
#include "Developer.cpp"

int main(int argc, char *argv[]){

// {
// HighSchoolStudent highSchoolStudent("Ligius", 19, 2015, 10);

// highSchoolStudent.presentation();
// }
{
Laptop laptop1(10);
Laptop laptop2(20);
Developer developer1("Mark", 20, laptop1);
developer1 = developer1;
developer1.print();
Developer developer2("Joshua", 21, laptop2);
developer2 = developer1;
developer2.print();
}


FacultyStudent facultyStudent1("Ligius", 22, 2019, 20);

facultyStudent1.presentation();

FacultyStudent facultyStudent2;
FacultyStudent facultyStudent3;
FacultyStudent facultyStudent4;

((facultyStudent2 = facultyStudent3) = facultyStudent4) = facultyStudent1;
// facultyStudent2 = facultyStudent3 = facultyStudent4 = facultyStudent1;

facultyStudent2.presentation();
facultyStudent3.presentation();
facultyStudent4.presentation();

facultyStudent1 = facultyStudent1;


    return 0;
}