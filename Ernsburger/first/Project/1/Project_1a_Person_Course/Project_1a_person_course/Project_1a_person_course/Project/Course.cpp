using namespace std;

#include "Course.h"

// default constructor
Course::Course() {
    courseGrade = '*';
    courseCredit = 0;
}

// setCourseInfo
void Course::setCourseInfo(const string& newCourseName, const string& newCourseNo,
                        char newCourseGrade, int newCourseCredit) {
    courseName = newCourseName;
    courseNo = newCourseNo;
    courseGrade = newCourseGrade;
    courseCredit = newCourseCredit;
}
// printCourseInfo
void Course::printCourseInfo(bool printGrade) const {
   cout << left
		<< setw(8) << courseNo << "   "
		<< setw(15) << courseName;
	cout.unsetf(ios::left);
	cout << setw(3) << courseCredits << "   ";

	if(isGrade)
		cout << setw(4) << courseGrade<<endl;
	else
		cout << setw(4) << "***" << endl;
}

// getCourseCredits
int Course::getCourseCredits() const {
    return courseCredit;
}

// getCourseNumber
string Course::getCourseNumber() const {
    return courseNo;
}

// getCourseName
string Course::getCourseName() const {
    return courseName;
}

// getCourseGrade
char Course::getCourseGrade() const {
    return courseGrade;
}

// destructor
Course::~Course() {}

