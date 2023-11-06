#include <iostream>

class MyClass {
public:
    static int staticVar;

    static void printStaticVar() {
        std::cout << "Static variable value :  " << staticVar << std::endl;
    }
};
int MyClass::staticVar = 10;

int main() 
{
    MyClass::printStaticVar();
    return 0;
}

