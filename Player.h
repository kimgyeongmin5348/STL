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
	unique_ptr<char[]> p{};

public:
	Player();
	~Player();

	Player(const Player& other);  //복사 생성자
	Player& operator=(const Player& other); // 복사 대입 연산자.
	Player(Player&&); // 이동 생성자
	Player& operator=(Player&&); // 이동 할당 연산자

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
