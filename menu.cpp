#include "menu.hpp"
#include <iostream>

void menu::crear_local(){

    local ferreteria(this->_mapa);
    ferreteria.hacer_pedido();
    _mapa.imprimirTablero();
}
