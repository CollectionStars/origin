#pragma once
#include <iostream>
#include <string>
namespace CounterClass {
	class Counter
	{
		int count;

	public:

		Counter(int num = 0);

		void add();

		void sub();

		int get_count();

		void test_counter();
	};
}
