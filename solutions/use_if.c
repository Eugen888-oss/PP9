#include<stdio.h>

const char* sign_of(int x) {
		if(x > 0) return "positive";
			else if(x == 0) return "zero";
				else return "negative";
}

int main() {
		for(int i=-2; i<=2; i++) {
				printf("%i is %s\n",i, sign_of(i));
					}
			return 0;
}

