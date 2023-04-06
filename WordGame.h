#pragma once
#ifndef WORDGAME_H
#define WORDGAME_H

#include <iostream>
#include <string>
using namespace std;
class Player; //전방 참조 -> 헤더에서 헤더를 참조할때 있다는것만 알려준다.

class WordGame{
	string title;
	string startWord;
	int nPlayers;
	Player* players;
	bool createPlayers();
public:

	WordGame(string title, string startWord);
	~WordGame();
	void run();
};

#endif