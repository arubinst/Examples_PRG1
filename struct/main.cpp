#include <iostream>

int main() {
    struct Cercle{
        double x, y, z;
        double rad = 15.0;
    } cercle, cercle2, cercle3, cercle4;
    cercle = {0, 0, 0, 10. };
    cercle2 = {0., 0., 0.};
    cercle3 = {.rad=20.};
    Cercle& refCercle = cercle;
    std::cout << "Radius de 'cercle' (initialisé globalement) = " << cercle.rad << std::endl;
    std::cout << "Radius de 'cercle2' (initialisé partiellement) = " << cercle2.rad << std::endl;
    std::cout << "Radius de 'cercle3' (initialisé par nom de membre) = " << cercle3.rad << std::endl;
    std::cout << "x de 'cercle3' (initialisé par nom de membre) = " << cercle3.x << std::endl;
    std::cout << "Radius de 'cercle4' (pas initialisé) = " << cercle4.rad << std::endl;
    std::cout << "Radius de 'refCercle' (pointe sur 'cercle') = " << refCercle.rad << std::endl;
    std::cout << &cercle2 << std::endl;
    std::cout << &cercle2.y;
    //Cercle* ptrCercle = &cercle2;
    //*ptrCercle.rad = 50.; //boom!!!

    return 0;
}
