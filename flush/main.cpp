#include <iostream>
#include <thread>
#include <chrono>

int main() {
    // Sans flush
    std::cout << "Sans flush:\n";
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " ";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "\n\n";

    // Avec flush
    std::cout << "Avec flush:\n";
    for (int i = 1; i <= 5; ++i) {
        std::cout << i << " " << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "\n";

    return 0;
}
