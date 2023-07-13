#ifndef BOOK_H
#define BOOK_H

#include "phonenumber.h"

class Book
{
public:
	Book() = default;
	~Book() = default;
	virtual void addPerson() = 0;
	virtual void deletePerson() = 0;
	virtual void DisPlay() = 0;
	virtual void DisPlay(const std::string& target_name) = 0;
	virtual void modifyPerson() = 0;
	virtual size_t getSize() = 0;
	virtual void Clear() = 0;
};

#endif