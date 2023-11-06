#include<iostream>
class overloaddemo {
	public:
		void display(int num)
		{
			std::cout <<"integer :"<<num <<std::endl;
		}
		void display(double num)
		{
			std::cout <<"double :"<<num <<std::endl;
		}
		void display(const char* str)
		{
			std::cout <<"string :"<<str <<std::endl;
		}
};
int main()
{
	overloaddemo demo;
	demo.display(5);
	demo.display(3.14);
	demo.display("hello, function overloading !");
	return 0;
}
