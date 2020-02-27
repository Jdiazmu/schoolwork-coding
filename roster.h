				#pragma once
				#include <string>
				#include <iostream>
				#include "student.h"
				using namespace std;

				const int numStudents = 5;


				const string studentData[numStudents] =
				{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
				"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
				"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
				"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
				"A5, Juan,Diaz,jdiazmu@my.wgu.edu,34,30,30,60,SOFTWARE"
				};

				class Roster {
				public:
					int lastIndex;
					int maxSize;
					Student** Students;

					Roster();
					Roster(int maxSize);
					void rosterAdd(string);

					void printAll();
					void remove(string StudentID);
					void printAverageDaysInCourse();
					void printInvalidEmail();
					void printByDegreeProgram(degreeType);

					~Roster();
				};