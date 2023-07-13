#include "user.h"

User::User()
{
	this->phone_book = std::make_shared<PhoneBook>();
	this->phone_card_book = std::make_shared<PhoneCardBook>();
}

void User::addPerson(std::shared_ptr<Book> book) { book->addPerson(); }

void User::deletePerson(std::shared_ptr<Book> book) { book->deletePerson(); }

void User::DisPlay(std::shared_ptr<Book> book) { book->DisPlay(); }

void User::DisPlay(std::shared_ptr<Book> book, const std::string& name) { book->DisPlay(name); }

void User::modifyPerson(std::shared_ptr<Book> book) { book->modifyPerson(); }

std::shared_ptr<PhoneBook> User::getPhoneBook() { return this->phone_book; }

std::shared_ptr<PhoneCardBook> User::getPhoneCardBook() { return this->phone_card_book; }


void User::Move(const size_t& select)
{
	this->Copy(select);
	if (select == 1) this->getPhoneBook()->Clear();
	else if (select == 2) this->getPhoneCardBook()->Clear();
}

void User::Copy(const size_t& select)
{
	if (select == 1)
	{
		for (const auto& val : this->getPhoneBook()->getCopyBook())
		{
			PhoneCardNumber pcn;
			pcn.setName(val.getName());
			pcn.setNumber(val.getNumber());
			this->getPhoneCardBook()->addPerson(pcn);
		}
	}
	else if (select == 2)
	{
		for (const auto& val : this->getPhoneCardBook()->getCopyBook())
		{
			PhoneNumber pn;
			pn.setName(val.getName());
			pn.setNumber(val.getNumber());
			this->getPhoneBook()->addPerson(pn);
		}
	}
}