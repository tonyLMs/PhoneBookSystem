#include "phonebook.h"

PhoneBook::PhoneBook()
{
	std::ifstream ifs("phonebook.txt", std::ios::in);
	std::string buf[2];
	while (std::getline(ifs, buf[0]))
	{
		PhoneNumber new_person;
		std::getline(ifs, buf[1]);
		new_person.setName(buf[0]);
		new_person.setNumber(buf[1]);
		this->m_phone_book.push_back(new_person);
		this->m_phone_book_num += 1;
	}
	ifs.close();
}

PhoneBook::~PhoneBook()
{
	std::ofstream ofs("phonebook.txt", std::ios::out | std::ios::trunc);
	for (const auto& val : this->m_phone_book) ofs << val.getName() << std::endl << val.getNumber() << std::endl;
	ofs.close();
}

void PhoneBook::addPerson()
{
	if (this->m_phone_book_num == 1000)
	{
		std::cout << "����ʧ�ܣ������Ѵ����ޣ�" << std::endl;
		return;
	}
	PhoneNumber new_person;
	std::cin >> new_person;
	this->m_phone_book.push_back(new_person);
	this->m_phone_book_num += 1;
}

void PhoneBook::addPerson(const PhoneNumber& pn)
{
	this->m_phone_book.push_back(pn);
	this->m_phone_book_num += 1;
}

void PhoneBook::deletePerson()
{
	if (this->m_phone_book_num == 0)
	{
		std::cout << "ɾ��ʧ�ܣ�����Ϊ�㣡" << std::endl;
		return;
	}
	std::string target_name;
	std::cout << "������Ҫɾ����Ա��������" << std::endl;
	std::cin >> target_name;
	//C++17
	if (std::list<PhoneNumber>::iterator target_iterator = this->findPerson(target_name); target_iterator != this->m_phone_book.end())
	{
		this->m_phone_book.erase(target_iterator);
		this->m_phone_book_num -= 1;
		std::cout << "ɾ���ɹ���" << std::endl;
	}
	else std::cout << "����ʧ�ܣ�" << std::endl;
}

void PhoneBook::DisPlay() { for (const auto& val : this->m_phone_book) std::cout << val << std::endl; }

void PhoneBook::DisPlay(const std::string& target_name)
{
	//C++17
	if (std::list<PhoneNumber>::iterator target_iterator = this->findPerson(target_name); target_iterator != this->m_phone_book.end()) std::cout << *target_iterator << std::endl;
	else std::cout << "����ʧ�ܣ�" << std::endl;
}

void PhoneBook::modifyPerson()
{
	if (this->m_phone_book_num == 0)
	{
		std::cout << "�޸�ʧ�ܣ�����Ϊ�㣡" << std::endl;
		return;
	}
	std::string target_name;
	std::cout << "������Ҫ�޸���Ա��������" << std::endl;
	std::cin >> target_name;
	if (std::list<PhoneNumber>::iterator target_iterator = this->findPerson(target_name); target_iterator != this->m_phone_book.end())
	{
		PhoneNumber new_person;
		std::cin >> new_person;
		target_iterator->modifyName(new_person.getName());
		target_iterator->modifyNumber(new_person.getNumber());
		std::cout << "�޸ĳɹ���" << std::endl;
	}
	else std::cout << "����ʧ�ܣ�" << std::endl;
}

std::list<PhoneNumber>::iterator PhoneBook::findPerson(const std::string& name)
{
	return std::find_if(this->m_phone_book.begin(), this->m_phone_book.end(), [=](const PhoneNumber& pn)
		{
			return name == pn.getName();
		});
}

size_t PhoneBook::getSize() { return this->m_phone_book_num; }

std::list<PhoneNumber> PhoneBook::getCopyBook() const { return this->m_phone_book; }

void PhoneBook::Clear() 
{ 
	this->m_phone_book.clear();
	this->m_phone_book_num = 0;
}