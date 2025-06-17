#ifndef LOCACOES_H
#define LOCACOES_H


#include "clientes.h"


typedef struct {
    int idClientes;
    char filme[50];
    char data[10];
} Locacao;


void realizarLocacao(Locacao *locacoes, int *totalLocacoes, Cliente *clientes, int totalClientes);
void listarLocacoes(Locacao *locacoes, int totalLocacoes);
void buscarLocacoesPorCliente(Locacao *locacoes, int totalLocacoes, int idCliente);
void listarTodasAlocacoesDoCliente(Locacao *locacoes, int totalLocacoes, int idCliente);


#endif