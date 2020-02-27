#include <iostream>
#include "networkStudent.h"
using std::cout;


NetworkStudent::NetworkStudent() {}


NetworkStudent::NetworkStudent(string StudentID, string firstName, string lastName, string emailAddress, int stuAge, int* dayLeftInCourse, degreeType)
	: Student(StudentID, firstName, lastName, emailAddress, stuAge, dayLeftInCourse)

{}

degreeType NetworkStudent::getDegreeProgram()  
{
		return degreeType::NETWORKING;
}

//void NetworkStudent::print()

		/*cout << "Student ID: " << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" << "LastName: " << getLastName() << "\t" <<
			"Email: " << getEmail() << "\t" << "Age: " << getAge() << "\t" << "Days Left In Courses: " << getNumOfDays2CompleteCourses()[0] << "\t"
			<< "Days Left In Courses: " << getNumOfDays2CompleteCourses()[1] << "\t" << "Days Left In Courses: " << getNumOfDays2CompleteCourses()[2] << "\t" <<
			"Degree: " << "Networking" << endl;*/


