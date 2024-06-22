#include "local.hpp"

void local::hacer_pedido(){
    pedido pedido1(3,23);
    prioridad = pedido1.get_prioridad_pedido();
    inicial = {0,4};
    _mapa.set_inicio(inicial);
    nombre = "ferreteria";
    destino = pedido1.get_coordenada_destino(this->_mapa);
    _mapa.set_final(destino);
}