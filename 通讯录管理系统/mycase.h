#ifndef MYCASE_H
#define MYCASE_H

#include <iostream>
#include <cstdlib>
#include <memory>
#include "user.h"
#include "menu.h"

class MyCase
{
public:
	MyCase() = default;
	~MyCase() = default;
	static void Case1(User& user);
	static void Case2(User& user);
	static void Case3(User& user);
	static void Case4(User& user);
	static void Case5(User& user);
	static void Case6(User& user);
	static void Case7(User& user);
};

#endif