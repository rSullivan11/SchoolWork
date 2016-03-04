#include "StudentList.h"

using namespace std;

// default constructor
StudentList::StudentList() {
	first = NULL; last = NULL;
	count = 0;
}

// addStudent
void StudentList::addStudent(const Student& student) {
	Node *addNode = new Node;
	addNode->setStudent(student);

	addNode->setNext(first);
	first = addNode;
	++count;
}

// getNoOfStudents
int StudentList::getNoOfStudents() const {
	return count;
}

// printStudentByID
void StudentList::printStudentByID(int ID, double tuitionRate) const {
	Node *current = first;
	Student student = current->getStudent();

	while (student.getID() != ID && current->getNext() != NULL) {
		current = current->getNext();
		student = current->getStudent();
	}
	if (student.getID() != ID) cout << "No student with ID " << ID << " found in the list\n";
	else student.printStudentInfo(tuitionRate);
}

// printStudentsByCourse
void StudentList::printStudentsByCourse(const string& courseNo) const {
	Node *current = first;
	Student student = current->getStudent();

	bool found = false;
	if (student.getNumberOfCourses() == 0) cerr << "List is empty\n";
	else {
		while (current->getNext() != NULL) {
			if (student.isEnrolledInCourse(courseNo)) {
				student.printStudentInfo();
				found = true;
			}
			current = current->getNext();
			student = current->getStudent();
		}
		if (!found) cerr << "No student enrolled in " << courseNo << endl;
	}
}

// printStudentByName
void StudentList::printStudentsByName(const string& lastName) const {
	bool found = false;
	if (count == 0) cerr << "List is empty\n";
	else {
		Node *current = first;
		Student student = current->getStudent();

		while (current->getNext() != NULL) {
			if (student.getLastName() == lastName) {
				student.printStudentInfo();
				found = true;
			}
				current = current->getNext();
				student = current->getStudent();
		}
		if (!found) cerr << "No student with last name " << lastName << " is in the list\n";
	}
}

// printStudentsOnHold
void StudentList::printStudentsOnHold(double tuitionRate) const {
	if (count == 0) cerr << "No students in the list\n";
	else {
		Node *current = first;
		Student student = current->getStudent();

		bool found = false;
		while (current->getNext() != NULL) {
			if (!student.isTuitionPaid()) {
				student.printStudentInfo(tuitionRate);
				found = true;

				current = current->getNext();
				student = current->getStudent();
			} else {
				current = current->getNext();
				student = current->getStudent();
			}
		}
		if (!found) cerr << "There are no students on hold\n";
	}
}

// printAllStudents
void StudentList::printAllStudents(double tuitionRate) const {
	if (count == 0) cerr << "The list is empty.\n";
	else {
		Node *current = first;
		Student student = current->getStudent();

		while (current->getNext() != NULL) {
			student.printStudentInfo(tuitionRate);

			current = current->getNext();
			student = current->getStudent();
		}
	}
}

// printStudentsToFile
void StudentList::printStudentsToFile(ofstream& outp, double tuitionRate) const {
	if (count == 0) cerr << "Cannot print. No students in the list\n";
	else {
		Node *current = first;
		Student student = current->getStudent();

		while (current->getNext() != NULL) {
			student.printStudentInfoToFile(outp, tuitionRate);

			current = current->getNext();
			student = current->getStudent();
		}
	}
}

// destroyStudentList
void StudentList::destroyStudentList() {
	Node *current = first;

	while (first != last) {
		first = first->getNext();
		delete current;
		current = first;
	}
	delete current;
	first = NULL; last = NULL;
}

// destructor
StudentList::~StudentList() { destroyStudentList(); }
