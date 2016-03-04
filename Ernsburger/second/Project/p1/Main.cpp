/*
 * Sullivan, Ryan
 * CS A250
 * February 13, 2016
 *
 *  Project 1B
 */

#include "CandidateType.h"

using namespace std;

int main() {
    Person p1("John", "Appleseed", 123456789);
    Person p2;

    p2.setPersonInfo("Betty", "Bitch", 987666543);

    cout << "\n"
         << p1.getFirstName() << " "
         << p1.getLastName() << " "
         << p2.getLastName() << " "
         << p2.getSSN() << endl;

    p2.printName();

    cout << endl;

    p2.printPersonInfo();

    p1.~Person();
    p2.~Person();

    CandidateType c1("Bob", "Barker", 123456789);

    c1.updateVotesByDivision(0, 1000);
    c1.updateVotesByDivision(1, 1);
    c1.updateVotesByDivision(2, 250);

    cout << "\nTesting printCandidateInfo:" << endl;
    c1.printCandidateInfo();

    cout << "\n\nTesting printCandidateDivisionVotes:" << endl;
        c1.printCandidateDivisionVotes(0);
    cout << endl;
        c1.printCandidateDivisionVotes(1);
    cout << endl;
        c1.printCandidateDivisionVotes(2);
    cout << endl;
        c1.printCandidateDivisionVotes(3);

    cout << "\n\nTesting getVotesByDivision:" << endl;
    cout << c1.getVotesByDivision(0) << "\n"
         << c1.getVotesByDivision(1) << "\n"
         << c1.getVotesByDivision(2) << "\n"
         << c1.getVotesByDivision(3) << endl;

    cout << "\nTesting getTotalVotes:\n"
         << c1.getTotalVotes() << endl;

    cout << "\nTesting printCandidateTotalVotes:" << endl;
    c1.printCandidateTotalVotes();

    return 0;
}
