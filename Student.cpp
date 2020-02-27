#include "Student.h"
#include "degree.h"
using namespace std;


//Student::Student() {
//}


Student::Student(string StudentID, string firstName, string lastName, string emailAddress, int Age, int* dayLeftInCourse, degreeType degree) {
	setStudentID(StudentID);
	setFirstName(firstName);
	setLastName(lastName);
	setEmail(emailAddress);
	setAge(Age);
	setNumOfDays2CompleteCourses(dayLeftInCourse);
	
}

string Student::getStudentID() {
	return StudentID;
}

void Student::setStudentID(string StudentID) {
	this->StudentID;
}

string Student::getFirstName() {
	return firstName;
}

void Student::setFirstName(string firstName) {
	this->firstName;
}


string Student::getLastName() {
	return this->lastName;
}

void Student::setLastName(string lastName) {
	this->lastName;
}

string Student::getEmail() {
	return this->emailAddress;
}

void Student::setEmail(string emailAddress) {
	this->emailAddress;
}

int Student::getAge() {
	return this->Age;
}

void Student::setAge(int Age) {
	this->Age;
}

int* Student::getNumOfDays2CompleteCourses() {
	return this->numOfdays2CompleteCourse;
}

void Student::setDegreeProgram(degreeType degree) {

	this->degree = degree;

}
degreeType Student::getDegreeProgram() { return degree; }


void Student::setNumOfDays2CompleteCourses(int* dayLeftInCourse) {
	numOfdays2CompleteCourse[0] = dayLeftInCourse[0];
	numOfdays2CompleteCourse[1] = dayLeftInCourse[1];
	numOfdays2CompleteCourse[2] = dayLeftInCourse[2];
}


void Student::print() {
}

Student::~Student()
{
}


