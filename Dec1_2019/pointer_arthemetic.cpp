#include<iostream>
int main()
{
	int a[3] {10,11,12};
	int *p=a;
	std::cout<<a<<std::endl;
    std::cout<<(a+1)<<std::endl;
    std::cout<<(a+2)<<std::endl;
    std::cout<<"size of int "<<sizeof(int)<<std::endl;
    std::cout<<*(a)<<std::endl;
    std::cout<<*(a+1)<<std::endl;
    std::cout<<*(a+2)<<std::endl;
    if(p==a)
    	std::cout<<"shreya"<<std::endl;
    if((p+1)==(a+1))
    	std::cout<<"sachin"<<std::endl;
    if((p+2)==(a+2))
    	std::cout<<"jinn jin"<<std::endl;
    std::cout<<p[0]<<std::endl;
    
	return 0;
}