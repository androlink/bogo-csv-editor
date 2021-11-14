//
// Created by Androlink on 11/11/2021.
//

#include <stdio.h>
#include "readFile.h"
#include "../source/client.h"

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
    /*
     * fonction de recherche de caracter
     * pre-cond:entre un character et le fichier ou il faut chercher
     * post-cond:retourne la position du caracter model qu'il trouve, -1 si il y a une erreur ou 0 si non trouver
     */
    if(f==NULL)return(-1);

    int count=0;
    char c;

    do {
        count++;
        c = getc(f);

        if (c==model){
            return(count);
        }

    } while (c!=EOF);
    return(0);
}
int load(FILE * f , Client tab[] , int lenght){
    /*
     * charge les nouveau client dans un tableau
     * retourne 1 si reussi
     *          0 sinon
     */
    if(f==NULL)return(0);
    rewind(f);
    int line;
    int pos;
    char parametre='n';
    char c;

    while(line < lenght){

    c= getc(f);

        switch (c) {
            case '\n'://changement de ligne dans le fichier
                line++;
                parametre='n';
                tab[line].nom[0]='^';//caracter de debut de ligne
                pos=1;//reinitialisation de la valeur de position
                break;
            case ','://changement de parametre
                switch (parametre) {
                    case 'n':
                        parametre='p';
                        break;
                    case 'p':
                        parametre='v';
                        break;
                    case 'v':
                        parametre='c';
                        break;
                    case 'c':
                        parametre='t';
                        break;
                    case 't':
                        parametre='m';
                        break;
                    case 'm':
                        parametre='j';
                        break;
                    default:
                        printf("erreur");
                        return 0;
                }
                pos=0;//reinitialisation de la valeur de position
                break;
            case 'EOF'://test de bug
                return 0;
                break;
            default://assignation des valeur
                if(parametre=='n' && pos<20)tab[line].nom[pos]=c;
                if(parametre=='p' && pos<20)tab[line].prenom[pos]=c;
                if(parametre=='v' && pos<20)tab[line].ville[pos]=c;
                if(parametre=='c' && pos<5)tab[line].code_postal[pos]=c;
                if(parametre=='t' && pos<14)tab[line].tel[pos]=c;
                if(parametre=='m' && pos<40)tab[line].mail[pos]=c;
                if(parametre=='j' && pos<20)tab[line].job[pos]=c;
                pos++;
            break;


        }

    }
return 1;




}
/*
Client readLine(FILE * f){
    /*
     * deportation de la fonction load pour l'alleger
     * /
Client client;
    int count=0;
    char c;

    do {

        c = getc(f);





    } while (c!=',');






};
*/