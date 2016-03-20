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
	cout << endl;
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
    else {

// ------------{ Find largest }-------------------------------

        Node *current = first, *can =NULL;
        int crntMost = 0, bound = 0; // bound to ensure no can prints twice; since no ties
        do {
            if (current->getCandidate().getTotalVotes() > crntMost) {
                crntMost = current->getCandidate().getTotalVotes();
                can = current;
            }

            current = current->getLink();
        } while(current != NULL);

// ----------{ END }----------------------------------------------
// ----------{ Start of Printing  --------------------------------

        cout << "\nFINAL RESULTS\n"
             << "-------------" << endl;
		cout << setw(2) << right
			 << count << "  "
             << can->getCandidate().getTotalVotes();
        cout << ' '; can->getCandidate().printName();
        bound = crntMost; // set largest as first bound

// ----------{ END }-----------------------------------------------
// ----------{ Find winner with respect to last winner }-----------

        for (int i = 1; i < count; ++i) {
            current = first; crntMost = 0;
            do {
                if (current->getCandidate().getTotalVotes() < bound &&
                    current->getCandidate().getTotalVotes() > crntMost) {
                    crntMost = current->getCandidate().getTotalVotes();
                    can = current;
                }

                current = current->getLink();
            } while(current != NULL);

// -----------{ Printing each new winner }---------------------------

			cout << '\n' << setw(2) << right
				 << count - i << "  ";
            cout << setw(3) << left 
				 << can->getCandidate().getTotalVotes();
            cout << ' '; can->getCandidate().printName();
            bound = crntMost; // set new winner to new bound

// ----------{ END }-------------------------------------------------
        }
    }
	cout << endl;
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
