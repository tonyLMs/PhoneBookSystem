#ifndef PHONECARDBOOK_H
#define PHONECARDBOOK_H

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include "book.h"
#include "phonecardnumber.h"

class PhoneCardBook : public Book
{
public:
	PhoneCardBook();
	~PhoneCardBook();
	virtual void addPerson() override;
	void addPerson(const PhoneCardNumber& pcn);
	virtual void deletePerson() override;
	virtual void DisPlay() override;
	virtual void DisPlay(const std::string& target_name) override;
	virtual void modifyPerson() override;
	virtual size_t getSize() override;
	virtual void Clear() override;
	//输入姓名返回找到目标的迭代器
	std::list<PhoneCardNumber>::iterator findPerson(const std::string& name);
	std::list<PhoneCardNumber> getCopyBook() const;
private:
	std::list<PhoneCardNumber> m_phone_card_book;
	size_t m_phone_card_book_num = 0;
};

#endif