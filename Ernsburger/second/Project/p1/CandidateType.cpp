#include "CandidateType.h"

using namespace std;

CandidateType::CandidateType()
             : Person() {
    totalVotes = 0;

    for (int i = 0; i < 4; ++i) {
        infoArray[i] = 0;
    }
}

CandidateType::CandidateType(const string& fistName, const string& lastName, int ssn)
             : Person(fistName, lastName, ssn) {
    totalVotes = 0;

    for (int i = 0; i < 4; ++i) {
        infoArray[i] = 0;
    }
}

void CandidateType::updateVotesByDivision(int divNum, int numOfVotes) {
    infoArray[divNum] += numOfVotes; totalVotes += numOfVotes;
}

int CandidateType::getTotalVotes() const {
    return totalVotes;
}

int CandidateType::getVotesByDivision(int divNum) const {
    return infoArray[divNum];
}

void CandidateType::printCandidateInfo() const {
    Person::printSSN();
    cout << " - ";
    Person::printName();
    cout << endl;
}

void CandidateType::printCandidateTotalVotes() const {
    //Person::printName();
	cout << "Total Votes: " << totalVotes;
}

void CandidateType::printCandidateDivisionVotes(int divNum) const {
    //Person::printName();
    cout << "Division " << divNum << ": " << infoArray[divNum]
         << endl;
}

CandidateType::~CandidateType() {}
