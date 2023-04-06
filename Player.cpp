#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

string Player::sayWord() {
	cout << name + " >> ";
	cin >> word;
	return word;
}

bool Player::succeed(string lastWord) {
	int lastIndex = lastWord.length() - 2;

	if (lastWord.at(lastIndex) == word.at(0) && lastWord.at(lastIndex + 1) == word.at(1)) {
		return true;
	}
	else {
		return false;
	}
}
