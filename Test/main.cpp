#include "stdio.h"
#include "assert.h"

int main(void) {
	if (_MSC_VER < 1920) {
		printf("_MSC_VER is %d, should be >= 1920\n", _MSC_VER);
		assert(_MSC_VER >= 1920);
	}
	else
		printf("All good!\n");
	return 0; 
}