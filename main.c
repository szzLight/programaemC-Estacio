#include <stdio.h>
#include <windows.h>
#include <psapi.h>
#include <locale.h>
#include <ctype.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int populacao, NumerodePontosTuristicos;
    float area, PIB;
    char Estado[2], Codigo[4], NomeCidade[20];

    printf("--- Esta é a primeira carta. ---\n");
    do {
        printf("Digite a letra do estado: \n");
        if (scanf("%1s", Estado) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Tente novamente.\n");
            continue;
        }
        if (!isalpha(Estado[0])) {
            printf("Deve ser uma letra. Tente novamente.\n");
            continue;
        }
        break;
    } while (1);

    do {
        printf("Digite o código: \n");
        if (scanf("%3s", Codigo) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Tente novamente.\n");
            continue;
        }
        if (strlen(Codigo) != 3 || !isalpha(Codigo[0]) || !isdigit(Codigo[1]) || !isdigit(Codigo[2])) {
            printf("Código deve ser uma letra seguida de dois dígitos. Tente novamente.\n");
            continue;
        }
        break;
    } while (1);

    printf("Digita o nome da cidade: \n");
    scanf(" %[^\n]s", &NomeCidade);

    do {
        printf("Digita a população: \n");
        if (scanf("%d", &populacao) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número inteiro positivo.\n");
            continue;
        }
        if (populacao <= 0) {
            printf("População deve ser positiva.\n");
            continue;
        }
        break;
    } while (1);        

    do {
        printf("Área total em KM²: \n");
        if (scanf("%f", &area) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número positivo.\n");
            continue;
        }
        if (area <= 0) {
            printf("Área deve ser positiva.\n");
            continue;
        }
        break;
    } while (1);

    do {
        printf("PIB: \n");
        if (scanf("%f", &PIB) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número positivo.\n");
            continue;
        }
        if (PIB <= 0) {
            printf("PIB deve ser positivo.\n");
            continue;
        }
        break;
    } while (1);

    do {
        printf("Número de pontos turísticos: \n");
        if (scanf("%d", &NumerodePontosTuristicos) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número inteiro não negativo.\n");
            continue;
        }
        if (NumerodePontosTuristicos < 0) {
            printf("Número de pontos turísticos deve ser não negativo.\n");
            continue;
        }
        break;
    } while (1);

                // os dados deveriam ficar aqui
    
    printf("=======================\n");
    printf("\n--- Dados da Carta ---\n");
    printf("=======================\n");
    printf("Estado: %1s | Codigo: %s\n", Estado, Codigo);
    printf("Cidade: %s | Área: %.3f KM²\n", NomeCidade, area);
    // lógica de formatação da população e do PIB
  if (populacao >= 1000000) {
        printf("população: %.2f milhões\n", (float)populacao / 1000000);
    } else if (populacao >= 1000) {
        printf("população: %.2f mil\n", (float)populacao / 1000);
    } else {
        printf("população: %d\n", (float)populacao);
    }
    if (PIB >= 1000000000) {
        printf("PIB: R$%.2f bilhões\n", (double)PIB / 1000000000);
    } else if (PIB >= 1000000) {
        printf("PIB: R$%.2f milhões\n", (double)PIB / 1000000);
    } else {
        printf("PIB: R$%.2f\n", (double)PIB);
    }
    if (area >= 1000000) {
        printf("Área: %.2f milhões de KM²\n", (float)area / 1000000);
        } else if (area >= 1000) {
        printf("Área: %.2f mil KM²\n", (float)area / 1000);
        } else {
        printf("Área: %.2f KM²\n", (float)area);
        }

    printf("Número de pontos turísticos: %d\n", NumerodePontosTuristicos);
    // separação bonitinha do resto
//    segunda carta

    printf("--- Esta é a segunda carta. ---\n");
    do {
        printf("Digite a letra do estado: \n");
        if (scanf("%1s", Estado) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Tente novamente.\n");
            continue;
        }
        if (!isalpha(Estado[0])) {
            printf("Deve ser uma letra. Tente novamente.\n");
            continue;
        }
        break;
    } while (1);

    do {
        printf("Digite o código: \n");
        if (scanf("%3s", Codigo) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Tente novamente.\n");
            continue;
        }
        if (strlen(Codigo) != 3 || !isalpha(Codigo[0]) || !isdigit(Codigo[1]) || !isdigit(Codigo[2])) {
            printf("Código deve ser uma letra seguida de dois dígitos. Tente novamente.\n");
            continue;
        }
        break;
    } while (1);

    printf("Digita o nome da cidade: \n");
    scanf(" %[^\n]s", &NomeCidade);

    do {
        printf("Digita a população: \n");
        if (scanf("%d", &populacao) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número inteiro positivo.\n");
            continue;
        }
        if (populacao <= 0) {
            printf("População deve ser positiva.\n");
            continue;
        }
        break;
    } while (1);        

    do {
        printf("Área total em KM²: \n");
        if (scanf("%f", &area) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número positivo.\n");
            continue;
        }
        if (area <= 0) {
            printf("Área deve ser positiva.\n");
            continue;
        }
        break;
    } while (1);

    do {
        printf("PIB: \n");
        if (scanf("%f", &PIB) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número positivo.\n");
            continue;
        }
        if (PIB <= 0) {
            printf("PIB deve ser positivo.\n");
            continue;
        }
        break;
    } while (1);

    do {
        printf("Número de pontos turísticos: \n");
        if (scanf("%d", &NumerodePontosTuristicos) != 1) {
            while (getchar() != '\n');
            printf("Entrada inválida. Digite um número inteiro não negativo.\n");
            continue;
        }
        if (NumerodePontosTuristicos < 0) {
            printf("Número de pontos turísticos deve ser não negativo.\n");
            continue;
        }
        break;
    } while (1);
    printf("=======================\n");
    printf("\n--- Dados da Carta ---\n");
    printf("=======================\n");
    printf("Estado: %1s | Codigo: %s\n", Estado, Codigo);
    printf("Cidade: %s | Área: %.3f KM²\n", NomeCidade, area);
    // lógica de formatação da população
    if (populacao >= 1000000) {
        printf("população: %.2f milhões\n", (float)populacao / 1000000);
        
    } else if (populacao >= 1000) {
        printf("população: %.2f mil\n", (float)populacao / 1000);
    } else {
        printf("população: %d\n", populacao);
    }
    // lógica do PIB
    if (PIB >= 1000000000) {
        printf("PIB: R$%.2f bilhões\n", (double)PIB / 1000000000);
    } else if (PIB >= 1000000) {
        printf("PIB: R$%.2f milhões\n", (double)PIB / 1000000);
    } else {
        printf("PIB: R$%.2f\n", PIB);
    // lógica da área
    if (area >= 1000000) {
        printf("Área: %.2f milhões de KM²\n", (float)area / 1000000);
        } else if (area >= 1000) {
        printf("Área: %.2f mil KM²\n", (float)area / 1000);
        } else {
        printf("Área: %.2f KM²\n", area);
        }
    }
    }