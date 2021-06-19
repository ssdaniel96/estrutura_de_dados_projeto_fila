#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

void clear_screen()
{
    #ifdef _WIN32
        system("cls");
    #else
        system ("clear");
    #endif
}

void get_menu(){
    clear_screen();
    printf("Super senha 3.000\n");
    printf("1 - Gerar nova senha\n");
    printf("2 - Chamar proxima senha\n");
    printf("3 - Imprimir senhas\n");
    printf("4 - Encerrar\n");
}

int get_menu_option(){
    int value;
    printf("Digite a opcao (1 a 4): ");
    scanf("%d", &value);
    printf("\n");
    if (value < 1 || value > 4){
        printf("Opcao invalida!\n");
        system("pause");
        value = get_menu_option();
    }
    return value;
}


void chosen_menu(){
    int option = get_menu_option();
    switch (option)
    {
    case 1:
        generate_ticket();
        break;
    case 2:
        call_next_ticket();
        break;
    case 3:
        printf("Board aqui");
        break;
    }
}

void execute_menu(){
    int execute = 1;
    while(execute == 1){
        get_menu();
        chosen_menu();
    }
}

int main() {
    execute_menu();
}