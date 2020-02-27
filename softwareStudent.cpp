#include <iostream>
#include "softwareStudent.h"
using std::cout;


SoftwareStudent::SoftwareStudent() {}; 

SoftwareStudent::SoftwareStudent(string StudentID, string firstName, string lastName, string emailAddress, int stuAge, int* dayLeftInCourse, degreeType)
	: Student(StudentID, firstName, lastName, emailAddress, stuAge, dayLeftInCourse)

	
{}

degreeType SoftwareStudent::getDegreeProgram()  
{
	return degreeType::SOFTWARE;
}

/*void SoftwareStudent::print()
{
	cout << "Student ID: " << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" << "LastName: " << getLastName() << "\t" <<
		"Email: " << getEmail() << "\t" << "Age: " << getAge() << "\t" << "Days Left In Courses: " << getNumOfDays2CompleteCourses()[0] << "\t"
		<< "Days Left In Courses: " << getNumOfDays2CompleteCourses()[1] << "\t" << "Days Left In Courses: " << getNumOfDays2CompleteCourses()[2] << "\t" <<
		"Degree: " << "Software" << endl;
};*/

