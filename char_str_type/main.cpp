#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main() {
    auto s1 ="hello";
    auto s2 = string("hello");   // conversion explicite
    auto s3 = "hello"s;      // conversion implicite

    std::cout << "Type de s1: " << typeid(s1).name() << '\n';
    // PKc veut dire pointeur sur const char

    std::cout << "Type de s2; " << typeid(s2).name() << '\n';
    // NSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
    // veut dire string
    std::cout << "Type de s3; " << typeid(s3).name() << '\n';

    auto s4 = s2.data(); //s2 est un string
    std::cout << "Type de s4; " << typeid(s4).name() << '\n';
    // conversion de string vers const char*

    return 0;
}
