#include <iostream>

using namespace std;

//· El menú principal debe de contar con por lo menos 4 acciones diferentes y una opción para terminar el programa.  
//· La historia debe de tener por lo menos 5 puntos de interacción con 3 posibles decisiones del usuario
//· El usuario debe de contar con un elemento recolectable que puede ser: vida, dinero, etc.

//Informar al compilador de su existencia
int decisiones();

int main(){
    char respuesta = 'N';
   
    cout<<"LINEA ROJA"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Descripcion Del Juego:"<<endl;
    cout<<"Bienvenido, te acaban de elegir como presidente de una potencia mundial, te encuentras en una situación delicada, con la amenaza inminente de una tercera guerra mundial. La tensión con otras potencias está en su punto álgido, y cada una de tus decisiones podría tener consecuencias cruciales. El mundo está observando y esperando, con la esperanza de que puedas encontrar una solución pacífica para evitar el desastre."<<endl<<endl;
    cout<<"---------------------------------------"<<endl;
    while(respuesta == 'N'){
        cout<<"¿Estas listo para tomar el mando?"<<endl;
        cout<<"Pulsa 'S' para Si"<<endl;
        cout<<"Pulsa 'N' para No"<<endl;
        cin>>respuesta;
        cout<<endl;
    }
    cout<<"Perfecto, ahora puedes elegir entre estas acciones para dar inicio a tu mandato"<<endl;
    cout<<"---------------------------------------"<<endl;
    
    //Llamamos a la funcion decisiones()
    int decision = decisiones();
    cout<<endl;
    
    switch(decision){
        case 1: 
            cout<<"Convocando una cumbre de emergencia..."<<endl;
            break;
        case 2: 
            cout<<"Estamos al aire..."<<endl;
            break;
        case 3: 
            cout<<"Mobilizando tropas..."<<endl;
            break;
        case 4: 
            cout<<"Misiles listos para el lanzamiento..."<<endl;
            break;
        case 5: 
            cout<<"Renunciando a la presidencia..."<<endl;
            exit(0);
        default:
            cout<<"Venga, decide algo. Estamos en peligro..."<<endl;
    }
    
    cout<<endl<<"Vamos a ver si ya esta hasta aqui"<<endl;
    
    return 0;
}


int decisiones(){
    int decision = -1;
    cout<<"1. Convocar una cumbre de emergencia con las demas potencias"<<endl;
    cout<<"2. Realizar un discurso televisado"<<endl;
    cout<<"3. Movibilizar al ejercito en posiciones entrategicas"<<endl;
    cout<<"4. Aumentar la presion diplomatica"<<endl;
    cout<<"5. Salir del juego"<<endl;
    cin>>decision;
    
    return decision;
}




  


