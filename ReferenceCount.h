
#ifndef _REFERENCE_COUNT_H_
#define _REFERENCE_COUNT_H_

class CReferenceCount
{
public:
	CReferenceCount();
	virtual ~CReferenceCount();
	void incrementReference();
	void decrementReference();

	int getReferenceCount() const; // for debugging only

protected:
	int mRefCount;

private:
};

#endif
