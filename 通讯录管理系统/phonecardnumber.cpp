#include "phonecardnumber.h"

PhoneCardNumber::PhoneCardNumber(const std::string& name, const std::string& number, const std::string& address, const std::string& QQ_number) : PhoneNumber(name, number), m_address(address), m_QQ_number(QQ_number) {}

void PhoneCardNumber::setAddress(const std::string& address) { if (this->m_address.empty()) this->m_address = address; }

void PhoneCardNumber::setQQNumber(const std::string& QQ_number) { if (this->m_QQ_number.empty()) this->m_QQ_number = QQ_number; }

void PhoneCardNumber::modifyAddress(const std::string& address) { this->m_address = address; }

void PhoneCardNumber::modifyQQNumber(const std::string& QQ_number) { this->m_QQ_number = QQ_number; }

std::string PhoneCardNumber::getAddress() const { return this->m_address; }

std::string PhoneCardNumber::getQQNumber() const { return this->m_QQ_number; }

std::ostream& operator<<(std::ostream& out, const PhoneCardNumber& phone_card_number)
{
	out << "ĞÕÃû£º" << phone_card_number.m_name << "\tµç»°ºÅÂë£º" << phone_card_number.m_number << "\t¼®¹á£º" << phone_card_number.m_address << "\tQQ£º" << phone_card_number.m_QQ_number;
	return out;
}

std::istream& operator>>(std::istream& in, PhoneCardNumber& phone_card_number)
{
	std::string name, number, address, QQ_number;
	std::cout << "ÇëÊäÈëĞÕÃû£º";
	in >> name;
	std::cout << "ÇëÊäÈëÊÖ»úºÅÂë£º";
	in >> number;
	std::cout << "ÇëÊäÈë¼®¹á£º";
	in >> address;
	std::cout << "ÇëÊäÈëQQ£º";
	in >> QQ_number;
	phone_card_number.m_name = name;
	phone_card_number.m_number = number;
	phone_card_number.m_address = address;
	phone_card_number.m_QQ_number = QQ_number;
	return in;
}