#include <stdio.h>
// linha acima comando include carrega bibs. A stdio.h
// funções para entrada e saída de daodos. Aqui, usamos
// printf e getchar

int main()
// linha acima diz ao compilador que o programa tem uma função,
// chamada de main, que retorna um inteiro ao terminar.
// TODO PROGRAMA EM C PRECISA DE UMA FUNÇÃO MAIN

{ //dentro das chaves está a função
    printf("Hello World!\n");
    //printf mostra conteúdo do parenteses ao usuário
    // \n pula uma linha
    getchar();
    // diz ao compilador para esperar que o usuário 
    //pressione um botão antes de continuar. 
    //Isso é útil p não fechar a janela logo após exec. 
    return 0;
    // O comando return 0 indica o fim de uma função. 
    // 0 é o int.
}

// Linguagem C pede ; ao fim das linhas
