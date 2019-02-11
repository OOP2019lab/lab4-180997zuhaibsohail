
#include <iostream>
#include "CricketTeam.h"
using namespace std;


int main()
{
	CricketTeam otherTeam;
	//CricketTeam  Pakistan("data.txt");
	CricketTeam();
	string * membernames;
	membernames=new string[];
    int no_of_members;
	cout<<"enter no of members :"<<endl;
	cin>>no_of_members;
	cout<<"enter names of members:"<<endl;
	for(int i=0;i<no_of_members;i++)
	{
		for(int j=0;j<20;j++)
		{
			cin>>membernames[i][j];
		}
	}
	for(int i=0;i<no_of_members;i++)
	{
		for(int j=0;j<20;j++)
		{
			cout<<membernames[i][j]<<endl;
		}
	}
    char *teamName;
	teamName=new char [20];
	cin>>teamName;
    int Scoreinlast10matches[10];
	for(int i=0;i<10;i++)
	{
		cin>>Scoreinlast10matches[i];}
    int Rank;
	cout<<"enter rank of team:"<<endl;
	cin>>Rank;
	cout<<Rank;
    string captain[21];
	cout<<"enter name of captain: "<<endl;
	std::cin,captain[21];
	std::cout,captain[21];
	otherTeam.getcaptain();
	otherTeam.getrank();
	otherTeam.getteamName();
	otherTeam.getno_of_members();
    otherTeam.setcaptain(captain[21]);
    otherTeam.setrank(Rank);
    otherTeam.setteamName(teamName);
    otherTeam.setno_of_members(no_of_members);


    delete teamName;
    delete []membernames;



	//system("pause");
	return 0;
}
