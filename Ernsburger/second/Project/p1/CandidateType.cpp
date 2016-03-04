#include "CandidateType.h"

using namespace std;

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
    cout << " ";
    Person::printName();
}

void CandidateType::printCandidateTotalVotes() const {
    Person::printName();
    cout << "\n"
         << "   Total Votes (all divisions): " << totalVotes;
}

void CandidateType::printCandidateDivisionVotes(int divNum) const {
    Person::printName();
    cout << "\n"
         << "    Division " << divNum << " total votes: " << infoArray[divNum];
}

CandidateType::~CandidateType() {}
