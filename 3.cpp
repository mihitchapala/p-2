#include <iostream>
using namespace std;
class A
{
	public:
		void fum();
};
void A::fum() 
{
	cout << " full() called ";
}
int main ()
{
	A a;
	a.fum();
	return 0;
}
