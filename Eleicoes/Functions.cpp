#include"Elections.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

#include<vector>
using std::vector;

void Candidate::EnterCandidate() {
	cout << "Enter the last name of the candidate: " << endl;
	cin >> CandidateName;
	EnterVotes(CandidateName);
}

void Candidate::EnterVotes(string name) {
	cout << "Enter the number of votes of candidate " << name << ": " << endl;
	cin >> NumberVotes;
}

Candidate::Candidate() : CandidateName(" "), NumberVotes(0), PercVotes(0.0)
{
}
