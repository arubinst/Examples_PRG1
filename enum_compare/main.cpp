#include <iostream>

enum class DirH { GAUCHE, CENTRE, DROITE };

bool meme_direction(DirH lhs, DirH rhs) {
    return lhs == rhs;
}

int main() {
    // Example usage
    DirH lhs;
    DirH rhs;

    //DirH lhs = DirH::GAUCHE;
    //DirH rhs = DirH::CENTRE;

    std::cout << std::boolalpha; // Ensures that boolean values are printed as "true" or "false"
    std::cout << meme_direction(lhs, rhs) << '\n'; // Outputs: false

    return 0;
}
