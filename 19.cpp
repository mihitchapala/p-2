#include <iostream>
void add(int &num1,int &num2,int &result){
	result = num1+num2;
}
int main()
{
	int num1,num2,sum;
	std::cout<<"enter the firest integer ::";
	std::cin>>num1;
	std::cout<<"enter the second integer ::";
	std::cin>>num2;
	add(num1,num2,sum);
	std::cout<<"sum of "<<num1<<"  and  "<<num2<<"  is =>"<<sum<<std::endl;
	return 0;
}
