#include <stdio.h>
const char* weekday(int d) {
	switch (d) {
		case 1: return "Monday"; break;
		case 2: return "Tuesday"; break;
		case 3: return "Wednesday"; break;
		case 4: return "Thursday"; break;
		case 5: return "Fryday"; break;
		case 6: return "Saturday"; break;
		case 7: return "Sunday"; break;
		default: return "No weekday"; break;
	}
}
int main() {
	for(int d=1;d<=7;d++) {
		printf("%s\n",weekday(d));
	}
	return 0;
}

