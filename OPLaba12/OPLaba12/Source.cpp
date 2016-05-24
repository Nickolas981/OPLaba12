#include<iostream>
#include <stdarg.h>
#include"func.h"
using namespace std;
double sum(int n, ...);
void main() {
	cout<<sum(2, 2, 4)<<endl;
	system("pause");
	
}

