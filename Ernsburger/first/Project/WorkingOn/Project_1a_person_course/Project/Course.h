#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

class Course {
public:
	// default constructor
	Course();

	// setCourseInfo
	void setCourseInfo(const std::string&, const std::string&, char, int);

	// printCourseInfo
	void printCourseInfo(bool print) const;

	// getCourseCredits
	int getCourseCredits() const;

	// getCourseNumber
	std::string getCourseNumber() const;

	// getCourseName
	std::string getCourseName() const;

	// getCourseGrade
	char getCourseGrade() const;

	// destructor
	~Course();

private:
	std::string courseName;
	std::string courseNo;
	char courseGrade;
	int courseCredit;
};

#endif
