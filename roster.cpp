#include<iostream>
#include<string>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "Student.h"
#include "roster.h"
using namespace std;

Roster::Roster() {
	maxSize = 5;  
	lastIndex = -1; 
	this->Students = nullptr;
}


Roster::Roster(int maxSize) {
	this->maxSize = maxSize;
	lastIndex = -1;
	this->Students = new Student * [maxSize];
}


void Roster::rosterAdd(string row) {

	if (lastIndex < maxSize) {
		lastIndex = lastIndex + 1;
		int daysArray[3];
		degreeType studentDegree;
		if (row.find("SECURITY") != string::npos)
			studentDegree = SECURITY;

		if (row.find("SOFTWARE") != string::npos)
			studentDegree = SOFTWARE;

		if (row.find("NETWORKING") != string::npos)
			studentDegree = NETWORKING;

	
		
		int wordBegin = 0; 
		int wordEnd = 0;   
		wordEnd = studentData[lastIndex].find(",");
		string studentID = (studentData[lastIndex].substr(0, wordEnd));


		wordBegin = wordEnd + 1;
		wordEnd = studentData[lastIndex].find(",", wordBegin); 			
		string firstName = (studentData[lastIndex].substr(wordBegin, wordEnd - wordBegin));


		wordBegin = wordEnd + 1;  
		wordEnd = studentData[lastIndex].find(",", wordBegin); 		
		string lastName =(studentData[lastIndex].substr(wordBegin, wordEnd - wordBegin));

		
		wordBegin = wordEnd + 1;
		wordEnd = studentData[lastIndex].find(",", wordBegin); 			
		string email = (studentData[lastIndex].substr(wordBegin, wordEnd - wordBegin));  

		wordBegin = wordEnd + 1;  
		wordEnd = studentData[lastIndex].find(",", wordBegin);
		int age = (stoi(studentData[lastIndex].substr(wordBegin, wordEnd - wordBegin)));
		
		wordBegin = wordEnd + 1;  
		wordEnd = studentData[lastIndex].find(",", wordBegin); 			
		daysArray[0] = stoi(studentData[lastIndex].substr(wordBegin, wordEnd - wordBegin));

		wordBegin = wordEnd + 1;
		wordEnd = studentData[lastIndex].find(",", wordBegin);			
		daysArray[1] = stoi(studentData[lastIndex].substr(wordBegin, wordEnd - wordBegin));

		wordBegin = wordEnd + 1;
		wordEnd = studentData[lastIndex].find(",", wordBegin); 			
		daysArray[2] = stoi(studentData[lastIndex].substr(wordBegin, wordEnd - wordBegin));

		if (studentDegree == SECURITY)
			Students[lastIndex] = new SecurityStudent();

		if (studentDegree == NETWORKING)
			Students[lastIndex] = new NetworkStudent();

		if (studentDegree == SOFTWARE)
			Students[lastIndex] = new SoftwareStudent();

	}
	else {
		cout << "You have reached the end of the Student Roster." << endl;
		exit(-1);
	}
}


void Roster::printAll() { 
	for (int i = 0; i <= this->lastIndex; ++i)
		(this->Students)[i]-> print();
}


void Roster::remove(string ID) {  
	bool found = false;
	for (int i = 0; i <= lastIndex; ++i) {
		if (this->Students[i]->getStudentID() == ID) { 
			found = true;
			delete this->Students[i]; 
			this->Students[i] = this->Students[lastIndex];
			lastIndex--;
		}
	}
	if (found == true) printAll();
	if (found == false) cout << "That student is not in the Student Roster." << endl;
}



void Roster::printAverageDaysInCourse() {
	for (int i = 0; i <= +lastIndex; ++i) {
		int* AveDay = Students[i]->getNumOfDays2CompleteCourses();
		cout << "Student " << this->Students[i]->getStudentID() << " has an average of " << (AveDay[0] + AveDay[1] + AveDay[2]) / 3 << " days per course." << endl;
	}
} 


void Roster::printInvalidEmail() {
	int i = 0;

	for (int i = 0; i < lastIndex; i++) {
		int j = 0;
		int periodCounter = 0;
		int atCounter = 0;

		string sEmail = this->Students[i]->getEmail();
		int eLen = sEmail.length();
		for (int j = 0; j < eLen; ++j) {
			if (sEmail[j] == '.') {
				++periodCounter;
			}
		}

		if (periodCounter != 1) {
			cout << "Invalid email for Student ID: " << this->Students[i]->getStudentID() << endl;
		}

		for (int j = 0; j < eLen; ++j) {
			if (sEmail[j] == '@') {
				++atCounter;
			}
		}

		if (atCounter != 1) {
			cout << "Invalid email for Student ID: " << this->Students[i]->getStudentID() << endl;
		}

		for (int j = 0; j < eLen; ++j) {
			if (sEmail[j] == ' ') {
				cout << "Invalid email for Student ID: " << this->Students[i]->getStudentID() << endl;
				++i;
			}
		}

	}
	
}


void Roster::printByDegreeProgram(degreeType degree) {
	for (int i = 0; i <= lastIndex; ++i) {
		if (this->Students[i]->getDegreeProgram() == degree) this->Students[i]->print();
	}

}

Roster::~Roster() { 
	for (int i = 0; i <= lastIndex; ++i) {
		delete this->Students[i];
	}
	delete this;
}


int main() { 


	Roster* StudentRoster = new Roster(numStudents); 
	cout << "Creating new Roster and adding Students...  ";
	for (int i = 0; i < numStudents; ++i) {
		StudentRoster->rosterAdd(studentData[i]); 
	}
	cout << "Done. Here is the current student roster: " << endl;
	StudentRoster->printAll(); 
	cout << endl;

	cout << "Checking for invalid Emails." << endl;
	StudentRoster->printInvalidEmail();
	cout << endl;

	cout << "Average Days to complete courses for each student:" << endl;
	StudentRoster->printAverageDaysInCourse();
	cout << endl;

	cout << "Students in the Software Program: " << endl;
	StudentRoster->printByDegreeProgram(degreeType::SOFTWARE);
	cout << endl;

	cout << "Congratulations! Student A3 Graduated! (Testing student removal systems.)" << endl;
	StudentRoster->remove("A3");


	cout << "Testing removal errors" << endl; 		
	StudentRoster->remove("A3");
	cout << endl;
	cout << endl << "Press any key to end program." << endl;
	system("pause");
	StudentRoster->~Roster();
	return 0;
}

