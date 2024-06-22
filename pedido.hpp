#ifndef PEDIDO_HPP
#define PEDIDO_HPP
#include <stddef.h>
#include "coordenada.hpp"
#include "mapa.hpp"

class pedido{
private:
    size_t prioridad_local;
    size_t peso_paquete;
public:
    pedido(size_t _prioridad_local, size_t peso_paquete);
    size_t get_prioridad_pedido();
    coordenada get_coordenada_destino(mapa& _mapa);

};  

#endif