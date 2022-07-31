#include <iostream>


class A
{
    public:
        int Var;
};

A DoSomething1(A a) 
{
    std::cout << "a (DoSomething1): " << &a << "\n";
    return a;
}
A& DoSomething2(A a) 
{
    std::cout << "a (DoSomething2): " << &a << "\n";
    return a;
}
A DoSomething3(A& a) 
{
    std::cout << "a (DoSomething3): " << &a << "\n";
    return a;
}
A& DoSomething4(A& a) 
{
    std::cout << "a (DoSomething4): " << &a << "\n";
    return a;
}


int main() {
    std::cout << "Hello worl2\n";

    A a = A();
    std::cout << "a (main): " << &a << "\n\n";

    A a1 = DoSomething1(a);
    std::cout << "a (after 1): " << &a1 << "\n\n";

    // A a2 = DoSomething2(a);
    // std::cout << "a (after 2): " << &a2 << "\n\n";
    // // Segmentation fault (core dumped)
    
    A a3 = DoSomething3(a);
    std::cout << "a (after 3): " << &a3 << "\n\n";
    
    A a4 = DoSomething4(a);
    std::cout << "a (after 4): " << &a4 << "\n\n";
    
    A& a5 = DoSomething4(a);
    std::cout << "a (after 4, but link): " << &a5 << "\n\n";
    
    A& a6 = a;
    std::cout << "a (A& a6 = a): " << &a6 << "\n\n";
    
    A a7 = a;
    std::cout << "a (A a7 = a): " << &a7 << "\n\n";


    return 0;
}
