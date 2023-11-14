#include <iostream>
#include <string>

using namespace std;

int main() {
    string hello("Hello, World!");
    char fifth = hello.at(4);  // Utilisation de .at() pour la sécurité
    hello.at(4) = ' ';  // Utilisation de .at() pour la sécurité

    // Affiche la chaîne modifiée et le caractère remplacé
    cout << hello << endl;
    cout << fifth << " remplacé par un blanc" << endl;

    // Invocation intentionnelle d'un comportement indéfini à des fins éducatives
    size_t len = hello.length();
    try {
        hello.at(len) = '!'; // COMPORTEMENT INDÉFINI, mais .at() lance une exception
    } catch (const std::out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    try {
        // Tentative d'accès au-delà de la longueur de la chaîne - .at() lance une exception
        hello.at(len + 1) = '!'; // COMPORTEMENT INDÉFINI, mais .at() lance une exception
    } catch (const std::out_of_range& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    // Le comportement de ces opérations est normalement imprévisible, mais .at() protège contre les comportements indéfinis en lançant des exceptions
    cout << "La chaîne est maintenant dans un état défini et sécurisé : " << hello << endl;

    return 0;
}
