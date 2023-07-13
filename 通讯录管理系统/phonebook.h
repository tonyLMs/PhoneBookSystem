#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include "book.h"
#include "phonenumber.h"

class PhoneBook : public Book
{
public:
	PhoneBook();
	~PhoneBook();
	virtual void addPerson() override;
	void addPerson(const PhoneNumber& pn);
	virtual void deletePerson() override;
	virtual void DisPlay() override;
	virtual void DisPlay(const std::string& target_name) override;
	virtual void modifyPerson() override;
	virtual size_t getSize() override;
	virtual void Clear() override;
	//输入姓名返回找到目标的迭代器
	std::list<PhoneNumber>::iterator findPerson(const std::string& name);
	std::list<PhoneNumber> getCopyBook() const;
private:
	std::list<PhoneNumber> m_phone_book;
	size_t m_phone_book_num = 0;
};

#endif