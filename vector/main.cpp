#include <iostream>
#include<vector>
#include <functional>
#include <forward_list>
#include "printvector.h"

int main()
{
	std::vector<int> intVec1(10);
	std::vector<int> intVec2(intVec1);

	printVector(intVec1);
	printVector(intVec2);

	intVec1.clear();
	printVector(intVec1);
	
	for(int i = 0 ; i < 11; ++i)
		intVec1.push_back(i);
	std::cout << "vector 1 号位置为: " << intVec1.at(1) << std::endl;
	std::cout << "vector 2 号位置为: " << intVec1[2] << std::endl;
	
	std::cout << "The front number is " << intVec1.front() << std::endl;
	std::cout << "The back number is " << intVec1.back() << std::endl;

	std::cout << "The max capacity of vector is " << intVec1.max_size() << std::endl;
	std::cout << "The size of vector is " << intVec1.size() << std::endl;

	std::cout << "vector is empty?" << intVec1.empty() << std::endl;

	std::vector<double> fVec;
	fVec.push_back(2.3);	
	fVec.push_back(4.2);	
	fVec.push_back(4.1);	
	fVec.push_back(44.2);	
	fVec.push_back(42);	
	fVec.push_back(2);	
	fVec.push_back(-3);	

	printVector(fVec);
	sort(fVec.begin(),fVec.end());
	std::cout << "After sorting: " << std::endl;
	printVector(fVec);

	reverse(fVec.begin(),fVec.end());
	std::cout << "After reversing: " << std::endl;
	printVector(fVec);

	printVector(fVec);
	
 	std::vector<int>::iterator it = intVec1.begin();
	++it;
	intVec1.erase(it);
	std::cout << "After erase : " << std::endl;
	printVector(intVec1);

	++it;
	intVec1.insert(it,444);
	std::cout << "After insert : " << std::endl;
	printVector(intVec1);
	

	

}
