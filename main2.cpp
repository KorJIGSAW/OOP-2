#include <iostream>
using namespace std;
#include "WordGame.h"

int main() {
	//객체를 힙에 동적으로 생성
	WordGame* game;
	game = new WordGame("끝말잇기 게임", "아버지");
	game->run();
	delete game;
}