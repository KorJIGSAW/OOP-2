#pragma once
#ifndef WORDGAME_H
#define WORDGAME_H

#include <iostream>
#include <string>
using namespace std;
class Player; //���� ���� -> ������� ����� �����Ҷ� �ִٴ°͸� �˷��ش�.

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