#include <iostream>
#include <string.h>

void greet(std::string);
void count(int, int);
void cheer(int);

int main()
{
    return 0;
}

void greet(std::string s)
{
    std::cout << s << std::endl;
    std::cout << "Greetings kicsifrodó" << std::endl;
}

void count(int a, int b)
{
    std::cout << a << b << std::endl;
}

void cheer(int how_many_times)
{
    for (int i = 0; i < how_many_times; ++i) {
        std::cout << "C++" << std::endl;
    }
}