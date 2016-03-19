#include "CandidateList.h"

// Function definitions
CandidateList::CandidateList() {
    first = NULL;
    last = NULL;
    count = 0;
}

void CandidateList::addCandidate(const CandidateType& c) {
    Node *add = new Node(c, NULL);
    if (count == 0) { first = add; last = add; }
    else {
        last->setLink(add);
        last = add;
    }
    ++count;
}

int CandidateList::getWinner() const {
    if (count == 0) cout << "List is empty." << endl;
    else {
        int highest = 0, winner = 0;
        Node *current = first;
        do {
            if (current->getCandidate().getTotalVotes() > highest) {
                highest = current->getCandidate().getTotalVotes();
                winner = current->getCandidate().getSSN();;
            }
            current = current->getLink();
        } while (current != NULL);
        return winner;
    }
    return 0;
}

void CandidateList::printCandidateName(int ssn) const {
    Node *current = first; bool found = false;
    while (!found && current != NULL) {
        if (current->getCandidate().getSSN() == ssn) found = true;
        else current = current->getLink();
    }
    if (!found) cout << "Not found." << endl;
    else current->getCandidate().printName();
}

void CandidateList::printAllCandidates() const {
    Node *current = first;
    while (current != NULL) {
        current->getCandidate().printCandidateInfo();
        current = current->getLink();
    }
}

void CandidateList::printCandidateDivisionVotes(int ssn, int divNum) const {
    if (count == 0) cout << "List is empty." << endl;
    else {
        Node *current = first; bool found = false;
        while (!found && current != NULL) {
            if (current->getCandidate().getSSN() == ssn) {
                current->getCandidate().printCandidateDivisionVotes(divNum);
                found = true;
            }
        }
    }
}

void CandidateList::printCandidateTotalVotes(int ssn) const {
    if (count == 0) cout << "List is empty." << endl;
    else {
        Node *current = first; bool found = false;
        while (!found && current != NULL) {
            if (current->getCandidate().getSSN() == ssn) {
                current->getCandidate().printCandidateTotalVotes();
                found = true;
            }
            current = current->getLink();
        }
    }
}

void CandidateList::printFinalResult() const {
    if (count == 0) cerr << "The list is empty." << endl;
}


void CandidateList::destroyList() {
    Node *current = first;
    while (first != NULL) {
        first = first->getLink();
        delete current;
        current = first;

    }
    first = NULL;
    last = NULL;
    count = 0;
}

CandidateList::~CandidateList() { destroyList(); }
