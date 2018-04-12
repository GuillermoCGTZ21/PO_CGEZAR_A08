#include <iostream>
#include "Contacto.h"
int main() {
    std::string contacton, contactot, contactoe, contactoc;

    Contacto contacto = *new Contacto();
    contacto.setNombre(contacton);
    contacton = contacto.getNombre();

    contacto.setEdad(contactoe);
    contactoe = contacto.getEdad();

    contacto.setTelefono(contactot);
    contactot = contacto.getTelefono();

    contacto.setCorreo(contactoc);
    contactoc = contacto.getCorreo();

    int *arreglousuarios = NULL;
    std::string *arreglocontacto = NULL;
    int cantidad, valor;
    std::cout << "¿Cuántos contactos vas a registrar?";
    std::cin >> cantidad;

    arreglousuarios = new int[cantidad];
    arreglocontacto = new std::string[cantidad];

    for (int i = 0; i < cantidad; i++) {
        std::cout<<"\nContenido Contacto NO."<<i<<"\n";

        std::cout << "¿Cuál es tu nombre?";
        std::cin >> contacton;
        std::cout << "¿Cuál es tu edad?";
        std::cin >> contactoe;
        std::cout << "¿Cuál es tu teléfono?";
        std::cin >> contactot;
        std::cout << "¿Cuál es tu correo?";
        std::cin >> contactoc;
        arreglocontacto[i] = "\nNombre: " + contacton + "\nEdad: " + contactoe + " años" +
                "\nTelefono: " + contactot + "\nCorreo: " + contactoc;


    }

    for (int i = 0; i < cantidad; i++) {
        std::cout<<"\nCONTACTO NO." << i;
        std::cout<<arreglocontacto[i]<<"\n";

    }

}