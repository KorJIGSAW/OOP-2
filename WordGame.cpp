#include <iostream>
#include <string>
using namespace std;
#include "WordGame.h"
#include "Player.h"

WordGame::WordGame(string title, string startWord) {
	this->title = title;
	this->startWord = startWord;
	this->players = NULL; //질문
}

WordGame::~WordGame() {

}

bool WordGame::createPlayers() {
	cout << "끝말 잇기 게임을 시zw작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇명입니까? >> ";
	int n;
	cin >> n;
	nPlayers = n;
	players = new Player[n];

	string playerName;
	for (int i = 0; i < n; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이 >> ";
		cin >> playerName;
		players[i].setName(playerName);
	}

	return true;
}

void WordGame::run() {
	createPlayers();
	string lastWord = startWord;
	cout << "시작 단어는" + lastWord + "입니다" << endl;

	int next = 0;
	while (true) {

		string NewWord = players[next].sayWord();
		if (!players[next].succeed(lastWord)) {
			//단어가 연결이 되지 않으면 while을 벗어난다.
			cout << players[next].getName() + "이(가) 졌습니다." << endl;
			break;
		}
		next++;
		next = next % nPlayers;
		lastWord = NewWord;
	}
}

