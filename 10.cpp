#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int num1=5,num2=10;
	cout<<"before swpping : num1="<<num1<<"before swpping : num2="<<num2<<endl;
	swap(num1,num2);
	cout<<"after swpping : num1= "<<num1<<"num2="<<num2<<endl;
	return 0;
}
