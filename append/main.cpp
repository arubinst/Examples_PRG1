#include <iostream>
#include <string>

using namespace std;

int main() {
    string str("Hello, "), world("World!"), hw("Hello, World!");

    // Initial value of str: "Hello, "

    str.append(world); // world: "Hello, World!"
    cout << str << endl;
    str = "Hello, ";

    str.append(hw, 7, 6); // substring of hw: "Hello, World"
    cout << str << endl;
    str = "Hello, ";

    str.append("World!"); // "World!": "Hello, World!"
    cout << str << endl;
    str = "Hello, ";

    str.append("World!!!!", 6); // first 6 chars of "World!!!!": "Hello, World!"
    cout << str << endl;
    str = "Hello, ";

    str.append(6, 'W'); // "WWWWWW": "Hello, WWWWWW"
    cout << str << endl;

    return 0;
}
