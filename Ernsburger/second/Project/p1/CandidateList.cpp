#include "CandidateList.h"

// Function definitions
CandidateList::CandidateList() {
    first = NULL;
    last = NULL;
    count = 0;
}

void CandidateList::addCandidate(CandidateType c) {
    Node *add = new Node(c, NULL);
    last->getLink()->setLink(add);
    last = add;
}

int CandidateList::getWinner() const {
    if (count == 0) cout << "The list is empty." << endl;
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
        current = current->getLink();
    }
    if (!found) cout << "Not found." << endl;
    else current->getCandidate().printName();
}

void CandidateList::printAllCandidates() const {
    Node *current = first;
    while (current != NULL) {
        current->getCandidate().printCandidateInfo();
    }
}

void CandidateList::printCandidateDivisionVotes(int ssn, int divNum) const {
    if (count == 0) cout << "The list is empty." << endl;
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
    if (count == 0) cout << "The list is empty." << endl;
    else {
        Node *current = first; bool found = false;
        while (!found && current != NULL) {
            if (current->getCandidate().getSSN() == ssn) {
                current->getCandidate().printCandidateTotalVotes();
                found = true;
            }
        }
    }
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
}

CandidateList::~CandidateList() { destroyList(); }
