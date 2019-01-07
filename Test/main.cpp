#include "stdio.h"
#include "assert.h"
#include <iostream>

int main(void) {
	if (_MSC_VER < 1920) {
		printf("_MSC_VER is %d, should be >= 1920", _MSC_VER);
		std::cout << std::endl;
		return 1;
	}
	else
		printf("All good!");
	std::cout << std::endl;
	return 0; 
}