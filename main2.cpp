#include <iostream>
using namespace std;
#include "WordGame.h"

int main() {
	//��ü�� ���� �������� ����
	WordGame* game;
	game = new WordGame("�����ձ� ����", "�ƹ���");
	game->run();
	delete game;
}