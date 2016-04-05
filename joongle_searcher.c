#include "joongle_db.h"

// FUNÇÃO PRINCIPAL//
void main (void)
{
    setlocale(LC_ALL,"Portuguese");
    db_example();
    int decisao,id;
    int i;
    char pesquisa[50];
    do{
        printf ("\n           JOONGLE! SEARCHER     \n");
        printf (" ____________________________________\n");
        printf ("|                                    | \n");
        printf ("|   [1] BUSCA POR IDENTIFICADOR      |\n");
        printf ("|   [2] BUSCA POR PALAVRA CHAVE      |\n");
        printf ("|   [3] INFO                         |\n");
        printf ("|   [ESC] ENCERRAR PROGRAMA          |\n|____________________________________|\nPressione a tecla no teclado referente ao numero do menu.");
        decisao = getch();
        system("cls");
        switch(decisao){
            case 49:
                pesquisar_id();
                break;
            case 50:
                pesquisar_keyword();
                break;
            case 51:
                info();
                break;
            case 0x1b:
                system("EXIT");
                break;
        }
        system("PAUSE");
        system("cls");
    }while (decisao != 0x1b);
}
