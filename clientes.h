#ifndef CLIENTES_H
#define CLIENTES_H


typedef struct {
    int id;
    char nome[50];
    char telefone[15];
} Cliente;


void cadastrarCliente (Cliente *cliente, int *totalClientes);
void listarClientes (Cliente *clientes, int totalClientes);
void buscarClientePorID (Cliente *clientes, int totalClientes, int idCliente);


#endif