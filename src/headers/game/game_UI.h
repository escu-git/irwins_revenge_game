#ifndef GAME_UI_H
#define GAME_UI_H
#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

//LIMPIA LA CONSOLA:
void ClearConsole() {
  std::cout << "\x1b[2J\x1b[H";
}

//SOLICITA NOMBRE A LOS JUGADORES:
string get_player_name(int number){
    string name;
     cout << "JUGADOR " << number << " - INGRESE SU NOMBRE: ";
     cin >> name;
     return name;
}

//VISUALIZACIÓN DE INFORMACIÓN BÁSICA:
void basicGameInfo(string player1, string player2){
    cout << "***** IRWIN'S REVENGE *****" << endl;
    cout << "***** " << player1 << "                                    " << "***** " << player2 <<endl;
    cout << "________________________________________________________________" <<endl <<endl;
}

void mostrarMensajeYLimpiar(string message)
{
    cout << message << std::endl;
    this_thread::sleep_for(chrono::seconds(5));
    ClearConsole();
}

#endif