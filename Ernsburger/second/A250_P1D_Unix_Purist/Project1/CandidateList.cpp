#include "CandidateList.h"

// Function definitions
CandidateList::CandidateList() {}

void CandidateList::addCandidate(const CandidateType& c) {
	//if (candidates.capacity - candidates.size < 5)
	//	candidates.assign(candidates.capacity + 15);
	candidates.push_back(c);
}

int CandidateList::getWinner() const {
	int highest = 0, winner = 0;
	for (auto i : candidates) {
		if (i.getTotalVotes() > highest) {
			highest = i.getTotalVotes();
			winner = i.getSSN();;
		}
	}
    return winner;
}

void CandidateList::printCandidateName(int ssn) const {
	vector<CandidateType>::const_iterator vectIter;
	vectIter = candidates.begin();

	searchCandidateLocation(ssn, vectIter);
	
    vectIter->printName();
}

void CandidateList::printAllCandidates() const {
	for (auto i : candidates) {
        i.printCandidateInfo();
    }
    cout << endl;
}

void CandidateList::printCandidateDivisionVotes(int ssn, int divNum) const {
	vector<CandidateType>::const_iterator vectIter;
	vectIter = candidates.begin();

	int votes = 0;
	searchCandidateLocation(ssn, vectIter);

    votes = vectIter->getVotesByDivision(divNum);
    cout << "Division " << divNum << ": " << votes << endl;
}

void CandidateList::printCandidateTotalVotes(int ssn) const {
	vector<CandidateType>::const_iterator vectIter;
	vectIter = candidates.begin();

	int votes = 0;
	searchCandidateLocation(ssn, vectIter);
	
    votes = vectIter->getTotalVotes();
	cout << "Total votes: " << votes << endl;
}

void CandidateList::printFinalResult() const {
// ------------{ Find largest }-------------------------------
	vector<CandidateType>::const_iterator vectIter;
	vectIter = candidates.begin();
	CandidateType *can = NULL;
	int count = candidates.size();

    int crntMost = 0, bound = 0; // bound to ensure no doubles; since no ties
    do {
        if (vectIter->getTotalVotes() > crntMost) {
            crntMost = vectIter->getTotalVotes();
			can = vectIter._Ptr;
        }
		++vectIter;
    } while(vectIter != candidates.end());

// ----------{ END }----------------------------------------------
// ----------{ Start of Printing  --------------------------------

    cout << "\nFINAL RESULTS\n"
         << "-------------" << endl;
	cout << setw(2) << right
		 << count-- << "  "
         << can->getTotalVotes();
    cout << ' '; can->printName();
    bound = crntMost; // set largest as first bound

// ----------{ END }-----------------------------------------------
// ----------{ Find winner with respect to last winner }-----------

    for (int i = 1; i < count; ++i) {
        vectIter = candidates.begin(); crntMost = 0;
        do {
            if (vectIter->getTotalVotes() < bound &&
                vectIter->getTotalVotes() > crntMost) {
                crntMost = vectIter->getTotalVotes();
				can = vectIter._Ptr;
            }
			++vectIter;
        } while(vectIter != candidates.end());

// -----------{ Printing each new winner }---------------------------

		cout << '\n' << setw(2) << right
			 << count - i << "  ";
        cout << setw(3) << left 
			 << can->getTotalVotes();
        cout << ' '; can->printName();
        bound = crntMost; // set new winner to new bound

// ----------{ END }-------------------------------------------------
    }
	cout << endl;
}

bool CandidateList::isEmpty() const {
	return candidates.size() == 0;
}

bool CandidateList::searchCandidate(int ssn) const {
	vector<CandidateType>::const_iterator vectIter;
	return searchCandidateLocation(ssn, vectIter);
}

bool CandidateList::searchCandidateLocation(int ssn, vector<CandidateType>::const_iterator& vectIter) const {
	bool found = false;
	while (!found && vectIter != candidates.end()) {
		if (vectIter->getSSN() == ssn) found = true;
		else ++vectIter;
	}
	if (found) return true;
	return false;
}

CandidateList::~CandidateList() {}
