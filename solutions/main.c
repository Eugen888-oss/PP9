#include <stdio.h>
#include "flowchart_impl.h"

int main () {

	int  result = 1;
	int x = 10;
	for(int i=1;i<=x;i++) {
		result = even(result,i);
		printf("%i, %i\n", i, result);
		result = results(result,i);
		printf("%i, %i\n", i, result);
	}
	return 0;
}

