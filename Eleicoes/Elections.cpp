#include"Elections.h"
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

#include<vector>
using std::vector;

int main() 
{
	vector<Candidate> cand(5); //Initializing 5 candidates!
	int total_votes(0);
	vector<int> winner(2,0);

	for (int i = 0; i < 5; i++) 
	{
		cand[i].EnterCandidate();
		total_votes += cand[i].NumberVotes;
		if (cand[i].NumberVotes > winner[1])
		{
			winner[0] = i;
			winner[1] = cand[i].NumberVotes;
		}
	}

	for (int i = 0; i < 5; i++) {
		cand[i].PercVotes = ((float)(cand[i].NumberVotes) / total_votes)*100;
		cout << cand[i].CandidateName << endl;
		cout << "Number of votes: " << cand[i].NumberVotes << endl;
		cout << "Percentage of votes: " << cand[i].PercVotes << "%" << endl;
	}
	cout << "-------------------" << endl;
	cout << "The winner is ... " << endl ;
	cout << cand[winner[0]].CandidateName << endl;
	cout << "Number of votes: " << cand[winner[0]].NumberVotes << endl;
	cout << "Percentage of votes: " << cand[winner[0]].PercVotes << "%" << endl;

	return 0;
}