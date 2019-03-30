#include "stdafx.h"
#include "iostream"
#include "iomanip"
using namespace std;
//多级指针中子函数修改main函数临时变量的值 
function(int **q){  //实际上是引用传递
	int i=123;
	*q=&i;
	printf("i的地址%#x\n",&i);
}
int main()
{
		int *p;
		function(&p);
		printf("p的值为%#x\n",p);
		system("pause");
}
