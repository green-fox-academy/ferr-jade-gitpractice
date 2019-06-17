#include <iostream>

void count(int);

int main()
{
    int a = 34;
    count(a);
    return 0;
}

void count(int a)
{
    std::cout << a << std::endl;
}
