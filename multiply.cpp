#include <iostream>
#include <string>
#include <stdexcept>
#include <type_traits>

template<typename T>
T multiply(T a, T b) 
{
    if constexpr (std::is_same_v<decltype(a), std::string>) 
    {
        throw std::invalid_argument("strings can'nt done multiply.");
    }
    return a * b;
}
template <typename T>
T multiply(const T& s, size_t m) {

};

int main(void) 
{
        int x = 3, y = 6;
        double a = 1.6, b = 1.8;
        std::string s1 = "Hello1";
        std::string s2 = "Hello2";

    try
    {
        std::cout << multiply(x, y) << std::endl;
        std::cout << multiply(a, b) << std::endl;
        std::cout << multiply(s1, s2) << std::endl;
    } 
    catch(std::invalid_argument const& ex)
    {
        std::cerr << ex.what() << std::endl;
    }

    return 0;
}
