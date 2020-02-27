#pragma once

#include "degree.h"
#include <iostream>
#include <string>
using namespace std;

class Student{

private:
	string StudentID;
	string firstName;
	string lastName;
	string emailAddress;
	int Age;
	int numOfdays2CompleteCourse[3];
	degreeType degree;

public:
	//Student();

	Student(string StudentID, string firstName, string lastName, string emailAddress, int Age, int* dayLeftInCourse, degreeType degree);

	string getStudentID();

	void setStudentID(string StudentID);

	string getFirstName();

	void setFirstName(string firstName);

	string getLastName();


	void setLastName(string lastName);

	string getEmail();

	void setEmail(string emailAddress);

	int getAge();

	void setAge(int Age);

	int* getNumOfDays2CompleteCourses();

	void setNumOfDays2CompleteCourses(int* dayLeftInCourse);

	void setDegreeProgram(degreeType degree);

    virtual degreeType getDegreeProgram() = 0;

		virtual void print();
		

	~Student();
};


