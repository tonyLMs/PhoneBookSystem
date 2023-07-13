#ifndef PHONECARDNUMBER_H
#define PHONECARDNUMBER_H

#include <iostream>
#include <string>
#include "phonenumber.h"

class PhoneCardNumber : public PhoneNumber
{
public:
	friend std::ostream& operator<<(std::ostream& out, const PhoneCardNumber& phone_card_number);
	friend std::istream& operator>>(std::istream& in, PhoneCardNumber& phone_card_number);
	PhoneCardNumber() = default;
	PhoneCardNumber(const std::string& name, const std::string& number, const std::string& address, const std::string& QQ_number);
	~PhoneCardNumber() = default;
	void setAddress(const std::string& address);
	void setQQNumber(const std::string& QQ_number);
	void modifyAddress(const std::string& address);
	void modifyQQNumber(const std::string& QQ_number);
	std::string getAddress() const;
	std::string getQQNumber() const;
private:
	std::string m_address;
	std::string m_QQ_number;
};

std::ostream& operator<<(std::ostream& out, const PhoneCardNumber& phone_card_number);
std::istream& operator>>(std::istream& in, PhoneCardNumber& phone_card_number);

#endif