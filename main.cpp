#include <iostream>


class A
{
    public:
        int Var;
};

int DoSomething(A& a) 
{
    std::cout << "&a (inside DoSomething): " << &a << "\n";
    a.Var = 5;
    return 0;
}


int main() {
    std::cout << "Hello worl1\n";

    A a = A();
    std::cout << a.Var << "\n";
    a.Var = 9;
    std::cout << &a << a.Var << "\n";
    DoSomething(a);
    std::cout << a.Var << "\n";


    return 0;
}
