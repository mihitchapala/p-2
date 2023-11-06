#include<iostream>
inline double square(double num)
{
	return num*num;
}
int main()
{
	double number;
	std::cout<<"enter a number => ";
	std::cin>>number;
	double result =square(number);
	std::cout<<"the square of "<<number<<" is  "<<result<<std::endl;
	return 0;
}
