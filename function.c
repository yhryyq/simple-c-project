#include "function.h"

int addOne(int a,int b)
{
	int c = 1;
	result = a+ b+ c -1+2;
	result = result + 3;
	useAPI(result);
	return result;
}

void useAPI(int x){
	int y = 2*x;
	y = y +1;
	y = y - 4;
	Py_ABS(y);
}
