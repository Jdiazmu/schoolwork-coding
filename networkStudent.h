#pragma once
#include <string>
#include "student.h"
#include "degree.h"

class NetworkStudent : public Student {
	using Student::Student;
public:
	NetworkStudent();

	NetworkStudent(string StudentID, string firstName, string lastName, string emailAddress, int age, int* numDays, degreeType);

	degreeType getDegreeProgram();


private:
	degreeType degree = degreeType::NETWORKING;
};

	