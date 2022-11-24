#include "unit_tests.h"

unit_tests::unit_tests()
{
}

void unit_tests::add_test(std::string _unit, std::string _description, bool _value)
{
	test_case t;
	t.unit = _unit;
	t.description = _description;
	t.value = _value;

	test_cases.push_back(t);

}

void unit_tests::run_tests()
{
	for (test_case t : test_cases) {
		if (test_count.find(t.unit) == test_count.end()) {
			test_count[t.unit] = 1;

		}
		else {
			test_count[t.unit] = test_count[t.unit] + 1;
		}
		std::cout << t.unit << " Test case #" << test_count[t.unit] << std::endl;
		std::cout << t.description << std::endl;
		_ASSERT((t.value == true));
		std::cout << "passed" << std::endl;
		std::cout << std::endl;
	}
}