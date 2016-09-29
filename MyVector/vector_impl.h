#include <iostream>

template<typename T>
void Vector<T>::copyFrom(const T *A, Rank lo, Rank hi)
{
	capacity_ = 2 * (hi - lo);
	elem_ = new T[capacity_];
	size_ = 0;

	while(lo < hi)
	{
		elem_[size_++] = A[lo++];
	}
}

template<typename T>
void Vector<T>::print()
{
	for(int i = 0; i < size_; ++i)
	{
		std::cout << elem_[i] << " ";		
	}

	std::cout << std::endl;
}

template<typename T>
void Vector<T>::expand()
{
	if (size_ < capacity_) 
		return;
	T *oldElem = elem_;
	capacity_ = 2 * capacity_;
	elem_ = new T[capacity_];
	for(int i = 0; i < size_; ++i)
	{
		elem_[i] = oldElem[i];
	}

	delete [] oldElem;
}

template<typename T>
void Vector<T>::insert(Rank k, const T &value)
{
	++size_;
	expand();
	moveBack(k);
	elem_[k] = value;
}

template<typename T>
void Vector<T>::moveBack(Rank k)
{
	for(int i = size_; i > k; --i)
	{
		elem_[i] = elem_[i - 1];
	}
}

template<typename T>
void Vector<T>::remove(Rank lo, Rank hi)
{
	if (lo == hi)
		return;

	while (hi < size_)
		elem_[lo++] = elem_[hi++];

	size_ = lo;
}

template<typename T>
T& Vector<T>::operator[](Rank k) const 
{
	return elem_[k];
}

template<typename T>
Rank Vector<T>::find(Rank lo, Rank hi, const T &value)
{
	Rank k = hi;
	while(k > lo)
	{
		if(value == elem_[--k])
			return k;
	}
	return -1;
}
