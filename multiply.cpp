#include <iostream>
#include <string>
#include <stdexcept>
#include <type_traits>

template<typename T>
T multiply(T a, T b) 
{
    return a * b;
}
template <>
int multiply<int>(int a, int b) 
{
    return a * b;
};
template<>
double multiply<double>(double a, double b) 
{
    return a * b;
}
//string(overloading)
std::string multiply(const std::string& s1, size_t count) 
{
    std::string res;
    for(size_t i{}; i < count; ++i) 
    {
        res += s1;
    }
    return res;
}

int main(void) 
{
        int x = 3, y = 6;
        double a = 1.6, b = 1.8;
        std::string s1 = "hello ";

        std::cout << multiply(x, y) << std::endl;
        std::cout << multiply(a, b) << std::endl;
        std::cout << multiply(s1, 3) << std::endl;
    return 0;
}
