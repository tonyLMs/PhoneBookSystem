#include "menu.h"

void Menu::MainMenu()
{
	std::cout << "��ӭ����ͨѶ¼����ϵͳ" << std::endl;
	std::cout << "������������Ҫ���еĲ�����" << std::endl;
	std::cout << "0-�˳�ͨѶ¼����ϵͳ" << std::endl;
	std::cout << "1-������ϵ��Ա��Ϣ" << std::endl;
	std::cout << "2-ɾ����ϵ��Ա��Ϣ" << std::endl;
	std::cout << "3-�޸���ϵ��Ա��Ϣ" << std::endl;
	std::cout << "4-������ϵ��Ա��Ϣ" << std::endl;
	std::cout << "5-��ʾ��ϵ��Ա��Ϣ" << std::endl;
	std::cout << "6-�ƶ���ϵ��Ա��Ϣ" << std::endl;
	std::cout << "7-������ϵ��Ա��Ϣ" << std::endl;
}

void Menu::Menu_Select_Book()
{
	std::cout << "��ѡ��ͨѶ����" << std::endl;
	std::cout << "0-����" << std::endl;
	std::cout << "1-�ֻ�ͨѶ��" << std::endl;
	std::cout << "2-�ֻ���ͨѶ��" << std::endl;
}

void Menu::Menu_Select_Book_Move()
{
	std::cout << "��ѡ���ƶ���ͨѶ����" << std::endl;
	std::cout << "0-����" << std::endl;
	std::cout << "1-�ֻ�ͨѶ��" << std::endl;
	std::cout << "2-�ֻ���ͨѶ��" << std::endl;
}

void Menu::Menu_Select_Book_Copy()
{
	std::cout << "��ѡ�񱻸��Ƶ�ͨѶ����" << std::endl;
	std::cout << "0-����" << std::endl;
	std::cout << "1-�ֻ�ͨѶ��" << std::endl;
	std::cout << "2-�ֻ���ͨѶ��" << std::endl;
}