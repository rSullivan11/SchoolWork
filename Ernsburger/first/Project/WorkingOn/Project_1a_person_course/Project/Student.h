#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <iterator>
#include <fstream>
#include <string>

class Student: public Person
{
public:

	//Default constructor   
	Student();

	//setStudentInfo
	void setStudentInfo(const std::string&, const std::string&, int, bool, const std::vector<Course>&);

	//getID
	int getID() const;

	//getNumberOfCourses
	int getNumberOfCourses() const;

	//getCreditsEnrolled
	int getCreditsEnrolled() const;

	//isTuitionPaid
	bool isTuitionPaid() const;

	//isEnrolledInCourse
	bool isEnrolledInCourse(const std::string&) const; 
	
	//getGpa
	double getGpa() const;

	//billingAmount
	double billingAmount(double) const;

	//printStudentInfo
	void printStudentInfo() const;

	//printStudentInfo
	void printStudentInfo(double tuitionRate) const;

	//getCoursesEnrolled
	std::vector<Course> getCoursesEntolled() const;

	void printStudentInfoToFile(std::ofstream&, double) const;

	//Destructor
	~Student();

private:
	int studentID;				
	int numberOfCourses;	
	bool tuitionWasPaid;		
	std::vector<Course> coursesEnrolled; 
};

#endif



