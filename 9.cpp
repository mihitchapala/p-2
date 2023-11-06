#include<iostream>
using namespace std;
class math {
	public:
		static int add(int a,int b){
			return a+b;
		}
};
int main()
{
	int num1,num2;
	cout<<"enter two numbers ::";
	cin>>num1>>num2;
	int result=math::add(num1,num2);
	cout<<"sum => "<<result<<endl;
	return 0;
}
