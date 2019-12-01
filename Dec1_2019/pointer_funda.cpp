#include<iostream>
int main()
{
	int a=10;
	int *ptr=NULL;
	std::cout<<"value of a = "<<a<<std::endl;
	std::cout<<"ptr ="<<ptr<<std::endl;
	//std::cout<<"val of ptr "<<*ptr<<std::endl;
	std::cout<<"hello world"<<std::endl;
	ptr=&a;
	std::cout<<"ptr ="<<ptr<<std::endl;
	std::cout<<"val of ptr "<<*ptr<<std::endl;
	*ptr=23;
	std::cout<<"the value of a is "<< a <<endl;
	delete ptr;
	
	return 0;
}