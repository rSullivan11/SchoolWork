#ifndef MOVIE_H
#define MOVIE_H

#include <string>
#include <ostream>

class Movie {
	friend std::ostream& operator<<(std::ostream&, const Movie&);
public:
	Movie();
	Movie(const std::string&, int);

	void setTitle(const std::string&);
	void setYear(int);

	std::string getTitle() const;
	int getYear() const;

	bool operator==(const Movie&) const;

	bool operator!=(const Movie&) const;

private:
	std::string title;
	int productionYear;
};

#endif