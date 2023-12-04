#include <iostream>
#include <cstdlib> //Para funcion exit()

using namespace std;

//· El menú principal debe de contar con por lo menos 4 acciones diferentes y una opción para terminar el programa.  
//· La historia debe de tener por lo menos 5 puntos de interacción con 3 posibles decisiones del usuario
//· El usuario debe de contar con un elemento recolectable que puede ser: vida, dinero, etc.

//Meter un minijuego


int main(){
    char respuesta = 'N'; //Para iniciar juego
    int decision = -1;    //Guardamos la decision del usuario
    int pazMundial = 100; //Contador de paz mundial
   
   
    cout<<endl<<"L I N E A   R O J A"<<endl<<endl;
    cout<<"---------------------------------------"<<endl;
    
    //AGREGAMOS MENU PRINCIPAL 
    
    do{
        cout<<"MENU PRINCIPAL"<<endl<<endl;
        cout<<"1. Iniciar juego"<<endl;
        cout<<"2. Instrucciones"<<endl;
        cout<<"3. Historia"<<endl;
        cout<<"4. Informacion"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        
        cout<<endl<<endl;
    
        switch(decision){
            case 1: 
                cout<<"Iniciando juego..."<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = 1;
                break;
            case 2: 
                cout<<"---------------------------------------"<<endl;
                cout<<"INSTRUCCIONES"<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = -1;
                break;
            case 3: 
                cout<<"---------------------------------------"<<endl;
                cout<<"HISTORIA.."<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = -1;
                break;
            case 4: 
                cout<<"---------------------------------------"<<endl;
                cout<<"INFORMACION..."<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = -1;
                break;
            case 5: 
                cout<<"Saliendo del juego..."<<endl<<endl;
                exit(0);
            default:
                cout<<"Respuesta no valida. Intente de nuevo"<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
        }
        
    }while(decision>5 || decision<1);
    
    //INICIO
    cout<<"INICIO:"<<endl;
    cout<<"Bienvenido, te acaban de elegir como presidente de una potencia mundial, te encuentras en una situacion delicada, con la amenaza inminente de una tercera guerra "<<endl<<"mundial. La tension con otras potencias está en su punto maximo, y cada una de tus decisiones podria tener consecuencias cruciales. El mundo está observando y "<<endl<<"esperando, con la esperanza de que puedas encontrar una solucion pacifica para evitar el desastre."<<endl<<endl;
    
    //Confirmamos el inicio del juego 
    do{
        cout<<"Estas listo para tomar el mando?"<<endl;
        cout<<"Pulsa 'S' para Si"<<endl;
        cout<<"Pulsa 'N' para No"<<endl;
        cout<<"Ingresa tu respuesta: ";
        cin>>respuesta;
        cout<<endl<<endl;
        
        if(respuesta == 'N'){
            cout<<"En la guerra, el camino seguro lleva a la destruccion. Oculta tus fortalezas, haz valer tus debilidades. Venga, toma el poder"<<endl<<endl;
        }else if(respuesta != 'N' && respuesta != 'S'){
            cout<<"Respuesta no valida. Intente de nuevo"<<endl<<endl;
        }
    }while(respuesta != 'S');
    
    
    cout<<"---------------------------------------"<<endl;
    //ACTO UNO
    cout<<"La mañana comienza con una reunion urgente en la Casa Blanca. Tu equipo de asesores te presenta informes detallados sobre la situacion actual: disputas territoriales,conflictos ideologicos y desacuerdos comerciales que han llevado a un estado de tension global. Todos estan ansiosos por saber como planeas abordar la crisis y "<<endl<<"evitar una escalada hacia la guerra."<<endl<<endl;
    //DECISION UNO
    cout<<"----Estado actual de la Paz Mundial: "<<pazMundial<<"%----"<<endl<<endl;
    
    do{
        cout<<"Que vas a decidir?"<<endl;
    
        cout<<"1. Convocar una cumbre de emergencia con las demas potencias"<<endl;
        cout<<"2. Mantener la calma y esperar"<<endl;
        cout<<"3. Dejar que los altos mandos del pais decidan"<<endl;
        cout<<"4. Realizar un discurso televisado"<<endl;
        cout<<"5. Renunciar a la presidencia"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        if(decision>5 || decision<1){
            cout<<endl<<"No hay mayor desafío que conquistarse a uno mismo; la valentía comienza en el espejo. Ahora decide..."<<endl<<endl;
        }
    }while(decision>5 || decision<1);
    cout<<endl;
    
    switch(decision){
        case 1: 
            cout<<"Haz reunido a las mayores potencias del mundo..."<<endl<<endl;
            pazMundial += 20;
            break;
        case 2: 
            cout<<"Te han invitado a una cumbre en la ONU..."<<endl<<endl;
            pazMundial  += 15;
            break;
        case 3: 
            cout<<"Han empezado negociaciones con el otro bando.."<<endl<<endl;
            pazMundial  += 10;
            break;
        case 4: 
            cout<<"Despues de tu discurso has recibido una invitacion a negociaciones de paz..."<<endl<<endl;
            pazMundial  += 5;
            break;
        case 5: 
            cout<<"Ahora alguien mas tomara el cargo. Has quedado en deuda con la nacion..."<<endl<<endl;
            cout<<"Saliendo del juego...";
            exit(0);
    }
    
    
    
    cout<<"---------------------------------------"<<endl;
    //ACTO DOS
    cout<<"El mundo observa con atencion mientras te embarcas en intensas negociaciones. Las conversaciones son dificiles y llenas de desafios, pero demuestras habilidad "<<endl<<"diplomatica y empatia para encontrar soluciones aceptables para todas las partes. Trabajas incansablemente para construir puentes de entendimiento y compromiso, "<<endl<<"buscando soluciones a los problemas subyacentes que han llevado al mundo al borde del abismo."<<endl<<endl;
    //DECISION DOS
    cout<<"----Estado actual de la Paz Mundial: "<<pazMundial<<"%----"<<endl<<endl;
    
    do{
        cout<<"Seguiras siendo diplomatico?"<<endl;
        
        cout<<"1. Dejar que la ONU se encargue"<<endl;
        cout<<"2. Mantener las negociaciones sin intermediarios"<<endl;
        cout<<"3. Buscar alianzas para afrontar mejor la problematica"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        if(decision>3 || decision<1){
            cout<<endl<<"Aquel que se conoce a sí mismo y conoce a su enemigo no será puesto en peligro en cien batallas. Toma una decision..."<<endl<<endl;
        }
    }while(decision>3 || decision<1);
    cout<<endl;
    
    switch(decision){
        case 1: 
            cout<<"Dialogas con las naciones..."<<endl<<endl;
            pazMundial += 10;
            break;
        case 2: 
            cout<<"Te ha llegado una oferta..."<<endl<<endl;
            break;
        case 3: 
            cout<<"Las naciones del mundo te escuchan..."<<endl<<endl;
            pazMundial += 5;
            break;
    }
    
    
    
    
    cout<<"---------------------------------------"<<endl;
    //ACTO TRES
    cout<<"A medida que las tensiones alcanzan su punto máximo y la amenaza de guerra se cierne sobre el mundo, recibes una oferta sorprendente de un país que hasta ahora se "<<endl<<"había mantenido al margen de los conflictos. Una nación pacífica y neutral, conocida por su diplomacia efectiva y su compromiso con la resolución de conflictos, "<<endl<<"se ofrece como mediadora."<<endl<<endl;
    //DECISION TRES
    cout<<"----Estado actual de la Paz Mundial: "<<pazMundial<<"%----"<<endl<<endl;
    
    do{
        cout<<"Que vas a hacer?"<<endl;
        
        cout<<"1. Dejar que el departamento de inteligencia decida"<<endl;
        cout<<"2. Aceptar oferta aliada"<<endl;
        cout<<"3. Rechazar oferta aliada"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        if(decision>3 || decision<1){
            cout<<endl<<"Un líder sabio valora no solo su propio poder, sino también la fuerza de sus aliados. Responde esa oferta..."<<endl<<endl;
        }
    }while(decision>3 || decision<1);
    cout<<endl;
    
    switch(decision){
        case 1: 
            cout<<"Han decidido aceptar la oferta..."<<endl<<endl;
            pazMundial += 10;
            break;
        case 2: 
            cout<<"Comienzas un plan de seguridad con ellos..."<<endl<<endl;
            pazMundial += 15;
            break;
        case 3: 
            cout<<"El capitolio vota a favor de la alianza..."<<endl<<endl;
            pazMundial += 5;
            break;
    }
    
    
    
    
    cout<<"---------------------------------------"<<endl;
    //ACTO CUATRO
    cout<<"Mientras que las semanas de arduo trabajo avanzan en pos de la paz, comienzan a percibir sombras inesperadas entre los aliados que se ofrecieron a ayudar. En medio dela tensión global, se dan cuenta de que algunos de tus supuestos aliados no estaban motivados por un deseo genuino de preservar la paz, sino más bien por intereses "<<endl<<"egoístas y la oportunidad de obtener ventajas estratégicas y económicas. Se rompe la alianza"<<endl<<endl;
    //DECISION CUATRO
    cout<<"----Estado actual de la Paz Mundial: "<<pazMundial<<"%----"<<endl<<endl;
    
    do{
        cout<<"Que sigue ahora?"<<endl;
        
        cout<<"1. Buscar otros aliados"<<endl;
        cout<<"2. Enviar unidades espias"<<endl;
        cout<<"3. Hacer un nuevo tratado de alianza"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        if(decision>3 || decision<1){
            cout<<endl<<"En la valentía y en la adversidad, descubrimos realmente quiénes somos. Toma una decision..."<<endl<<endl;
        }
    }while(decision>3 || decision<1);
    cout<<endl;
    
    switch(decision){
        case 1: 
            cout<<"Se han quedado sin aliados, estas solo..."<<endl<<endl;
            pazMundial -= 30;
            break;
        case 2: 
            cout<<"Han sido descubiertas por las demas potencias..."<<endl<<endl;
            pazMundial -= 50;
            break;
        case 3: 
            cout<<"Te han rechazado, estan solos..."<<endl<<endl;
            pazMundial -= 30;
            break;
    }
    
    
    
    
    cout<<"---------------------------------------"<<endl;
    //ACTO CINCO
    cout<<"Lamentablemente, a pesar de tus mejores esfuerzos, las negociaciones no logran resolver las profundas divisiones entre las potencias mundiales. La conferencia de "<<endl<<"emergencia se convierte en un escenario de desacuerdos intransigentes y acusaciones mutuas. Las conversaciones se rompen, y las potencias, en lugar de retroceder, "<<endl<<"intensifican sus posturas agresivas."<<endl<<endl;
    //DECISION CINCO
    cout<<"----Estado actual de la Paz Mundial: "<<pazMundial<<"%----"<<endl<<endl;
    
    do{
        cout<<"Hora de la guerra?"<<endl;
        
        cout<<"1. Lanzar ataque nuclear"<<endl;
        cout<<"2. Desplegar tropas de manera estrategica"<<endl;
        cout<<"3. Esperar movimiento del bando enemigo"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        if(decision>3 || decision<1){
            cout<<endl<<"Ser valiente no significa no tener miedo, sino enfrentar el miedo a pesar de ello. Decide..."<<endl<<endl;
        }
    }while(decision>3 || decision<1);
    cout<<endl;
    
    switch(decision){
        case 1: 
            cout<<"Las demas potencias responden igual..."<<endl<<endl;
            pazMundial -= 100;
            break;
        case 2: 
            cout<<"El enemigo se despliega de la misma manera por tus fronteras..."<<endl<<endl;
            pazMundial -= 50;
            break;
        case 3: 
            cout<<"Se aproximan misiles nucleares..."<<endl<<endl;
            pazMundial -= 100;
            break;
    }
    
    
    
    
    cout<<"---------------------------------------"<<endl;
    //ACTO SEIS
    cout<<"En un giro devastador de los acontecimientos, la guerra estalla en multiples frentes simultáneamente. Las armas nucleares, que una vez se consideraban como último "<<endl<<"recurso, son desplegadas en medio del caos y la desesperación. Las ciudades más importantes del mundo quedan reducidas a escombros y cenizas en cuestión de minutos."<<endl<<endl;
    //DECISION SEIS
    cout<<"----Estado actual de la Paz Mundial: "<<pazMundial<<"%----"<<endl<<endl;
    
    do{
        cout<<"Es el final?"<<endl;
        
        cout<<"1. Ir con nuestra familia y esperar el final"<<endl;
        cout<<"2. Dar comunicado a la nacion por television"<<endl;
        cout<<"3. Suicidarte"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        if(decision>3 || decision<1){
            cout<<endl<<"Aprender de la derrota es el primer paso hacia la verdadera maestría en el arte de la guerra..."<<endl<<endl;
        }
    }while(decision>3 || decision<1);
    cout<<endl;
    pazMundial -= 100;
    cout<<"----Estado actual de la Paz Mundial: No existe Paz Mundial----"<<endl;
    
    
    
    cout<<"---------------------------------------"<<endl;
    //FINAL
    cout<<"Todo concluye con un sombrio silencio que se extiende por todo el planeta, mientras la esperanza y la civilización misma se desvanecen en la oscuridad de la guerra. "<<endl<<"La aniquilación de la humanidad es un recordatorio trágico de las consecuencias de la falta de diálogo, comprensión y cooperación en un mundo cada vez más "<<endl<<"interconectado."<<endl<<endl;
    cout<<"---------------------------------------"<<endl;
    //FRASE PARA TERMINAR EL JUEGO
    cout<<"''En la oscuridad de la derrota, a menudo se enciende la chispa que conduce hacia la luz de la superación.''"<<endl;
    cout<<"El Arte de la Guerra"<<endl;
    cout<<"Sun Tzu"<<endl<<endl<<endl;
    cout<<"F I N";
    
    return 0;
}



