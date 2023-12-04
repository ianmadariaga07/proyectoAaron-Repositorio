#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

//Hacer que un numero mal ingresado te de la oportunidad de elegir otra vez
//Al acabar de jugar hacer que te de la opcion de volver al menu principal, preguntando al usuario. Se puede hacer poniendo dentro del case en la decision que sea = -1 

//cout<<" "<<endl<<endl;


//PONEMOS LAS FUNCIONES PARA QUE EL COMPILADOR LAS RECONOZCA
int aleatorio(int min, int max);
string eleccion(int jugada);

//PRINCIPAL
int main(){
    
    char respuesta = 'N'; //Para iniciar juego
    int decision = -1;    //Guardamos la decision del usuario
    
    cout<<endl<<"MINIJUEGO - PIEDRA, PAPEL O TIJERA"<<endl<<endl;
    cout<<"---------------------------------------"<<endl<<endl;
    cout<<"En el momento en que el primer ministro deliberaba sobre el destino de la nacion y la humanidad, al otro lado del mundo, dos presidentes enfrentaban circunstancias ligeramente diferentes..."<<endl<<endl;
    cout<<"Mientras la civilizacion humana pende de un hilo, los lideres de otras potencias se dedican a juegos insignificantes como piedra, papel o tijera. Preparate para jugar en la liga de los verdaderos lideres."<<endl<<endl;
    cout<<"---------------------------------------"<<endl<<endl;
    
    //Confirmamos el inicio del juego 
    do{
        cout<<"Estas listo para el combate?"<<endl;
        cout<<"Pulsa 'S' para Si"<<endl;
        cout<<"Pulsa 'N' para No"<<endl;
        cout<<"Ingresa tu respuesta: ";
    
        cin>>respuesta;
        cout<<endl<<endl;
        
        if(respuesta == 'N'){
            cout<<"La lealtad es un regalo raro que solo se da a aquellos que realmente lo merecen. Venga, vamos a jugar"<<endl<<endl;
        }else if(respuesta != 'N' && respuesta != 'S'){
            cout<<"Respuesta no valida. Intente de nuevo"<<endl<<endl;
        }
    }while(respuesta != 'S');
    
    //Declaramos  variables
    int jugador = 0;
    int pc = 0;
    int triunfos = 0;
    int perdidas = 0;

    while (triunfos < 5 && perdidas < 5){
        pc = aleatorio(1, 3);
        cout<<"Elige el numero de tu eleccion: "<<endl;
        cout<<"1. PIEDRA"<<endl;
        cout<<"2. PAPEL"<<endl;
        cout<<"3. TIJERA"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>jugador;
        
        if(jugador < 1 || jugador > 3){
            cout << "Elección no válida. Intenta de nuevo." << endl;
        }
        
        //"Elegiste " + jugador
        cout<<endl<<"Elegiste: "<<eleccion(jugador)<<" y PC eligió: "<<eleccion(pc)<<endl<<endl;
        
        //Combate
        if(pc == jugador){
            cout<<"EMPATE"<<endl<<endl;
        } else if((jugador == 1 && pc == 3) || (jugador == 2 && pc == 1) || (jugador == 3 && pc == 2)){
            cout<<"GANASTE"<<endl<<endl;
            triunfos += 1;
        } else {
            cout<<"PERDISTE"<<endl<<endl;
            perdidas += 1;
        }
        cout<<"---------------------------------------"<<endl<<endl;
    }
    
    cout<<"Ganaste "<<triunfos<<" veces. Perdiste "<<perdidas<<" veces."<<endl<<endl;
    
    if(triunfos>perdidas){
        cout<<"Ha expresado su enojo hacia ti porque le ganaste, ahora ha activado sus misiles nucleares y se dirigen hacia todo el mundo. Se acabo..."<<endl<<endl;
    }else if(triunfos<perdidas){
        cout<<"---------------------------------------"<<endl;
        cout<<"Ante tu creciente frustracion con el por perder, decides mandar todo al carajo y activar tu maletin nuclear. Se acabo..."<<endl<<endl;
    }
    
    return 0;
}

//FUNCION DE ALEATORIO
int aleatorio(int min, int max){
    srand(time(NULL));
    return rand() % (max - min + 1) + min;
}



//FUNCION ELECCIONES
string eleccion(int jugada){
    string resultado;
    if(jugada == 1) {
        resultado = "PIEDRA";
    } else if(jugada == 2) {
        resultado = "PAPEL";
    } else if(jugada == 3) { 
        resultado =  "TIJERA";
    } else {
        resultado = "NO JUGAR";
    } 
    
    return resultado;
}



