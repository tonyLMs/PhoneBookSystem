#include "menu.h"

void Menu::MainMenu()
{
	std::cout << "欢迎来到通讯录管理系统" << std::endl;
	std::cout << "请输入输入想要进行的操作：" << std::endl;
	std::cout << "0-退出通讯录管理系统" << std::endl;
	std::cout << "1-增加联系人员信息" << std::endl;
	std::cout << "2-删除联系人员信息" << std::endl;
	std::cout << "3-修改联系人员信息" << std::endl;
	std::cout << "4-查找联系人员信息" << std::endl;
	std::cout << "5-显示联系人员信息" << std::endl;
	std::cout << "6-移动联系人员信息" << std::endl;
	std::cout << "7-复制联系人员信息" << std::endl;
}

void Menu::Menu_Select_Book()
{
	std::cout << "请选择通讯簿：" << std::endl;
	std::cout << "0-返回" << std::endl;
	std::cout << "1-手机通讯簿" << std::endl;
	std::cout << "2-手机卡通讯簿" << std::endl;
}

void Menu::Menu_Select_Book_Move()
{
	std::cout << "请选择被移动的通讯簿：" << std::endl;
	std::cout << "0-返回" << std::endl;
	std::cout << "1-手机通讯簿" << std::endl;
	std::cout << "2-手机卡通讯簿" << std::endl;
}

void Menu::Menu_Select_Book_Copy()
{
	std::cout << "请选择被复制的通讯簿：" << std::endl;
	std::cout << "0-返回" << std::endl;
	std::cout << "1-手机通讯簿" << std::endl;
	std::cout << "2-手机卡通讯簿" << std::endl;
}