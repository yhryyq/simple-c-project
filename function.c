#include "function.h"

int addOne(int a,int b)
{
	int c = 1;
	result = a+ b+ c;
	useAPI(result);
	return result;
}

void useAPI(int x){
	int y = 2*x;
	y = y +1;
	Py_ABS(y);
}
