#include <iostream>
using namespace std;

class CricketTeam
{
private:
	string * membernames;
    int no_of_members;
    char *teamName;
    int Scoreinlast10matches[10];
    int Rank;
    string captain;
public:
	CricketTeam();
	CricketTeam(string name, int no_of_members);
	CricketTeam(string name_of_file);
	string getcaptain();
	int getrank();
	int getteamName();
	int getno_of_members();
	void setcaptain(string name);
	void setrank(int no);
	void setteamName(string name);
	void setno_of_members(int members);
};