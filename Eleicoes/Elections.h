#pragma once
//Write a program that allows the user to enter the last names of five candidates in a local 
// electionand the number of votes received by each candidate.The program should then output 
// each candidate’s name, the number of votes received, and the percentage of the total votes
//received by the candidate.Your program should also output the winner of the election.

#include<string>
#include<vector>

class Candidate {
private:
	
	void EnterVotes(std::string name);
public:
	Candidate();
	std::string CandidateName;
	int NumberVotes;
	float PercVotes;
	void EnterCandidate();
	
};
