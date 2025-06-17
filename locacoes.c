#include <stdio.h>
#include <stdlib.h>
#include "locacoes.h"

void realizarLocacao(Locacao *locacoes, int *totalLocacoes, Cliente *clientes, int totalClientes) {
    
    int clienteExiste = 0;
    
    printf("\n--== REALIZAR LOCAÇÃO ==--\n");
    printf("ID do cliente: ");
    scanf("%d", &locacoes->idClientes);
    
    for (int i = 0; i < totalClientes; i++) {
        
        if (clientes[i].id == locacoes->idClientes) {
            clienteExiste = 1;
            break;
        }
    }

    if (clienteExiste == 0) {
        
        printf("\nCliente não encontrado!\n");
        return;
    }
    
    printf("\nFilme: ");
    scanf("%s", locacoes->filme);
    printf("Data: ");
    scanf("%s", locacoes->data);

    (*totalLocacoes)++;
    printf("\nLocação realizada com sucesso!\n");
}



void listarLocacoes(Locacao *locacoes, int totalLocacoes) {
    printf("\n--== LISTA DE LOCAÇÕES ==--\n\n");
    for (int i = 0; i < totalLocacoes; i++) {
        printf("Locação %d:\n", i + 1);
        printf("ID do cliente - %d\n", locacoes[i].idClientes);
        printf("Filme - %s\n", locacoes[i].filme);
        printf("Data - %s\n", locacoes[i].data);
    }
}



void buscarLocacoesPorCliente(Locacao *locacoes, int totalLocacoes, int idCliente) {
    
    int encontrou = 0;
    
    printf("\nLocações do Cliente %d:\n", idCliente);
    for (int i = 0; i < totalLocacoes; i++) {
        if (locacoes[i].idClientes == idCliente) {
            printf("Filme - %s\n", locacoes[i].filme);
            printf("Data - %s\n", locacoes[i].data);
            encontrou = 1;
        }
    }
    if (encontrou == 0) {
        printf("\nNenhuma locação encontrada para o cliente %d!\n", idCliente);
    }
}