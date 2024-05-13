#pragma once

#include <algorithm>
#include <array>
#include <deque>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <list>
#include <memory>
#include <numeric>
#include <print>
#include <random>
#include <string>
#include <vector>
#include <ranges>

using namespace std;

class Player {
private:
	string name{};
	int score{};
	size_t id{};
	size_t num{};
	char* p{}; // 흠... 원래것으로 일단 못 하겠어서 이렇게 함.

public:
	Player();
	~Player();

	bool operator==(const Player& rhs)const;
	string getName() const;
	int getScore() const;
	size_t getId() const;
	size_t getNum() const;
	char* getP() const;

	bool read(istream& is);
	void show() const;

	friend ostream& operator<<(ostream& os, const Player& player) {
		os << "Player ID : " << player.id << ", Name : " << player.name;
		return os;
	}

};
