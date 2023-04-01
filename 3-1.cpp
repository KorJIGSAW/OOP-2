#include <iostream>
using namespace std;

class Tower {
	int height;

public:
	Tower(int r) {
		height = r;
	}
	Tower() {
		height = 1;
	}
	int getHeight();
};

int Tower::getHeight() {
	return height;
}

int main(){
	Tower myTower;
	Tower seoulTower(100);
	cout << "���̴� " << myTower.getHeight() << "����" << endl;
	cout << "���̴� " << seoulTower.getHeight() << "����" << endl;
}