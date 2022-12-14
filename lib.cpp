//
// Created by Andrea Chiappini on 14/12/22.
//

#include "lib.h"

bool ricerca (char lista[10][20], char nome[20], int &posizione) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            if (lista[i][j] != nome[j]){
                j = 20;
            } else{
                if (j==19){
                    posizione = i;
                    return true;
                }
            }
        }
    }
    return false;
}




