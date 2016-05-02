#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "CandidateType.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

class CandidateList
{
public:
    CandidateList();
    ~CandidateList();

    void addCandidate(const CandidateType&);

    int getWinner() const;

    void printCandidateName(int) const;
    void printAllCandidates() const;
    void printCandidateDivisionVotes(int, int) const;
    void printCandidateTotalVotes(int) const;
    void printFinalResult() const;

	bool isEmpty() const;

	bool searchCandidate(int) const;
    
private:
	bool searchCandidateLocation(int, vector<CandidateType>::const_iterator&) const;

	vector<CandidateType> candidates;
};

#endif
