#include "pedido.hpp"

pedido::pedido(size_t _prioridad_local, size_t peso_paquete){
    this->peso_paquete;
    this->prioridad_local;
}
size_t pedido::get_prioridad_pedido() {
    return prioridad_local * peso_paquete;
}
coordenada pedido::get_coordenada_destino(mapa& _mapa){
    coordenada coordenada_destino = _mapa.get_coordenada_libre();
    return coordenada_destino;
}
