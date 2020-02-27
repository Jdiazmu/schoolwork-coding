#pragma once
#include <string>
#include "student.h"
#include "degree.h"

class SoftwareStudent : public Student {
	using Student::Student;
public:
	SoftwareStudent();

	SoftwareStudent(string StudentID, string firstName, string lastName, string emailAddress, int age, int* numDays, degreeType);


	degreeType getDegreeProgram();

	//void print() override

private:
	degreeType degree = degreeType::SOFTWARE;
};




