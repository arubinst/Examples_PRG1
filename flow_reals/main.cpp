#include <iostream>
#include <iomanip>

int main() {
    float nombre = 12345.6789f;

    // Affiche le nombre sous forme décimale
    std::cout << "fixed : " << std::fixed << nombre << std::endl;

    // Affiche le nombre en notation scientifique
    std::cout << "scientific : " << std::scientific << nombre << std::endl;

    // Affiche le nombre dans son format par défaut
    std::cout << "defaultfloat : " << std::defaultfloat << nombre << std::endl;

    // Affiche le nombre en notation hexadécimale
    std::cout << "hexfloat : " << std::hexfloat << nombre << std::endl;

    // Réduit la précision à 3 chiffres après la virgule
    std::cout << "setprecision(3) : " << std::setprecision(3) << nombre << std::endl;

    // Force l'affichage des zéros non significatifs après la virgule
    std::cout << "showpoint : " << std::showpoint << nombre << std::endl;

    // Supprime l'affichage des zéros non significatifs
    std::cout << "noshowpoint : " << std::noshowpoint << nombre << std::endl;

    // Affiche le signe + devant les nombres positifs
    std::cout << "showpos : " << std::showpos << nombre << std::endl;

    // Ne montre pas le signe + devant les nombres positifs
    std::cout << "noshowpos : " << std::noshowpos << nombre << std::endl;

    // Affiche les nombres en hexadécimal en majuscules
    std::cout << "uppercase : " << std::uppercase << std::hexfloat << nombre << std::endl;

    // Affiche les nombres en hexadécimal en minuscules
    std::cout << "nouppercase : " << std::nouppercase << nombre << std::endl;

    // Affiche la précision actuelle utilisée pour l'affichage
    std::cout << "Précision actuelle : " << std::cout.precision() << std::endl;

    return 0;
}
