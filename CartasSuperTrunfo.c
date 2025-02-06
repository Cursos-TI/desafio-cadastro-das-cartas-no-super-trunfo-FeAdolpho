#include <stdio.h>

int main() {
    char Cidade[50];
    int Habitantes;
    char DDD[3];

    printf("Informe o nome da cidade: \n");
    scanf("%s", Cidade);

    printf("Informe o número de habitantes: \n");
    scanf("%d", &Habitantes);

    printf("Informe o DDD: \n");
    scanf("%s", DDD);

    printf("Cidade: %s\n", Cidade);
    printf("Habitantes: %d\n", Habitantes);
    printf("DDD: %s\n", DDD);

    printf("Pressione Enter para sair...");
    getchar();
    getchar();

    return 0;
}