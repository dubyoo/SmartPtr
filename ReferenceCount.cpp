
#include "ReferenceCount.h"

CReferenceCount::CReferenceCount() : mRefCount(0)
{
}

void CReferenceCount::incrementReference()
{
	++mRefCount;
}

void CReferenceCount::decrementReference()
{
	if (--mRefCount == 0) delete this;
}

int CReferenceCount::getReferenceCount() const
{
	return mRefCount;
}

CReferenceCount::~CReferenceCount()
{
}


