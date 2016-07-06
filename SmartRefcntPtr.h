
#ifndef _SMART_REFCNT_PTR_H_
#define _SMART_REFCNT_PTR_H_

template <class T> class CSmartRefcntPtr
{
public:
	CSmartRefcntPtr(T* ptr = 0) : mPtr(ptr)
	{
		if (mPtr) mPtr->incrementReference();
	}

	CSmartRefcntPtr(const CSmartRefcntPtr<T> &src) : mPtr(src.mPtr)
	{
		if (mPtr) mPtr->incrementReference();
	}

	~CSmartRefcntPtr()
	{
		if (mPtr) mPtr->decrementReference();
	}

	operator T*() const
	{
		return mPtr;
	}

	T& operator*() const
	{
		return *mPtr;
	}

	T* operator->() const
	{
		return mPtr;
	}

	CSmartRefcntPtr& operator=(T* ptr)
	{
		if (mPtr) mPtr->decrementReference();
		mPtr = ptr;
		if (mPtr) mPtr->incrementReference();
		return *this;
	}

	CSmartRefcntPtr& operator=(const CSmartRefcntPtr &src)
	{
		if (mPtr) mPtr->decrementReference();
		mPtr = src.mPtr;
		if (mPtr) mPtr->incrementReference();
		return *this;
	}

protected:
	T* mPtr;
};

#endif
