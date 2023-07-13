#include "phonecardbook.h"

PhoneCardBook::PhoneCardBook()
{
	std::ifstream ifs("phonecardbook.txt", std::ios::in);
	std::string buf[4];
	while (std::getline(ifs, buf[0]))
	{
		PhoneCardNumber new_person;
		std::getline(ifs, buf[1]);
		std::getline(ifs, buf[2]);
		std::getline(ifs, buf[3]);
		new_person.setName(buf[0]);
		new_person.setNumber(buf[1]);
		new_person.setAddress(buf[2]);
		new_person.setQQNumber(buf[3]);
		this->m_phone_card_book.push_back(new_person);
		this->m_phone_card_book_num += 1;
	}
	ifs.close();
}

PhoneCardBook::~PhoneCardBook()
{
	std::ofstream ofs("phonecardbook.txt", std::ios::out | std::ios::trunc);
	for (const auto& val : this->m_phone_card_book) ofs << val.getName() << std::endl << val.getNumber() << std::endl << val.getAddress() << std::endl << val.getQQNumber() << std::endl;
	ofs.close();
}

void PhoneCardBook::addPerson()
{
	if (this->m_phone_card_book_num == 1000)
	{
		std::cout << "加入失败！" << std::endl;
		return;
	}
	PhoneCardNumber new_person;
	std::cin >> new_person;
	this->m_phone_card_book.push_back(new_person);
	this->m_phone_card_book_num += 1;
}

void PhoneCardBook::addPerson(const PhoneCardNumber& pcn)
{
	this->m_phone_card_book.push_back(pcn);
	this->m_phone_card_book_num += 1;
}

void PhoneCardBook::deletePerson()
{
	if (this->m_phone_card_book_num == 0)
	{
		std::cout << "删除失败！" << std::endl;
		return;
	}
	std::string target_name;
	std::cout << "请输入要删除人员的姓名：" << std::endl;
	std::cin >> target_name;
	//C++17
	if (std::list<PhoneCardNumber>::iterator target_iterator = this->findPerson(target_name); target_iterator != this->m_phone_card_book.end())
	{
		this->m_phone_card_book.erase(target_iterator);
		this->m_phone_card_book_num -= 1;
		std::cout << "删除成功！" << std::endl;
	}
	else std::cout << "查找失败！" << std::endl;
}

void PhoneCardBook::DisPlay() { for (const auto& val : this->m_phone_card_book) std::cout << val << std::endl; }

void PhoneCardBook::DisPlay(const std::string& target_name)
{
	//C++17
	if (std::list<PhoneCardNumber>::iterator target_iterator = this->findPerson(target_name); target_iterator != this->m_phone_card_book.end()) std::cout << *target_iterator << std::endl;
	else std::cout << "查找失败！" << std::endl;
}

void PhoneCardBook::modifyPerson()
{
	if (this->m_phone_card_book_num == 0)
	{
		std::cout << "修改失败！" << std::endl;
		return;
	}
	std::string target_name;
	std::cout << "请输入要修改人员的姓名：" << std::endl;
	std::cin >> target_name;
	if (std::list<PhoneCardNumber>::iterator target_iterator = this->findPerson(target_name); target_iterator != this->m_phone_card_book.end())
	{
		PhoneCardNumber new_person;
		std::cin >> new_person;
		target_iterator->modifyName(new_person.getName());
		target_iterator->modifyNumber(new_person.getNumber());
		target_iterator->modifyAddress(new_person.getAddress());
		target_iterator->modifyQQNumber(new_person.getQQNumber());
		std::cout << "修改成功！" << std::endl;
	}
	else std::cout << "查找失败！" << std::endl;
}

//输入姓名返回找到目标的迭代器
std::list<PhoneCardNumber>::iterator PhoneCardBook::findPerson(const std::string& name)
{
	return std::find_if(this->m_phone_card_book.begin(), this->m_phone_card_book.end(), [=](const PhoneCardNumber& pcn)
		{
			return name == pcn.getName();
		});
}

size_t PhoneCardBook::getSize() { return this->m_phone_card_book_num; }

std::list<PhoneCardNumber> PhoneCardBook::getCopyBook() const { return this->m_phone_card_book; }

void PhoneCardBook::Clear()
{
	this->m_phone_card_book.clear();
	this->m_phone_card_book_num = 0;
}