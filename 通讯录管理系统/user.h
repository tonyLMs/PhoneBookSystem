#ifndef USER_H
#define USER_H

#include <memory>
#include <string>
#include <cstdlib>
#include "book.h"
#include "phonebook.h"
#include "phonecardbook.h"

class User
{
public:
	User();
	~User() = default;
	void addPerson(std::shared_ptr<Book> book);
	void deletePerson(std::shared_ptr<Book> book);
	void DisPlay(std::shared_ptr<Book> book);
	void DisPlay(std::shared_ptr<Book> book, const std::string& name);
	void modifyPerson(std::shared_ptr<Book> book);
	std::shared_ptr<PhoneBook> getPhoneBook();
	std::shared_ptr<PhoneCardBook> getPhoneCardBook();
	void Move(const size_t& select);
	void Copy(const size_t& select);
private:
	std::shared_ptr<PhoneBook> phone_book;
	std::shared_ptr<PhoneCardBook> phone_card_book;
};

#endif