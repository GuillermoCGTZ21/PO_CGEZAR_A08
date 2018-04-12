//
// Created by el_me on 12/04/2018.
//

#include "Contacto.h"

Contacto::Contacto(){
    this->correo="";
    this->edad="";
    this->nombre="";
    this->telefono= "";
}
std::string Contacto::getNombre(){
    return nombre;
}
void Contacto::setNombre(std::string nombre){
    this->nombre = nombre;
}
std::string Contacto::getEdad(){
    return edad;
}
void Contacto::setEdad(std::string edad){
    this->edad = edad;
}
std::string Contacto::getTelefono(){
    return telefono;
}
void Contacto::setTelefono(std::string telefono){
    this->telefono = telefono;
}
std::string Contacto::getCorreo(){
    return correo;
}
void Contacto::setCorreo(std::string correo){
    this->correo = correo;
}