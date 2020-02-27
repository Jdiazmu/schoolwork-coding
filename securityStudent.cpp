#include <iostream>
#include "securityStudent.h"
using std::cout;


SecurityStudent::SecurityStudent() {}

SecurityStudent::SecurityStudent(string StudentID, string firstName, string lastName, string emailAddress, int stuAge, int* dayLeftInCourse, degreeType)
	: Student(StudentID, firstName, lastName, emailAddress, stuAge, dayLeftInCourse)
	
	
	  	
{}
       degreeType SecurityStudent::getDegreeProgram()  
	{
		return degreeType::SECURITY;
	}

	/*void SecurityStudent::print()
	{
		cout << "Student ID: " << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" << "LastName: " << getLastName() << "\t" <<
			"Email: " << getEmail() << "\t" << "Age: " << getAge() << "\t" << "Days Left In Courses: " << getNumOfDays2CompleteCourses()[0] << "\t"
			<< "Days Left In Courses: " << getNumOfDays2CompleteCourses()[1] << "\t" << "Days Left In Courses: " << getNumOfDays2CompleteCourses()[2] << "\t" <<
			"Degree: " << "Security" << endl;
	};*/



	