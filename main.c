#include<stdio.h>
#include<function.h>

void getAdd(int a)
{
	int b = 3+1;
	int c = addOne(a,b);
	printf("%d",c);
}

int main(){
int numb = 1;
numb = numb + 1;
getAdd(numb);
return 0;
}
