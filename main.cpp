#include "TestClass.h"
#include <iostream>

using namespace std;

int main()
{
	CTestPtr t1 = new CTest(1);
	
	{
		CTestPtr t2 = new CTest(2);
	}

	{
		CTest* t3 = new CTest(3);
	}

	cout << "===END===" << endl;

	return 0;
}
