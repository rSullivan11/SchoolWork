#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "Person.h"

const int NUM_OF_DIVISIONS = 4;

class CandidateType : public Person {
    public:
        CandidateType();
        CandidateType(const std::string&, const std::string&, int);

        void updateVotesByDivision(int, int);

        int getTotalVotes() const;
        int getVotesByDivision(int) const;

        void printCandidateInfo() const;
        void printCandidateTotalVotes() const;
        void printCandidateDivisionVotes(int) const;

        ~CandidateType();

    private:
        int totalVotes;
        int infoArray[NUM_OF_DIVISIONS];

};

#endif
