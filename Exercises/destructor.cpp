#include <iostream>

class Foo {
public:
    ~Foo( void )
    { std::cout << "Foo destructor called" << std::endl; }
};

int main( int argc, char **argv )
{
    Foo foo();
    system("pause");
    return 0;
}