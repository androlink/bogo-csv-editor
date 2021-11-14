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
        printf("le fichier n'a pas pu etre charg\202");
        return (1);
    }

    Client cl[fcount(fichier,'\n')-1];

    load(fichier,cl,sizeof (cl)/sizeof(Client));


    printf("%d",recherche(cl[3000].tel,15,"43"));


    fclose(fichier);
    return 0;
}