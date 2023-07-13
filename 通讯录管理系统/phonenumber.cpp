#include "phonenumber.h"

PhoneNumber::PhoneNumber(const std::string& name, const std::string& number) : m_name(name), m_number(number) {}

void PhoneNumber::setName(const std::string& name) { if (this->m_name.empty()) this->m_name = name; }

void PhoneNumber::setNumber(const std::string& number) { if (this->m_number.empty()) this->m_number = number; }

void PhoneNumber::modifyName(const std::string& name) { this->m_name = name; }

void PhoneNumber::modifyNumber(const std::string& number) { this->m_number = number; }

std::string PhoneNumber::getName() const { return this->m_name; }

std::string PhoneNumber::getNumber() const { return this->m_number; }

std::ostream& operator<<(std::ostream& out, const PhoneNumber& phone_number)
{
	out << "姓名：" << phone_number.m_name << "\t电话号码：" << phone_number.m_number;
	return out;
}

std::istream& operator>>(std::istream& in, PhoneNumber& phone_number)
{
	std::string name, number;
	std::cout << "请输入姓名：";
	in >> name;
	std::cout << "请输入手机号码：";
	in >> number;
	phone_number.m_name = name;
	phone_number.m_number = number;
	return in;
}