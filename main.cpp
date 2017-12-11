#include <stdlib.h>
#include <iostream>
using std::cout;
using std::cin;

struct computador_gabinete
{
    char fab_video[10];
    char fab_rede[10];
    char tipo_memoria[10];
    int quant_memoria;
};

struct computador
{
    char marca[20];
    int ano;
    char fab_monitor[10];
    char estado[10];
    struct computador_gabinete gabinete; 
};

void imprimir (computador);

int main(int argc, char **argv)
{
    cout << "STRUCT 01\n\n";
    
    computador pc01;
    cout << "Insira os dados do computador 01. \n";
    
    cout << "Marca: ";
    cin >> pc01.marca;
    
    cout << "Ano: ";
    cin >> pc01.ano;
    
    cout << "Fabricante do monitor: ";
    cin >> pc01.fab_monitor;
    
    cout << "Fabricante da placa de video: ";
    cin >> pc01.gabinete.fab_video;
    
    cout << "Fabricante da placa de rede: ";
    cin >> pc01.gabinete.fab_rede;
    
    cout << "Tipo de memoria: ";
    cin >> pc01.gabinete.tipo_memoria;
    
    cout << "Quantidade de memoria: ";
    cin >> pc01.gabinete.quant_memoria;
    
    cout << "Estado: ";
    cin >> pc01.estado;
    
    cout << "\n";
    
    imprimir (pc01);
    
    return 0;
}

void imprimir (computador maquina)
{
    cout << "Computador 01. \n";
    cout << "Marca: " << maquina.marca << "\n";
    cout << "Ano: " << maquina.ano << "\n";
    cout << "Fabricante do monitor: "<< maquina.fab_monitor << "\n";
    cout << "Fabricante da placa de video: " << maquina.gabinete.fab_video << "\n";
    cout << "Fabricante da placa de rede: " << maquina.gabinete.fab_rede << "\n";
    cout << "Tipo de memoria: " << maquina.gabinete.tipo_memoria << "\n";
    cout << "Quantidade de memoria: " << maquina.gabinete.quant_memoria << " GB\n";
    cout << "Estado: " << maquina.estado << "\n";
}