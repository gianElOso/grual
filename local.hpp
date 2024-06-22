#ifndef LOCAL_HPP
#define LOCAL_HPP

#include "mapa.hpp"
#include "coordenada.hpp"
#include "pedido.hpp"
#include "string"
class mapa;

class pedido;

class local{
    private:
        mapa _mapa;
        coordenada inicial;
        coordenada destino;
        std::string nombre;
        size_t prioridad;
    public:
        void hacer_pedido();
        
};

#endif