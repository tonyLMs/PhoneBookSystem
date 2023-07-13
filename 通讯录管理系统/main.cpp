#include <iostream>
#include <cstdlib>
#include <memory>
#include "phonenumber.h"
#include "phonecardnumber.h"
#include "phonebook.h"
#include "phonecardbook.h"
#include "menu.h"
#include "mycase.h"
#include "user.h"

int main()
{
	User user;
	while (true)
	{
		size_t select;
		Menu::MainMenu();
		std::cin >> select;
		switch (select)
		{
		case 0:
			std::cout << "欢迎下次使用！" << std::endl;
			system("pause");
			return 0;
			break;
		case 1:
			MyCase::Case1(user);
			break;
		case 2:
			MyCase::Case2(user);
			break;
		case 3:
			MyCase::Case3(user);
			break;
		case 4:
			MyCase::Case4(user);
			break;
		case 5:
			MyCase::Case5(user);
			break;
		case 6:
			MyCase::Case6(user);
			break;
		case 7:
			MyCase::Case7(user);
			break;
		default:
			std::cout << "输入有误，请重新输入！" << std::endl;
			system("pause");
			break;
		}
		system("cls");
	}
	return 0;
}