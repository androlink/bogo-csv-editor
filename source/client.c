//
// Created by Androlink on 08/11/2021.
//

#include <stdio.h>
#include "client.h"

int add(){
    /*
     * ajoute un nouveau client
     * retourne 1 si reussi
     *          0 sinon
     */


}
int supr(){
    /*
     * suprime un client
     * retourne 1 si reussi
     *          0 sinon
     */

}
int recherche(char tab[], int tabLength,char model[]){
    /*
     * fonction de recherche de chaine de caracter
     * pre-cond:entre une chaine de caracter et le tableau de recherche
     * post-cond:retourne 1 si il trouve le model, 0 si non trouver, -1 si overflow
     */

    int modelLength = 0;
    while (model[modelLength] != '\0') {
        modelLength++;
    }

    if (tabLength < modelLength) {
        return -1;
    }

    int i = 0;
    printf("%s <= %s\n",tab,model);
    while (i < tabLength - modelLength) {
        //printf("______________________________\n");
        int cursor = 0;
        int match = 1;
        while (cursor < modelLength) {

            if (model[cursor] != tab[cursor + i]) {
                match = 0;
                //printf("%c != %c\n",model[cursor],tab[cursor + i]);
                break;
            }
            //printf("%c == %c\n",model[cursor],tab[cursor + i]);
            ++cursor;
        }

        if (match) {
            //printf("trouve\n");
            return 1;
        }

        ++i;
    }

    return 0;
}