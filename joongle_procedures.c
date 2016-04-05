#include "joongle_db.h"

//APRESENTAÇÂO DO CASE//
void info(){
   system("cls");
   printf ("\n\nCASE: %s  \nAluno: %s \nProfessor: %s \n\n\n",caso,aluno,professor);  // Titulo do programa
}
//MONTA UMA BASE DE DADOS//
void db_example(){
    int i;
    /////////////IDENTIFICADORES//////////////////
        for (i=0; i<15; i++){
        Reg_Hoteis[i].identificador = i+1000;
    }
    /////////////DESCRICOES OU NOMES DOS HOTEIS//////////////////
    strcpy(Reg_Hoteis[0].descricao, "Resort Rio Quente");
    strcpy(Reg_Hoteis[1].descricao, "Jumeira Beach");
    strcpy(Reg_Hoteis[2].descricao, "Hotel Pestana");
    strcpy(Reg_Hoteis[3].descricao, "Bellagio");
    strcpy(Reg_Hoteis[4].descricao, "Fairmont Le Château Frontenac");
    strcpy(Reg_Hoteis[5].descricao, "Hotel Sacher");
    strcpy(Reg_Hoteis[6].descricao, "Mandarin Oriental Bangkok");
    strcpy(Reg_Hoteis[7].descricao, "Monastero Santa Rosa Hotel & Spa");
    strcpy(Reg_Hoteis[8].descricao, "Mount Nelson Hotel");
    strcpy(Reg_Hoteis[9].descricao, "St. Regis Bal Harbour Resort");
    strcpy(Reg_Hoteis[10].descricao, "The Balmoral");
    strcpy(Reg_Hoteis[11].descricao, "The Connaught");
    strcpy(Reg_Hoteis[12].descricao, "The Dolder Grand");
    strcpy(Reg_Hoteis[13].descricao, "Inn at Shelburne Farms");
    strcpy(Reg_Hoteis[14].descricao, "Jade Mountain");
    //////////////CIDADES DOS HOTEIS///////////////////////////
    strcpy(Reg_Hoteis[0].cidade, "Caldas Novas");
    strcpy(Reg_Hoteis[1].cidade, "Dubai");
    strcpy(Reg_Hoteis[2].cidade, "São Luís");
    strcpy(Reg_Hoteis[3].cidade, "Boston");
    strcpy(Reg_Hoteis[4].cidade, "Buenos Aires");
    strcpy(Reg_Hoteis[5].cidade, "Dallas");
    strcpy(Reg_Hoteis[6].cidade, "Moscovo");
    strcpy(Reg_Hoteis[7].cidade, "Madrid");
    strcpy(Reg_Hoteis[8].cidade, "Atlanta");
    strcpy(Reg_Hoteis[9].cidade, "Toronto");
    strcpy(Reg_Hoteis[10].cidade, "Sydney");
    strcpy(Reg_Hoteis[11].cidade, "Mumbai");
    strcpy(Reg_Hoteis[12].cidade, "Phoenix");
    strcpy(Reg_Hoteis[13].cidade, "Barcelona");
    strcpy(Reg_Hoteis[14].cidade, "Calcutá");
}
//PESQUISA PELO ID FORNECIDO PELO USUARIO//
void pesquisar_id(){
    int i,id;
    printf ("\n Informe o ID do Hotel (começando por 1000): ");
    scanf ("%d",&id);
    i = id - 1000;
        if (id <1000 || Reg_Hoteis[i].identificador != id){
            printf ("ID informado inexistente!\n");
        }
        else{
            printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n\n",Reg_Hoteis[i].identificador,Reg_Hoteis[i].descricao,Reg_Hoteis[i].cidade);
        }
}
//PESQUISAR POR CIDADE ESPECIFICO//
void pesquisar_keyword(){
    int i,filtro,resultados_encontrados=0;
    char pesquisa[60];
    do{
      printf ("\n Pesquisar por:  ");
      gets(pesquisa);
    }while (pesquisa == null);
      printf ("Filtro: <1> Geral, <2> Descrição, <3> Cidade: ");
      filtro = getch();
      switch(filtro){
        case 2:
          for (i=0;i<15;i++){
            if (0 == strstr(Reg_Hoteis[i].descricao,pesquisa)){
              printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n",Reg_Hoteis[i].identificador,Reg_Hoteis[i].descricao,Reg_Hoteis[i].cidade);
              resultados_encontrados+=;
            } 
          }
          break;
        case 3:
          for (i=0;i<15;i++){
            if (0 ==strstr(Reg_Hoteis[i].cidade,pesquisa)){
              printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n",Reg_Hoteis[i].identificador,Reg_Hoteis[i].descricao,Reg_Hoteis[i].cidade);
              resultados_encontrados+=;
            }
          }
          break;
        default:
          for (i=0;i<15;i++){
            if (0 == strstr(Reg_Hoteis[i].descricao,pesquisa) || 0 ==strstr(Reg_Hoteis[i].cidade,pesquisa)){
              printf ("\n ID: %d.\n Descrição:  %s.\n Cidade:  %s.\n\n",Reg_Hoteis[i].identificador,Reg_Hoteis[i].descricao,Reg_Hoteis[i].cidade);
              resultados_encontrados+=;
            }
          }
          break;
      }
    printf ("\n %d Resultados encontrados.",resultados_encontrados);
}
