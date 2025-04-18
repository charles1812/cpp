#include "repertory.hpp"

Contact::Contact() {
}

Contact::~Contact() {
}

void	Contact::setName(str name) {
	this->name = name;
}

void	Contact::setLast(str last) {
	this->last = last;
}

void	Contact::setNick(str nick) {
	this->nick = nick;
}

void	Contact::setPhone(str phone) {
	this->phone = phone;
}

void	Contact::setSecret(str secret) {
	this->secret = secret;
}

str	Contact::getName() const {
	return this->name;
}

str Contact::getLast() const {
	return this->last;
}

str Contact::getNick() const {
	return this->nick;
}

str Contact::getPhone() const {
	return this->phone;
}

str	Contact::getSecret() const {
	return this->secret;
}