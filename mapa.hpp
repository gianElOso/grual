#ifndef AYED_TPG_1C2024_MAPA_HPP
#define AYED_TPG_1C2024_MAPA_HPP

#include "coordenada.hpp"
#include "matriz.hpp"
#include <vector>


/* Esta clase es la encargada de decirle a a_estrella si la posición de un vecino es válida o no.
 * Queda a criterio del grupo como implementarla. La idea es que a_estrella no tenga detalles de
 * implementación de posibles casilleros, clientes, paredes, locales, etc.
 * Adicionalmente, la pueden utilizar para otras partes del TP.
 * TIP: Tienen una matriz ya implementada como parte de la plantilla del TP. */
enum class Casilleros {
    LIBRE,
    OCUPADO,
    CLIENTE,
    INICIO,
    FINAL
};
class mapa {
private:
    matriz<Casilleros> *tablero;  
    size_t cantidad_clientes;
    std::vector<coordenada> casilleros_libres;
    coordenada cliente;
    coordenada inicio;
    coordenada final;
public:
    mapa();
    // Pre: -
    // Post: Devuelve true si la posición del vecino es válida (es decir, es una coordenada válida y es caminable).
    bool es_vecino_valido(coordenada posicion);
    
    // Pre: -
    // Post: cambia o ingresa el inicio
    void set_inicio(coordenada _inicio);

    // Pre: -
    // Post: cambia o ingresa el destino del pedido
    void set_final(coordenada _final);

    // Pre: -
    // Post: devuelve una coordenada del vector casilleros libres  
    coordenada get_coordenada_libre();

    // Pre: -
    // Post: agrega clientes/obstaculos al mapa
    void asignar_clientes();

    // Pre:
    // Post: destructor 
    ~mapa();

    // lo hice para testear el mapa esto se va
    void imprimirTablero() const;
};

#endif