#ifndef joongle_db
#define joongle_db

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define caso "Joongle !"
#define aluno "Mario Damião Caparroz Remistico Junior"
#define professor "Alessandro Miranda Gonçalves"

 struct registro
    {
        int identificador;
        char descricao[100];
        char cidade[40];
    };
    struct registro Reg_Hoteis[15];
#endif // CASE_PO_04_2016
