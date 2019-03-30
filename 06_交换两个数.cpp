#include "stdafx.h"
#include "iostream"
#include "iomanip"
using namespace std;
void function(int *p ,int *q){
    *p*=2;
    *q*=2;    //Õ¨ ±≥À“‘2
}
int main(){
    int i=123;
    int j =456;
    function(&i,&j);
    printf("i=%d,j=%d",i,j);
    system("pause");
}
