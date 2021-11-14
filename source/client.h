//
// Created by Androlink on 08/11/2021.
//

#ifndef BOGO_CSV_EDITOR_CLIENT_H
#define BOGO_CSV_EDITOR_CLIENT_H
typedef struct CLIENT Client;
typedef struct InfoClient List;

struct CLIENT{ //creation du type client

    char nom[22];//+1 pour le caracter de debut de ligne
    char prenom[21];
    char ville[21];
    char code_postal[6];//5 caracter +1 "\0"
    char tel[15];//14 caracter +1 "\0"
    char mail[41];
    char job[21];

};

int add();
int supr();

int recherche(char tab[], int tabLenght,char model[]);
int frecherche();
#endif //BOGO_CSV_EDITOR_CLIENT_H
