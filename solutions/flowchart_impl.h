#ifndef flowchart_impl.h
#define flowchart_impl.h

int even(int result,int i) {
	        if(i%2 == 0) return result+i;
		        else if(i%2 != 0) return result*i;
}

int results(int result, int i) {
	        if(result > 1000) return result-100;
		        else if(result <= 1000) return result;
}

#endif

