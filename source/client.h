//
// Created by Androlink on 08/11/2021.
//

#ifndef BOGO_CSV_EDITOR_CLIENT_H
#define BOGO_CSV_EDITOR_CLIENT_H
typedef struct CLIENT Client;
typedef struct InfoClient List;

struct CLIENT{ //creation du type client

    char nom[20];
    char prenom[20];
    char ville[20];
    int code_postal;
    int phone;
    char mail[40];
    char job[20];


    Client *suivant;
};
struct InfoClient{                                 //creation d'une liste chainé
    Client *premier;
    unsigned int size;
};
int add();
int supr();
int load();


#endif //BOGO_CSV_EDITOR_CLIENT_H
