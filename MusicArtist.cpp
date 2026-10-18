#include "MusicArtist.h"

MusicArtist::MusicArtist() {
	ArtistName = "Billie Eilish";
	NumofSongs = 761;
	Hitcharts = 'Y';
	Popular = true;
}

MusicArtist::MusicArtist(string s, int i, char c, bool b) {
	ArtistName = s;
	NumofSongs = i;
	Hitcharts = c;
	Popular = b;
}

void MusicArtist::setArtistName(string s) {
	ArtistName = s;
}

void MusicArtist::setNumofSongs(int i) {
	NumofSongs = i;
}

void MusicArtist::setHitcharts(char c) {
	Hitcharts = c;
}

void MusicArtist::setPopular(bool b) {
	Popular = b;
}

string MusicArtist::getArtistName() {
	return ArtistName;
}

int MusicArtist::getNumofSongs() {
	return NumofSongs;
}

char MusicArtist::getHitcharts() {
	return Hitcharts;
}

bool MusicArtist::getPopular() {
	return Popular;
}

 void MusicArtist::printObject() {
	 cout << "Artist: " << ArtistName << ", Number of Songs: " << NumofSongs << ", Has Hit the Charts this Year: " << Hitcharts << ", Popular: " << (Popular ? "True" : "False") << endl;
}

 int MusicArtist::Compare(MusicArtist M) {
	 if (NumofSongs > M.NumofSongs) {
		 cout << ArtistName << " has more songs." << endl;
		 return -1;
	 }
	 else {
		 if (NumofSongs < M.NumofSongs) {
			 cout << M.ArtistName << " has more songs." << endl;
			 return 1;
		 }
		 else {
			 return 0;
		 }
	 }
}