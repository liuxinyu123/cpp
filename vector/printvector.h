#pragma once 

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

template<typename T>
void printVector(std::vector<T> &v)
{
	    typedef typename  std::vector<T>::iterator iterator;
		cout << "vector 中的元素有：" << endl; 
		for(iterator it = v.begin(); it != v.end() ; ++it)
		{
			cout << *it << " ";					
		}

		cout << endl;
}
