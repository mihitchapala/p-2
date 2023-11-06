#include<iostream>
#include<iomanip>
int main()
{
	const double KG_to_CM=100000;
	const double KG_to_ME=1000;
	const double KG_to_IN=39370.1;
	const double KG_to_FE=3280.84;
	double kilometer;
	std::cout<<"enter distance in kg => ";
	std::cin>>kilometer;
	double cm=kilometer*KG_to_CM;
	double me=kilometer*KG_to_ME;
	double im=kilometer*KG_to_IN;
	double fe=kilometer*KG_to_FE;
	std::cout<<std::setfill('-')<<std::setw(40)<<"-"<<std::setfill(' ')<<std::endl;
	std::cout<<std::setw(15)<<"kilometers" <<std::setw(15)<<"centimeters"<<std::setw(15)<<"meters"<<std::setw(15)<<"incles"<<std::setw(15)<<"feet"<<std::endl;
	std::cout<<std::setfill('-')<<std::setw(40)<<"-"<<std::setfill(' ')<<std::endl;
	std::cout<<std::setprecision(2)<<std::fixed;
	std::cout<<std::setw(15)<<kilometer<<std::setw(15)<<cm<<std::setw(15)<<me<<std::setw(15)<<im<<std::setw(15)<<fe<<std::endl;
	return 0;
}
