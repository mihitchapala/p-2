#include <iostream>
void printvalue(const int value)
{
	std::cout<<"the value is : "<<value<<std::endl;
}
int main()
{
	int number =42;
	printvalue(number);
	return 0;
}
