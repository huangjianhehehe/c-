
#include "pch.h"
#include <iostream>
#include "iostream"
#include "iomanip"
using namespace std;
int* function() {
	int arr1[] = { 1,2,3,4,5 };
	int* p = &arr1[0];
	printf("arr1�ĵ�ַ%#x\n", arr1);
	return p;
}
int *function2() {
	int arr2[] = {5,4,3,2,1};
	int* p = &arr2[0];
	printf("arr2�ĵ�ַ%#x\n", arr2);
	return p;
}
int main()
{
	int *q = function();
	function2();
	//���ڻ��ջ�����ʹ��
	printf("*q=%d,*(q+1)=%d,*(q+2)=%d\n", *q, *(q + 1), *(q + 2)); 
	//��ַ�ѱ�����
	printf("*q=%d,*(q+1)=%d,*(q+2)=%d\n", *q, *(q + 1), *(q + 2)); 
	system("pause");
	return 0;
}

