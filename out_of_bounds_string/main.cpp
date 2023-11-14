#include <iostream>
#include <string>

using namespace std;

int main() {
    string hello("Hello, World!");
    char fifth = hello[4];  // Utilisation de l'opérateur [] au lieu de .at()
    hello[4] = ' ';  // Utilisation de l'opérateur [] au lieu de .at()

    // Affiche la chaîne modifiée et le caractère remplacé
    cout << hello << endl;
    cout << fifth << " remplacé par un blanc" << endl << endl;

    // Invocation intentionnelle d'un comportement indéfini à des fins éducatives
    size_t len = hello.length();
    hello[len] = '!'; // Tentative de remplacement du terminateur null - COMPORTEMENT INDÉFINI

    // Tentative d'accès au-delà de la longueur de la chaîne - COMPORTEMENT INDÉFINI
    hello[len + 1] = '!'; // Cela va au-delà de la fin de la chaîne

    // Le comportement de ces opérations est imprévisible et peut entraîner des plantages ou d'autres comportements erratiques
    cout << "La chaîne est maintenant dans un état indéfini et peut ne pas s'afficher comme prévu : " << hello << endl;

    return 0;
}
