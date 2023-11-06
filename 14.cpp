#include<iostream>
inline double cube(double num)
{
	return num*num*num;
}
int main()
{
	double number;
	std::cout<<"enter a number => ";
	std::cin>>number;
	double result =cube(number);
	std::cout<<"the cube of "<<number<<" is  "<<result<<std::endl;
	return 0;
}
