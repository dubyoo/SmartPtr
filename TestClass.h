#ifndef _TEST_CLASS_H__
#define _TEST_CLASS_H__

#include "SmartRefcntPtr.h"
#include "ReferenceCount.h"
#include <iostream>

using namespace std;

class CTest : public CReferenceCount
{
public:
	CTest(int num)
		: mNum(num)
	{
		cout << "Constructor " << mNum << " ... " << endl;
	}
	virtual ~CTest()
	{
		cout << "Destroy " << mNum << " ... " << endl;
	}

private:
	int mNum;
};

typedef CSmartRefcntPtr<CTest> CTestPtr;

#endif