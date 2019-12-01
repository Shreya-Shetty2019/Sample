#include<iostream>
int main()
{
	const int val=20;
	int *ptr=&val;
	//pointers to integer constants
	std::cout<<"value of val is "<<val<<std::endl;
	std::cout<<"value of ptr is "<<*ptr<<std::endl;
	*ptr=90;

	return 0;
}