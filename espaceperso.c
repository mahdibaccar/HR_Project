#include "bib.h"



void espaceperso()
{
    EspPers Ep;
FILE*F; char ps;
F=fopen("EspacePersonnel.txt","a+");
if (F!=NULL)
do
    {
scanf("%s",Ep.Compte);
fflush(stdin);
scanf("s",Ep.DemandeCong);
fflush(stdin);
fprintf(F,"||Cr�ation du Compte||: \n :%s*************,\n \t\t\t\t\t CIN: \n \t\t\t\t\t Nom:\n \t\t\t\t\t Pr�nom:\n \t\t\t\t\t Date et Lieu de Naissance:\n \t\t\t\t\t Diplome:\n \t\t\t\t\t Exp�riences & Vie Professionnelle: \n \t\t\t\t\t\n \t\t\t\t\t\n \t\t\t\t\t Comp�tences:\n \t\t\t\t\t\n \t\t\t\t\t\n \t\t\t\t\t\n \t\t\t\t\t\n \t\t\t\t\t",Ep.Compte);
fprintf(F,"||Demande de Cong�||:%s****************,\n \t \t \t \t \t Type:\n \t \t \t \t \t Dur�e:<Entre 2020/../.. jusqu'au 2020/../.. \n \t \t \t \t \t Cause et raison:",Ep.DemandeCong);

}
while (feof(F) && ps=='o');
fclose(F);
}
