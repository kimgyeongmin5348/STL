#include "Player.h"

Player::Player() {

}

Player::~Player() {

}

/*Player(const Player& other)
		: name(other.name), score(other.score), id(other.id), num(other.num) {
		if (other.p) {
			p = make_unique<char[]>(other.num);
			copy(other.p.get(), other.p.get() + other.num, p.get());
		}
	}*/

bool Player::operator==(const Player& rhs)const {
	return getScore() == rhs.getScore();
}

string Player::getName() const {
	return name;
}

int Player::getScore() const {
	return score;
}

size_t Player::getId() const {
	return id;
}

size_t Player::getNum() const {
	return num;
}

char* Player::getP() const{
	return p;
}

bool Player::read(istream& is)
{
	is.read((char*)this, sizeof Player);
	p = new char[num];
	is.read((char*)p, num);
	delete p;

	return bool(is);
}

void Player::show() const {
	cout << "이름: " << name << ", 아이디: " << id << ", 점수: " << score << ", 자원수: " << num << '\n' << "저장된 글자 : " << p << '\n';
}
