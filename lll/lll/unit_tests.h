#pragma once

#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

struct test_case {

	std::string unit;
	std::string description;
	bool value;
};

class unit_tests
{
public:
	unit_tests();

	void add_test(std::string _unit, std::string _description, bool _value);
	void run_tests();

private:
	std::vector<test_case> test_cases;
	std::unordered_map<std::string, int> test_count;
};

