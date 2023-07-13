#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

class PhoneNumber 
{
public:
	friend std::ostream& operator<<(std::ostream& out, const PhoneNumber& phone_number);
	friend std::istream& operator>>(std::istream& in, PhoneNumber& phone_number);
	PhoneNumber() = default;
	PhoneNumber(const std::string& name, const std::string& number = "11111111111");
	~PhoneNumber() = default;
	void setName(const std::string& name);
	void setNumber(const std::string& number);
	void modifyName(const std::string& name);
	void modifyNumber(const std::string& number);
	std::string getName() const;
	std::string getNumber() const;
protected:
	std::string m_name;
	std::string m_number;
};

std::ostream& operator<<(std::ostream& out, const PhoneNumber& phone_number);
std::istream& operator>>(std::istream& in, PhoneNumber& phone_number);

#endif