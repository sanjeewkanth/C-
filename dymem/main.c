#include "func.h"

int main()
{
	int* x = create_array(5);
	*x = 10;
	printf("%d\n",*x);
	return 0;
}


