#include <iostream>
#include <string.h>

void greet(std::string);
void count(int);
void cheer(int);

int main()
{
    return 0;
}

void greet(std::string s)
{
    std::cout << s << std::endl;
    std::cout << "Greetings, my fellow african american friend!" << std::endl;
}

void count(int a)
{
    std::cout << "IX lol" << std::endl;
}

void cheer(int howm_any_times)
{
    for (int i = 0; i < howm_any_times; ++i) {
        std::cout << "C++" << std::endl;
    }
}