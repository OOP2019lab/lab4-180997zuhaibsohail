#include <iostream>
#include <fstream>
#include "CricketTeam.h"
using namespace std;

CricketTeam :: CricketTeam()
{
	no_of_members=1;
	for(int i=0;i<10;i++)
	{
		Scoreinlast10matches[i]=0;
	}
	Rank=0;
	captain=" ";
	 membernames=nullptr;
	 teamName = nullptr;
}

CricketTeam :: CricketTeam(string name, int no_of_members)
{
	int l;
	no_of_members=no_of_members;
	l=strlen(teamName);
	teamName=new char[l];
	for(int i=0;i<l;i++)
	{
		teamName[i]=name[i];
	}
	for(int i=0;i<10;i++)
	{
		Scoreinlast10matches[i]=0;
	}
	 membernames=nullptr;
}

/*CricketTeam :: CricketTeam(string name_of_file)
{
	int a;
	string size;
	ifstream read;
	read.open(name_of_file);
	if(read)
	{

	}

}*/

string CricketTeam :: getcaptain()
{
	return captain;
}

int CricketTeam :: getrank()
{
	return  Rank;
}

int CricketTeam :: getteamName()
{
	return *teamName;
}

int CricketTeam :: getno_of_members()
{
	return no_of_members;
}

void CricketTeam :: setcaptain(string name)
{
	name=captain;
}

void CricketTeam :: setrank(int no)
{
	no=Rank;
}
void CricketTeam :: setteamName(string name)
{
	string *teamName = new string;
	teamName =&name;
}
void CricketTeam :: setno_of_members(int members)
{
	no_of_members=members;
}

