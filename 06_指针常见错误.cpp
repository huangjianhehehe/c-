#include "stdafx.h"
#include "iostream"
#include "iomanip"
using namespace std;
//�༶ָ�����Ӻ����޸�main������ʱ������ֵ 
function(int **q){  //ʵ���������ô���
	int i=123;
	*q=&i;
	printf("i�ĵ�ַ%#x\n",&i);
}
int main()
{
		int *p;
		function(&p);
		printf("p��ֵΪ%#x\n",p);
		system("pause");
}
