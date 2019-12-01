#include<iostream>
int main()
{
    int val=20;
    int count=56;
	const int *ptr=&val;
	//pointers to integer constants
	std::cout<<"value of val is "<<val<<std::endl;
	std::cout<<"value of ptr is "<<*ptr<<std::endl;
	//*ptr=90; //ERROR

	//-------------------------constant pointers-------------------------------------------------------//

	int *const const_ptr=&count;
	std::cout<<"value of count is "<<count<<std::endl;
	std::cout<<"value of  const_ptr is "<<*const_ptr<<std::endl;
	count=89;
	*const_ptr=79;
	std::cout<<"value of  const_ptr is "<<count<<std::endl;

	//const_ptr=&val;  //ERROR

	//-----------------constant pointers to constants----------------//


	int j_value=90;
	const int *const j_ptr=&j_value;
	std::cout<<"j_value = "<<j_value<<std::endl<<"j_ptr = "<<*j_ptr<<std::endl;
	j_value=45;
	*j_ptr=456;
	std::cout<<"j_value "<<j_value;
    
	return 0;
}