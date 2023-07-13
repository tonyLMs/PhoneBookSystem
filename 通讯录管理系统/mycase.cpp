#include "mycase.h"

void MyCase::Case1(User& user)
{
	system("cls");
	size_t select;
Loop_Select1:
	Menu::Menu_Select_Book();
	std::cin >> select;
	switch (select)
	{
	case 0:
		return;
		break;
	case 1:
		user.addPerson(user.getPhoneBook());
		system("pause");
		break;
	case 2:
		user.addPerson(user.getPhoneCardBook());
		system("pause");
		break;
	default:
		std::cout << "输入有误，请重新输入！" << std::endl;
		system("pause");
		system("cls");
		goto Loop_Select1;
		break;
	}
}

void MyCase::Case2(User& user)
{
	system("cls");
	size_t select;
Loop_Select2:
	Menu::Menu_Select_Book();
	std::cin >> select;
	switch (select)
	{
	case 0:
		return;
		break;
	case 1:
		user.deletePerson(user.getPhoneBook());
		system("pause");
		break;
	case 2:
		user.deletePerson(user.getPhoneCardBook());
		system("pause");
		break;
	default:
		std::cout << "输入有误，请重新输入！" << std::endl;
		system("pause");
		system("cls");
		goto Loop_Select2;
		break;
	}
}

void MyCase::Case3(User& user)
{
	system("cls");
	size_t select;
Loop_Select3:
	Menu::Menu_Select_Book();
	std::cin >> select;
	switch (select)
	{
	case 0:
		return;
		break;
	case 1:
		user.modifyPerson(user.getPhoneBook());
		system("pause");
		break;
	case 2:
		user.modifyPerson(user.getPhoneCardBook());
		system("pause");
		break;
	default:
		std::cout << "输入有误，请重新输入！" << std::endl;
		system("pause");
		system("cls");
		goto Loop_Select3;
		break;
	}
}

void MyCase::Case4(User& user)
{
	std::string target_name;
	system("cls");
	size_t select;
Loop_Select4:
	Menu::Menu_Select_Book();
	std::cin >> select;
	switch (select)
	{
	case 0:
		return;
		break;
	case 1:
		std::cout << "请输入要查找人员的姓名：";
		std::cin >> target_name;
		user.DisPlay(user.getPhoneBook(), target_name);
		system("pause");
		break;
	case 2:
		std::cout << "请输入要查找人员的姓名：";
		std::cin >> target_name;
		user.DisPlay(user.getPhoneCardBook(), target_name);
		system("pause");
		break;
	default:
		std::cout << "输入有误，请重新输入！" << std::endl;
		system("pause");
		system("cls");
		goto Loop_Select4;
		break;
	}
}

void MyCase::Case5(User& user)
{
	system("cls");
	size_t select;
Loop_Select5:
	Menu::Menu_Select_Book();
	std::cin >> select;
	switch (select)
	{
	case 0:
		return;
		break;
	case 1:
		user.DisPlay(user.getPhoneBook());
		system("pause");
		break;
	case 2:
		user.DisPlay(user.getPhoneCardBook());
		system("pause");
		break;
	default:
		std::cout << "输入有误，请重新输入！" << std::endl;
		system("pause");
		system("cls");
		goto Loop_Select5;
		break;
	}
}

void MyCase::Case6(User& user)
{
	system("cls");
	size_t select;
Loop_Select6:
	Menu::Menu_Select_Book_Move();
	std::cin >> select;
	switch (select)
	{
	case 0:
		return;
		break;
	case 1:
	case 2:
		user.Move(select);
		std::cout << "移动成功" << std::endl;
		system("pause");
		break;
	default:
		std::cout << "输入有误，请重新输入！" << std::endl;
		system("pause");
		system("cls");
		goto Loop_Select6;
		break;
	}
}

void MyCase::Case7(User& user)
{
	system("cls");
	size_t select;
Loop_Select7:
	Menu::Menu_Select_Book_Copy();
	std::cin >> select;
	switch (select)
	{
	case 0:
		return;
		break;
	case 1:
	case 2:
		user.Copy(select);
		std::cout << "复制成功！" << std::endl;
		system("pause");
		break;
	default:
		std::cout << "输入有误，请重新输入！" << std::endl;
		system("pause");
		system("cls");
		goto Loop_Select7;
		break;
	}
}