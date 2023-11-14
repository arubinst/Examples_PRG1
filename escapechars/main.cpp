#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void printWithDelay(const std::string& str) {
    for (const char& ch : str) {
        std::cout << ch;
        std::cout.flush(); // Ensure the output is printed immediately
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    // Newline example
    std::cout << "Hello World!\n";

    // Carriage return example
    printWithDelay("Hello\rEarth");

    // Give some time to see the effect
    std::this_thread::sleep_for(std::chrono::seconds(2));

    // Vertical tab example
    std::cout << "\nVertical\vTab\vExample\n";

    // Backspace example: deletes the previous character
    printWithDelay("Backspace\b\b\b\b\b\b\b\b\bSpace\n");

    // Form feed example: similar to a 'new page' in a document, behavior varies
    std::cout << "FormFeed\fNewPage?\n";

    // Alert (bell) example: may trigger a beep sound on the terminal, if supported
    std::cout << "Alert\a\n";

    return 0;
}
