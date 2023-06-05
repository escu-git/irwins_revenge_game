#ifndef MAIN_MENU_H
#define MAIN_MENU_H
#include <iostream>
using namespace std;

int chooseOption(){
    int option;
    cout << "Seleccione una opción:";
    cin >> option;
    return option;
}

//Muestra el menú principal del juego:
int mainMenu(){
    cout << "                                       Irwin's Revenge!                               " << endl;
    cout << "--------------------------------------------------------------------------------------" <<endl <<endl;
    cout << "MENÚ PRINCIPAL" <<endl;
    cout << "_________________________"<<endl;
    cout << "1 _ JUGAR!" <<endl;
    cout << "2 _ ESTADÍSTICAS DE JUEGO" <<endl;
    cout << "3 _ CRÉDITOS" <<endl;
    cout << "0 _ SALIR DEL JUEGO" <<endl <<endl;
    
    int option;
    cout << "Seleccione una opción:";
    cin >> option;
    return option;
};


#endif