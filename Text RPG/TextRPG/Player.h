#pragma once
#include <string>

using namespace std;

class Player
{
public:
	Player();
	~Player();

	string name;
	int hp;
	int mp;
	int gold;
};
