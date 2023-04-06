#include <iostream>
#include <string>
using namespace std;
#include "WordGame.h"
#include "Player.h"

WordGame::WordGame(string title, string startWord) {
	this->title = title;
	this->startWord = startWord;
	this->players = NULL; //����
}

WordGame::~WordGame() {

}

bool WordGame::createPlayers() {
	cout << "���� �ձ� ������ ��zw���մϴ�" << endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�? >> ";
	int n;
	cin >> n;
	nPlayers = n;
	players = new Player[n];

	string playerName;
	for (int i = 0; i < n; i++) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ���� >> ";
		cin >> playerName;
		players[i].setName(playerName);
	}

	return true;
}

void WordGame::run() {
	createPlayers();
	string lastWord = startWord;
	cout << "���� �ܾ��" + lastWord + "�Դϴ�" << endl;

	int next = 0;
	while (true) {

		string NewWord = players[next].sayWord();
		if (!players[next].succeed(lastWord)) {
			//�ܾ ������ ���� ������ while�� �����.
			cout << players[next].getName() + "��(��) �����ϴ�." << endl;
			break;
		}
		next++;
		next = next % nPlayers;
		lastWord = NewWord;
	}
}

