#include <iostream>
#include<cmath>
double area(double length,double width)
{
	return length*width;
}
double area(double radius)
{
	return M_PI*radius*radius;
}
double area(double base,double height)
{
	return 0.5*base*height;
}
int main ()
{
	double le,wi,re,ba,he;
	std::cout<<"enter the length and width => "<<std::endl;
	std::cin>>le>>wi;
	std::cout<<"enter the redius => "<<std::endl;
	std::cin>>le>>re;
	std::cout<<"enter the base and height => "<<std::endl;
	std::cin>>ba>>he;
	double rectanglearea=area(le,wi);
	double circlearea=area(re);
	double trianglearea=area(ba,he);
	std::cout<<"area of rectangle:"<<rectanglearea<<std::endl;
	std::cout<<"area of circle ::"<<circlearea<<std::endl;
	std::cout<<"area of triangle :"<<trianglearea<<std::endl;
	return 0;
}
