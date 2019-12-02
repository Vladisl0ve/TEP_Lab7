#include "CMySmartPointer.h"
#include <iostream>
using namespace std;

int main()
{
	CMySmartPointer<int> ptr_test = CMySmartPointer<int>(new int);
	CMySmartPointer<int> new_ptr_test = ptr_test;
	CMySmartPointer<int> tmp_ptr = CMySmartPointer<int>(new int);

	tmp_ptr = ptr_test;
	*ptr_test = 4;

	cout << *new_ptr_test << " " << *tmp_ptr << endl;
	return 0;
}