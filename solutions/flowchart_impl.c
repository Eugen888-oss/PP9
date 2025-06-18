#include <stdio.h>

int  result = 1;

int even(int i) {
	if(i%2 == 0) return result+i;
	else if(i%2 != 0) return result*i;
}
int results(int i) {
	if(result > 1000) return result-100;
	else if(result <= 1000) return result;
}
int main () {

	int x = 10;
	for(int i=1;i<=x;i++) {
		result = even(i);
		printf("%i, %i\n", i, result);
		result = results(i);
		printf("%i, %i\n", i, result);
	}
	return 0;
}

