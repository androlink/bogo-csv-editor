//
// Created by Androlink on 11/11/2021.
//

#ifndef BOGO_CSV_EDITOR_READFILE_H
#define BOGO_CSV_EDITOR_READFILE_H

#include "../source/client.h"

int fcount(FILE *f, char model);
int ffind(FILE *f,char model);
int load(FILE * f , Client tab[] , int lenght);
Client readLine(FILE * f);


#endif //BOGO_CSV_EDITOR_READFILE_H
