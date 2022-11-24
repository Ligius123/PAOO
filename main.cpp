#include <iostream>
#include "Student.cpp"
#include "FacultyStudent.cpp"
#include "HighSchoolStudent.cpp"

int main(int argc, char *argv[]){

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