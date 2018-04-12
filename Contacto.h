//
// Created by el_me on 12/04/2018.
//

#ifndef PO_CGEZAR_T04_CONTACTO_H
#define PO_CGEZAR_T04_CONTACTO_H


#include <string>

class Contacto {
private:
    std::string nombre;
    std::string telefono;
    std::string correo;
    std::string edad;

public:
    Contacto();

    std::string getNombre();
    void setNombre(std::string nombre);
    std::string getTelefono();
    void setTelefono(std::string telefono);
    std::string getCorreo();
    void setCorreo(std::string correo);
    std::string getEdad();
    void setEdad(std::string edad);
};


#endif //PO_CGEZAR_T04_CONTACTO_H
