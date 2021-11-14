cmake_minimum_required(VERSION 3.20)
project(bogo-csv-editor C)

set(CMAKE_C_STANDARD 99)

add_executable(bogo-csv-editor main.c source/client.c source/client.h tools/readFile.c tools/readFile.h source/commande.c source/commande.h)