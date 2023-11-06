#include<iostream>
using namespace std;
int& getlarger(int&a,int&b)
{
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main()
{
	int num1=10,num2=20;
	cout<<"before : num1="<<num1<<",num2="<<num2<<endl;
	getlarger(num1,num2)=30;
	cout<<"after : num1="<<num1<<",num2="<<num2<<endl;
	return 0;
}
