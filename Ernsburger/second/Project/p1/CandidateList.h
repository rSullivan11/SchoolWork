#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "CandidateType.h"
#include <iostream>
#include <string>

using namespace std;

class Node
{
public:
	Node(){}
    Node(const CandidateType& votes, Node *theLink)
		: candidate(votes), link(theLink){}
    Node* getLink( ) const { return link; }
	CandidateType getCandidate( ) const { return candidate; }
    void setCandidate(const CandidateType& votes) { candidate = votes; }
    void setLink(Node *theLink) { link = theLink; }
private:
    CandidateType candidate;
    Node *link;		//pointer that points to next node
};

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

    void destroyList();
    
private:
	Node *first; 	// pointer to point to the first candidate in the list
	Node *last;		// pointer to point to last candidate in the list
	int count;		// keeps track of number of candidates in the list
};

#endif
