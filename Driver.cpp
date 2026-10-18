#include <iostream>
#include <string>
#include "MusicArtist.h"
using namespace std;

int main() {
	MusicArtist M1;
	MusicArtist M2("J Cole", 746, 'N', true);
	MusicArtist M3("Madilyn Mei", 104, 'N', false);

	M1.printObject();
	M2.printObject();
	M3.printObject();

	cout << endl;

	cout << M1.Compare(M2) << endl;

	return 0;
}