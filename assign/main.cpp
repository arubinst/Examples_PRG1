#include <iostream>
#include <string>

using namespace std;

int main() {
    string str,
            world("World!"),
            hw("Hello, World!");

    // First assignment
    str.assign(world);
    cout << "After str.assign(world): " << str << endl;

    // Second assignment
    str.assign(hw, 7, 6);
    cout << "After str.assign(hw, 7, 6): " << str << endl;

    // Third assignment
    str.assign("World!");
    cout << "After str.assign(\"World!\"): " << str << endl;

    // Fourth assignment
    str.assign("World!!!!", 6);
    cout << "After str.assign(\"World!!!!\", 6): " << str << endl;

    // Fifth assignment
    str.assign(6, 'W');
    cout << "After str.assign(6, 'W'): " << str << endl;

    return 0;
}
