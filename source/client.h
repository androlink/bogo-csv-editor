//
// Created by Androlink on 08/11/2021.
//

#ifndef BOGO_CSV_EDITOR_CLIENT_H
#define BOGO_CSV_EDITOR_CLIENT_H
typedef struct CLIENT Client;
typedef struct InfoClient List;

struct CLIENT{                                         //creation du type client
    char nom[20];
    char prenom[20];
    char ville[20];
    int code_postal;
    unsigned short phone[8];
    char mail[40];
    char job[30];


    Client *suivant;
};
struct InfoClient{                                 //creation d'une liste chainé
    Client *premier;
};



#endif //BOGO_CSV_EDITOR_CLIENT_H
