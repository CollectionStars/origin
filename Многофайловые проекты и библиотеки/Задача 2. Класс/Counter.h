#pragma once

#ifndef _COUNTER_H_
#define _COUNTER_H_


#include <iostream>
#include <string>

class Counter
{
	int count;

public:

	Counter() :count(1) {}

	Counter(int num) :count(num) {}

	void add();

	void sub();

	int get_count();

	void test_counter();
};

#endif // !_COUNTER_H_#pragma once
