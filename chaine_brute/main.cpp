#include <iostream>
using namespace std;

int main() {
    cout << R"(Hello, World!)" << endl;
    // J'aimerais bien imprimer "Hello, World!" avec )" à la fin
    cout << R"machintruc(Hello, World! )" )machintruc" << endl;
    return 0;
}
