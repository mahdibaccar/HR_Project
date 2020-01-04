#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef BIB_H_INCLUDED
#define BIB_H_INCLUDED

typedef struct Menu
    {
char Menu[20];
char EspaceAdmin[25];
char EspacePers[20];
    }
Menu;

typedef struct Evenement{
      char Conf[20];
    char Party[20];
    char Reunion[20];
    }
Evenement;

typedef struct EspPers
{ char *Compte[25];
char *DemandeCong[25];
}
EspPers ;

/* Espaceperso*/
void espaceperso();
/* Gestion Event */
void gestionevent();
/* Menu */
void menu();

#endif // BIB_H_INCLUDED

