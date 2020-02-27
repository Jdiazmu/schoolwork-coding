#pragma once
#include <string>
#include "degree.h"
#include "Student.h"

class SecurityStudent : public Student {
	using Student::Student;
public:
	SecurityStudent();

	SecurityStudent(string StudentID, string firstName, string lastName, string emailAddress, int age, int* numDays, degreeType);

	degreeType getDegreeProgram();


private:
	degreeType degree = degreeType::SECURITY;
};


		
		

