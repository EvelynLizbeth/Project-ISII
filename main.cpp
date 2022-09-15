/*
    Sebastian Andre Ochoa Ortiz
    13/09
    20210694
*/
#include <iostream>
#include <fstream>

template <class T>
class Nodo
{

};
int main()
{
    std::string archivo = "texto.txt";
    std::ifstream Archivo(archivo.c_str());
    std::string Linea;
    while (getline(Archivo,Linea)) {
        std::cout << "Una Linea: ";
        std::cout << Linea << std::endl;
    }
    return 0;
}
