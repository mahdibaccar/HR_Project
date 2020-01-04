#include "bib.h"



void menu()
{
    Menu Mn;
FILE*F; char rep;
F=open("Menu.txt","a+");
if (F!=NULL)
do
{


scanf("%s",&Mn.EspaceAdmin);fflush(stdin);
scanf("%s",&Mn.EspacePers); fflush(stdin);
fscanf(F,"%s;%s",&Mn.EspaceAdmin,&Mn.EspacePers);

fprintf(F,"*************Menu***********");
fprintf(F,"\t\t\t\t\t\t Espace Administratif:%s\t\t\t\t\t\t");
fscanf("%s",Mn.EspaceAdmin);
fprintf(F,"\t\t\t\t\t\t Espace Personnel :%s\t\t\t\t\t\t");
fscanf("%s",Mn.EspacePers);
}
while (feof(F) && rep=='o');
 fclose(F);
return 0;
}
