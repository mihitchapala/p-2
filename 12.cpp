#include<iostream>
void greet(std::string name = "guest",int age =0)
{
	std::cout<<"hello, "<<name<<" ! you are "<<"years old ."<<std::endl;
}
int main()
{
	greet();
	greet("alice");
	greet("bob",30);
	return 0;
}
