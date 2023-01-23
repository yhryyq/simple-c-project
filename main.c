#include<stdio.h>
#include<function.h>

/* This is comment
*/
void getAdd(int a)
{
	int b = 3+1; //comment 1
	int c = addOne(a,b);
	printf("%d",c);
}
/*
comment block
line1
line11
*/


int main(){
int numb = 2;
numb = numb + 1;
getAdd(numb);
return 0;
}
