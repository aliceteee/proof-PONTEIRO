#include <stdio.h> 
#include <stdlib.h>
#include "clientes.h"

void cadastrarCliente (Cliente *cliente, int *totalClientes){

    printf("\n--== CADASTRO DE CLIENTES ==--\n\n");
    
    printf("Informe o ID: ");
    scanf("%d", &cliente->id);
    
    printf("Informe o Nome: ");
    scanf(" %[^\n]", cliente->nome);
    
    printf("Informe o Telefone: ");
    scanf(" %[^\n]", cliente->telefone);
    
    *totalClientes = *totalClientes + 1;
    
    printf("\nCliente Cadastrado com Sucesso!\n");
    
}



void listarClientes(Cliente *clientes, int totalClientes) {
    
    printf("\n--== LISTA DE CLIENTES CADASTRADOS ==--\n\n");
    
    for (int i = 0; i < totalClientes; i++) {
        
        printf("ID: %d\n", clientes[i].id);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Telefone: %s\n", clientes[i].telefone);
        
    }
}



void buscarClientePorID(Cliente *clientes, int totalClientes, int idCliente) {
    
    for (int i = 0; i < totalClientes; i++) {
        
        if (clientes[i].id == idCliente) {
            
            printf("\nCliente encontrado!\n\n");
            printf("ID: %d\n", clientes[i].id);
            printf("Nome: %s\n", clientes[i].nome);
            printf("Telefone: %s\n", clientes[i].telefone);
            return;
        }
    }
    printf("\nCliente não encontrado!\n");
}