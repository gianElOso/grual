
#ifndef AYED_TPG_1C2024_MENU_HPP
#define AYED_TPG_1C2024_MENU_HPP
#include "mapa.hpp"
#include "local.hpp"
#include "pedido.hpp"
#include "coordenada.hpp"
#include <stddef.h>
class pedido;
class local;
class mapa;
class menu
{
private:
    mapa _mapa;
public:
   void crear_local();
};

#endif