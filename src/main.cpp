#include <iostream>
#include <windows.h>
#include "../headers/game/game.h"
#include "../headers/menu/main_menu.h"
#include "../headers/stadistics/stadistics.h"
#include "../headers/credits/credits.h"

using namespace std;

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





int main(){
    int screen = 1;
    int choice;
    int gameIsRunning = true;
        game();
        choice = mainMenu();
        do{
            switch(choice){
                case 1:
                    system("cls");
                    mainMenu();
                    break;
                case 2:
                    system("cls");
                    stadistics();
                    break;
                case 3:
                    system("cls");
                    credits();
                    break;
                default:
                break;
            }
        }while(gameIsRunning);

    return 0;
}
