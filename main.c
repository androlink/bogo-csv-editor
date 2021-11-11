//
// Created by Androlink on 06/11/2021.
//

#include <stdio.h>
#include "source/client.h"
#include "tools/readFile.h"

int main(){
    FILE* fichier = NULL;

    fichier = fopen("annuaire5000.csv", "r");

    if(fichier==NULL){
        printf("le fichier n'a pas pu etre charge");
        return (1);
    }

    int d=fcount(fichier,'\n');



    fclose(fichier);
    return 0;
}