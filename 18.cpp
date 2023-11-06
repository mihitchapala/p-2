#include <iostream>
class circle {
	public :
		double calculatearea(double radius,double pi=3.14159){
			return pi*radius*radius;
		}
};
int main()
{
	circle circlecalculator;
	double radius;
	std::cout<<"enter the radius of the circle : ";
	std::cin >>  radius;
	double area = circlecalculator.calculatearea(radius);
	std::cout<<"the area of the circle is : "<<area<<std::endl;
	return 0;
}
