#include "bib.h"



    void gestionevent(){
    Evenement Event;
    FILE*F; char rep;
F=fopen("GestEvent.txt","a+");
if (F!=NULL )
  do {
    scanf("%s",Event.Conf);
    scanf("%s",Event.Party); fflush(stdin);
    scanf("%s",Event.Reunion); fflush(stdin);
  //  fscanf(F," %s;%s;%s ",Event->Conf,Event->Party,Event->Reunion);
    fprintf(F, "\t \t \t \t \t Conférences:%s \n \t \t \t \t \t \n \t \t \t \t \t consulter une fete %s\n \t \t \t \t \t \n \t \t \t \t \t Reunion:%s\t \t \t \t \t \n",Event.Conf,Event.Party,Event.Reunion);
    printf(" voulez vous ajouter \n"); fflush(stdin); scanf("%c",&rep);
}while (!feof(F) && rep=='o');

fclose (F);

}

