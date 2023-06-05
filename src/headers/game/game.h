#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "game_UI.h"
#include "game_helpers.h"
using namespace std;

void game(){
#pragma region ESTADO_JUEGO
    bool fase_expedicion =1;
    bool fase_final = 0;
    bool finalizado =0;

#pragma endregion

#pragma region VARIABLES_JUGADORES
    int JUGADORES = 2;
    //DATOS JUGADORES:
    int player1=1, player2=2,
    //Se inicializa el puntaje de cada jugador en 0.
    player1_score, player2_score;
    //Se solicita nombre a cada jugador:
    string player1_name = get_player_name(player1), player2_name= get_player_name(player2);
#pragma endregion

#pragma region VARIABLES_ESTATUILLAS
    const int TOTAL_ESTATUILLAS = 5;
    const string CANGREJO = "CANGREJO";
    const string HORMIGA = "HORMIGA";
    const string MEDUSA = "MEDUSA";
    const string AGUILA = "AGUILA";
    const string SALAMANDRA = "SALAMANDRA";
    string ESTATUILLAS[TOTAL_ESTATUILLAS]={CANGREJO, HORMIGA, MEDUSA, AGUILA, SALAMANDRA};
    string ESTATUILLAS_DISPONIBLES[TOTAL_ESTATUILLAS] = {};

    //Estatuillas que los jugadores irán seleccionando para jugar:
    string selected_estatuilla_player1 ="";
    string selected_estatuilla_player2 ="";
    //Se inicializa el array de estatuillas de cada jugador en 0:
    string estatuillas_player1[TOTAL_ESTATUILLAS]={};
    string estatuillas_player2[TOTAL_ESTATUILLAS]={};


#pragma endregion

    //LANZAMIENTO DADOS:
#pragma region VARIABLES_DADOS

#pragma endregion

#pragma region JUEGO
    cout << "JUGADOR 1: " << player1_name <<endl;;
    cout <<"JUGADOR 2: " <<player2_name;
    
    do{
    ClearConsole();

    basicGameInfo(player1_name, player2_name);
    
    selected_estatuilla_player1 = seleccionarEstatuilla(player1, player1_name, ESTATUILLAS);
    selected_estatuilla_player2 = seleccionarEstatuilla(player2, player2_name, ESTATUILLAS);

    string mensaje1 = player1_name +" (" + selected_estatuilla_player1+") - ";
    string mensaje2 = player2_name +" (" + selected_estatuilla_player2+")";

    mostrarMensajeYLimpiar(mensaje1+mensaje2);
    
    }while(fase_expedicion)

#pragma endregion
}

   
#endif
