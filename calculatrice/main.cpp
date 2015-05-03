#include <iostream>
#include <cstdlib>
#include "functions.h"

using namespace std;

int main()
{
    //Declarations des variables
    char    cMsgAccueil[]    = "Bienvenue a la calculatrice";
    char    cMsgMenu[]   = "Choisissez une des options suivantes :";
    int     iChoixMenu;

    int     tNombres[10]; //TODO gestion des nombres a calculer
    int     iNombreACalculer;
    int     iResultat;

    //Debut du programme. Message d accueil.
    cout << cMsgAccueil << endl;

   do{
        cout << cMsgMenu << endl;
        cout << "1- Addition" << endl;
        cout << "2- Soustraction" << endl;
        cout << "3- Multiplication" << endl;
        cout << endl << "0- Quitter" << endl;
        cout << "choix : ";

        //Changement du iChoixMenu
        //cin fait une pause
        cin >> iChoixMenu;
        if(!purifierChoix(iChoixMenu)){
            //TODO gestoin des erreurs du choix.
            return 0; //exit
        }

        if(iChoixMenu!= 0){
            system("clear");
            cout << "Combien de nombres voulez-vous calculer ? (Maximum 10)  ";
            cin >> iNombreACalculer;
        }

        demandeNombres(tNombres, iNombreACalculer);
        //Gestion du choix du user
        switch(iChoixMenu) {
            case 1:
                //code pour addition
                 iResultat = addition(tNombres, iNombreACalculer);
                break;
            case 2:
                //code pour soustraction
                iResultat = soustraction(tNombres, iNombreACalculer);
                break;
            case 3:
                //code pour multiplication
                iResultat = multiplication(tNombres, iNombreACalculer);
                break;
            default:
                break;
        }
        //affichage du resultat.

        system ("clear");
        cout << "Resultat : " << iResultat;
        //Pauses and clear the terminal after showing the result.
        cin.ignore().get();
        system ("clear");
    } while(iChoixMenu != 0);


    return 0;
}
