#include "Movie.h"

using namespace std;

ostream& operator<<(ostream& out, const Movie& m) {
	out << m.getTitle() << " - " << m.getYear() << endl;
	return out;
}

Movie::Movie() {
	productionYear = 0;
}

Movie::Movie(const string& title, int productionYear) {
	this->title = title; this->productionYear = productionYear;
}

void Movie::setTitle(const string& title) {
	this->title = title;
}

void Movie::setYear(int productionYear) {
	this->productionYear = productionYear;
}

string Movie::getTitle() const {
	return title;
}

int Movie::getYear() const {
	return productionYear;
}

bool Movie::operator==(const Movie& m2) const {
	if (this->getTitle() != m2.getTitle()) return false;
	else if (this->getYear() != m2.getYear()) return false;
	return true;
}

bool Movie::operator!=(const Movie& m2) const {
	if (this->getTitle() != m2.getTitle()) return true;
	else if (this->getYear() != m2.getYear()) return true;
	return false;
}