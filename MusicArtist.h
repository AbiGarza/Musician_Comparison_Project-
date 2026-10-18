#pragma once
#include <iostream>
#include <string>
using namespace std;

class MusicArtist
{
private:
	string ArtistName;
	int NumofSongs;
	char Hitcharts;
	bool Popular;

public:
	MusicArtist();
	MusicArtist(string, int, char, bool);

	void setArtistName(string);
	void setNumofSongs(int);
	void setHitcharts(char);
	void setPopular(bool);

	string getArtistName();
	int getNumofSongs();
	char getHitcharts();
	bool getPopular();

	void printObject();
	int Compare(MusicArtist M);
};

