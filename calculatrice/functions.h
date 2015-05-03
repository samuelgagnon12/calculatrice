#include <iostream>
using namespace std;
//declaration de fonctions

//declaration de fonctions du menu
void demandeNombres(int *tNombres, int iNombreACalculer){

    for(int i=0; i < iNombreACalculer; i++){
        system("clear");
        cout << "Nombre" << i+1 << " :";
        cin >> tNombres[i];

    }

    return;
}

bool purifierChoix(int iChoix){
    if(iChoix ==1 || iChoix ==2 || iChoix ==3 ){
        return true;
    }else{
        return false;
    }
}
//declaration de fonctions de calculs
int addition(int nombres[], int iNombresACalculer){
    int iResultat = 0;

    for(int i=0; i < iNombresACalculer; i++){
        iResultat = iResultat + nombres[i];
    }

    return iResultat;
}

int soustraction(int nombres[], int iNombresACalculer){
    int iResultat;

    for(int i=0; i < iNombresACalculer -1; i++){
        if(i==0){
            iResultat = nombres[0] - nombres[1];
        }else{
            iResultat = iResultat - nombres[i+1];
        }
    }

    return iResultat;
}

int multiplication(int* nombres, int iNombresACalculer){
    int iResultat;
    for(int i=0; i < iNombresACalculer-1; i++){
        if(i==0){
            iResultat = nombres[0] * nombres[1];
        }else{
            iResultat = iResultat * nombres[i+1];
        }
    }

    return iResultat;
}
