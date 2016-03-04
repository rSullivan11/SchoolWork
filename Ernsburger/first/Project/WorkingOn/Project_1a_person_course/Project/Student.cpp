#include "Student.h"

using namespace std;

//Default constructor   
Student::Student() {
	studentID = 0; numberOfCourses = 0;
	tuitionWasPaid = false;
}

//setStudentInfo
void Student::setStudentInfo(const string& first, const string& last, int newStudentID, 
	bool newTuitionPaid, const vector<Course>& newCourses) {
	Person::setName(first, last);
	studentID = newStudentID;
	tuitionWasPaid = newTuitionPaid;
	
	numberOfCourses = newCourses.size();
	for (size_t i = 0; i < numberOfCourses; ++i) {
		coursesEnrolled.push_back(newCourses.at(i)) ;
	}
}

//getID
int Student::getID() const {
	return studentID;
}

//getNumberOfCourses
int Student::getNumberOfCourses() const {
	return numberOfCourses;
}

//getCreditsEnrolled
int Student::getCreditsEnrolled() const {
	int credits = 0; Course course;

	int size = numberOfCourses, i = 0;
	for (i = 0; i < size; i++) {
		course = coursesEnrolled.at(i);
		credits += course.getCourseCredits();
	}
	return credits;
}

//isTuitionPaid
bool Student::isTuitionPaid() const {
	return tuitionWasPaid;
}

//isEnrolledInCourse
bool Student::isEnrolledInCourse(const string& courseNum) const {
	bool isEnrolled = false; int i = 0;
	Course course = coursesEnrolled.at(i);

	while (course.getCourseNumber() != courseNum && i < (numberOfCourses - 1)) {
		++i; course = coursesEnrolled.at(i);
	} if (course.getCourseNumber() == courseNum) isEnrolled = true;

	return isEnrolled;
}

//getGpa
double Student::getGpa() const {
	int i = 0; double gpa = 0.0, gradePoint = 0.0;
	Course course;
	char grade; int credit = 0;
	
	while (i < numberOfCourses) {
		course = coursesEnrolled.at(i);
		grade = course.getCourseGrade();
		
		switch (grade) {
			case 'A':
				gradePoint += (4 * course.getCourseCredits()); ++i;
				break;
			case 'B':
				gradePoint += (3 * course.getCourseCredits()); ++i;
				break;
			case 'C': 
				gradePoint += (2 * course.getCourseCredits()); ++i;
				break;
			case 'D': 
				gradePoint += (1 * course.getCourseCredits()); ++i;
				break;
			case 'F': break;
			default: cout << "Invalid Grade."; ++i;
		}
	}
	gpa = gradePoint / getCreditsEnrolled();
	return gpa;
}

//billingAmount
double Student::billingAmount(double cost) const {
	double billingAmmount = 0.0;
	billingAmmount = (getCreditsEnrolled() * cost);

	return billingAmmount;
}

//printStudentInfo
void Student::printStudentInfo() const {
	cout << studentID << '-';
	Person::printName();
}

//printStudentInfo
void Student::printStudentInfo(double tuitionRate) const {
	cout << "Student Name: "; Person::printName();
	cout << endl;
	cout << "Student ID: " << getID() << '\n'
		 << "Number of courses enrolled: " << getNumberOfCourses() << "\n\n"
		 << "Course No  Course Name  Credits Grade" << endl;
	
	Course course; int i = 0;
	while (i < getNumberOfCourses()) {
		course = coursesEnrolled.at(i);
		course.printCourseInfo(tuitionWasPaid); ++i;
	}
	cout << "\nTotal number of credit hours: " << getCreditsEnrolled() << endl;
	if (tuitionWasPaid) cout << "Current Term GPA: " << getGpa() << endl;
	else cout << "*** Grades are being held for not paying the tuition. ***\n"
			<< "Ammount Due: " << billingAmount(tuitionRate) << endl;

	cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n" << endl;
}

//getCoursesEnrolledr
vector<Course> Student::getCoursesEntolled() const {
	return coursesEnrolled;
}

void Student::printStudentInfoToFile(ofstream& out, double tuitionRate) const {
	string first, last; getName(first, last);
	out << "Student Name: " << last << ", " << first; 
	out << endl;
	out << "Student ID: " << getID() << '\n'
		<< "Number of courses enrolled: " << getNumberOfCourses() << "\n\n"
		<< "Course No  Course Name  Credits Grade" << endl;

	Course course; int i = 0;
	while (i < getNumberOfCourses()) {
		course = coursesEnrolled.at(i);
		++i;

		out << left
			<< setw(8) << course.getCourseNumber() << "   "
			<< setw(15) << course.getCourseName();
		out.unsetf(ios::left);
		out << setw(3) << course.getCourseCredits() << "   ";

		if (tuitionWasPaid) out << setw(4) << course.getCourseGrade() << endl;
		else out << setw(4) << "***" << endl;
	}
	out << "\nTotal number of credit hours: " << getCreditsEnrolled() << endl;
	if (tuitionWasPaid) out << setprecision(3) << "Current Term GPA: " << getGpa() << endl;
	else out << "*** Grades are being held for not paying the tuition. ***\n"
		     << "Ammount Due: " << billingAmount(tuitionRate) << endl;

	out << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n" << endl;
}

//Destructor
Student::~Student() {}
