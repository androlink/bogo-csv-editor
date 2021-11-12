//
// Created by Androlink on 11/11/2021.
//

#include <stdio.h>
#include "readFile.h"

int fcount(FILE *f,char model){
    /*fonction de comptage
     * pre-cond:entre un character et le fichier ou il faut chercher
     * post-cond:retourne le nombre de caracter model qu'il trouve, -1 si il y a une erreur
     */
    if(f==NULL)return(-1);//test d'erreur


    int count=0;
    char c;
    rewind(f);
    do {
        c = getc(f);
        //printf("%c",c);
        if (c==model){
            count++;
        }
    } while (c!=EOF);
    return count;

}
int ffind(FILE *f,char model){
    /*fonction de recherche
     * pre-cond:entre un character et le fichier ou il faut chercher
     * post-cond:retourne la position du caracter model qu'il trouve, -1 si il y a une erreur ou -2 si non trouver
     */
    if(f==NULL)return(-1);
    char c;
    do {
        c = getc(f);

        if (c==model){
            return(SEEK_CUR);
        }
    } while (c!=EOF);
    return(-2);
}