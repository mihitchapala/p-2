#include<iostream>
#include<iomanip>
using namespace std ;
int main ()
{
	float num =2.71828;
	cout<<"original number is =>"<<num<<endl;
	cout<<"the number with 3 significant figures is =>";
	cout<<setprecision(3)<<num;
	return 0;
}
