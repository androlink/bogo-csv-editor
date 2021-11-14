//
// Created by Androlink on 14/11/2021.
//

#ifndef BOGO_CSV_EDITOR_COMMANDE_H
#define BOGO_CSV_EDITOR_COMMANDE_H

#include <stdio.h>

void commande_main();
/*
 *      -all  affichage de tout
 *      -n    affichage du nom
 *      -p    affichage du prenom
 *      -v    affichage de la ville
 *      -c    affichage du code postal
 *      -t    affichage du telephone
 *      -m    affichage de la boite mail
 *      -j    affichage du job
 *      -s-<> affichage trier selon le paramettre
 *
 *
 */
int printc(FILE *f,char arg[][5]);

int findc();

int addc();

int suprc();

int save();

int missingData();

void help();

#endif //BOGO_CSV_EDITOR_COMMANDE_H
