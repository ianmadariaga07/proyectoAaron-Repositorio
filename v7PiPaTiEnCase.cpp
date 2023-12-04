#include <iostream>
#include <stdlib.h> 
#include <time.h>

using namespace std;

//· El menú principal debe de contar con por lo menos 4 acciones diferentes y una opción para terminar el programa.  
//· La historia debe de tener por lo menos 5 puntos de interacción con 3 posibles decisiones del usuario
//· El usuario debe de contar con un elemento recolectable que puede ser: vida, dinero, etc.

//METER LA HISTORIA AL INICIO DEL JUEGO
//YA AGREGAMOS EL MINIJUEGO, AGREGAR INDICACIONES DEL MISMO 
//AGREGAR MINIJUEGO A INSTRUCCIONES

//PONEMOS LAS FUNCIONES PARA QUE EL COMPILADOR LAS RECONOZCA
int aleatorio(int min, int max);
string eleccion(int jugada);

int main(){
    char respuesta = 'N'; //Para iniciar juego
    int decision = -1;    //Guardamos la decision del usuario
    int pazMundial = 100; //Contador de paz mundial
    
    //Declaramos  variables del minijuego
    int jugador = 0;
    int pc = 0;
    int triunfos = 0;
    int perdidas = 0;
   
   
    cout<<endl<<"L I N E A   R O J A"<<endl<<endl;
    cout<<"---------------------------------------"<<endl;
    
    //AGREGAMOS MENU PRINCIPAL 
    
    do{
        cout<<"MENU PRINCIPAL"<<endl<<endl;
        cout<<"1. Iniciar juego"<<endl;
        cout<<"2. Minijuego"<<endl;
        cout<<"3. Instrucciones"<<endl;
        cout<<"4. Historia"<<endl;
        cout<<"5. Informacion"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"Ingresa el numero de tu respuesta: ";
        cin>>decision;
        
        cout<<endl<<endl;
        switch(decision){
            case 1: //INICIO DEL JUEGO
                cout<<"Iniciando juego..."<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = 1;
                break;
            case 2: //MINIJUEGO
                //Hacer que un numero mal ingresado te de la oportunidad de elegir otra vez
                //Preguntar al usuario si quiere regresar al menu principal 
                //cout<<" "<<endl<<endl;
                    
                    cout<<"---------------------------------------"<<endl;
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
                        cout<<"El otro presidente ha expresado su enojo hacia ti porque le ganaste, ahora ha activado sus misiles nucleares y se dirigen hacia todo el mundo. Se acabo..."<<endl<<endl;
                    }else if(triunfos<perdidas){
                        cout<<"---------------------------------------"<<endl;
                        cout<<"Ante tu creciente frustracion con el por perder, decides mandar todo al carajo y activar tu maletin nuclear. Se acabo..."<<endl<<endl<<endl;
                        cout<<"Estamos regresando al menu principal..."<<endl<<endl;
                    }
                
                decision = -1;
                break;
                
            case 3: //INSTRUCCIONES
                cout<<"---------------------------------------"<<endl;
                cout<<"INSTRUCCIONES"<<endl<<endl;
                cout<<"Bienvenido a LINEA ROJA, un juego que sumerge a los jugadores en una trama de tensión geopolítica, exigiendo decisiones astutas para evitar el colapso de la civilización humana. A continuacion te proporcionamos algunas pautas cruciales para garantizar una ejecucion optima del programa:"<<endl<<endl;
                cout<<"ACERCA DEL MINIJUEGO: Una vez que comiences el minijuego, no podrás regresar al menú principal hasta que se complete. Ten en cuenta que, si ingresas un número incorrecto, se considerará que no seleccionaste ninguna opción y, por lo tanto, perderás ese combate."<<endl<<endl;
                cout<<"PAZ MUNDIAL: Al empezar el juego, tendrás una barra de progreso llamada PAZ MUNDIAL que cambiará según las decisiones que tomes a lo largo de la historia. No se especificará el valor asignado a cada decisión para evitar influenciar tus elecciones, así que deberás ser cauteloso al hacer tus selecciones."<<endl<<endl;
                cout<<"ENTRADA: Asegurate de ingresar correctamente los caracteres o numeros indicados. Cualquier error podria afectar el desarrollo adecuado del juego."<<endl<<endl;
                cout<<"CONSIDERACIONES: Ten en cuenta que algunos caracteres especiales pueden no mostrarse correctamente segun la terminal en la que se ejecute el juego. Se recomienda el uso de un compilador online para garantizar una experiencia sin contratiempos."<<endl<<endl;
                cout<<"MANEJO DE ERRORES: Si el compilador falla, simplemente vuelve a ejecutar el programa. Este paso puede resolver problemas temporales y garantizar un funcionamiento suave."<<endl<<endl;
                cout<<"PANTALLA: Para una experiencia de juego optima y una mejor lectura de los comentarios, se aconseja ejecutar el juego en una pantalla grande dentro de un dispositivo de computacion."<<endl<<endl;
                cout<<"CONTEXTO: Lee la historia proporcionada para obtener un contexto mas amplio del juego. Esto te ayudara a tomar decisiones mas informadas a lo largo de la trama."<<endl<<endl;
                cout<<"RECUERDA: Oculta tus intenciones, manten en secreto tus movimientos. Preparate para sumergirte en esta emocionante experiencia de toma de decisiones estrategicas. Vamos a jugar."<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = -1;
                break;
            case 4: //HISTORIA
                cout<<"---------------------------------------"<<endl;
                cout<<"HISTORIA"<<endl<<endl;
                cout<<"En un mundo asolado por la guerra, las ciudades yacen en escombros, la civilizacion ha desaparecido, y la esperanza se ha desvanecido como el humo que se eleva de los restos. Encabezas una nacion que antano era prospera, ahora sumida en la desolacion. Has perdido la confianza en la capacidad de la humanidad para aprender de sus errores. Tu mente se sumerge en recuerdos de los dias anteriores a la catastrofe."<<endl<<endl;
                cout<<"Recuerdas la intensidad de las negociaciones, la firmeza de tus decisiones y la esperanza compartida por todos en la posibilidad de hallar una solucion pacifica. Te atormenta pensar en como, a pesar de tus mejores esfuerzos, las artimanias egoistas y los intereses ocultos de algunos aliados destruyeron la alianza que podria haber evitado esta tragedia."<<endl<<endl;
                cout<<"Los vestigios de la guerra nuclear se extienden por el horizonte, recordandote la fragilidad de la paz y la imperiosa necesidad de comprension y cooperacion en un mundo interconectado. Te preguntas si, en algun momento, existio una oportunidad real de evitar este desastre, si tus decisiones podrian haber alterado el curso de la historia. Pero ya no hay retorno, cierto?"<<endl<<endl;
                cout<<"Ahora, el destino de la humanidad descansa en tus manos; toma las decisiones correctas para intentar frenar el colapso de la civilizacion humana y detener el inicio de una tercera guerra mundial. El poder esta en tus manos."<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = -1;
                break;
            case 5: //INFORMACION
                cout<<"---------------------------------------"<<endl;
                cout<<"INFORMACION"<<endl<<endl;
                cout<<"ALUMNO: Ian Alexander Tranquilino Madariaga"<<endl<<endl;
                cout<<"ESCUELA: Universidad Nacional Autonoma de Mexico - Facultad de Estudios Superiores Aragon "<<endl<<endl;
                cout<<"LICENCIATURA: Ing. En Computacion"<<endl<<endl;
                cout<<"MATERIA: Computadoras Y Programacion"<<endl<<endl;
                cout<<"GRUPO: 1158"<<endl<<endl;
                cout<<"DOCENTE: Jorge Luis Candelario Alavez"<<endl<<endl;
                cout<<"TITULO DEL TRABAJO: LINEA ROJA"<<endl<<endl;
                cout<<"FECHA: Viernes 24 de Noviembre de 2023"<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
                decision = -1;
                break;
            case 6: //SALIENDO DEL JUEGO
                cout<<"Saliendo del juego..."<<endl<<endl;
                exit(0);
            default:
                cout<<"Respuesta no valida. Intente de nuevo"<<endl<<endl;
                cout<<"---------------------------------------"<<endl;
        }
        
    }while(decision>5 || decision<1);
    
    //INICIO
    cout<<"INICIO:"<<endl;
    cout<<"Bienvenido, te acaban de elegir como presidente de una potencia mundial, te encuentras en una situacion delicada, con la amenaza inminente de una tercera guerra mundial. La tension con otras potencias está en su punto maximo, y cada una de tus decisiones podria tener consecuencias cruciales. El mundo está observando y esperando, con la esperanza de que puedas encontrar una solucion pacifica para evitar el desastre."<<endl<<endl;
    
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
    cout<<"La mañana comienza con una reunion urgente en la Casa Blanca. Tu equipo de asesores te presenta informes detallados sobre la situacion actual: disputas territoriales,conflictos ideologicos y desacuerdos comerciales que han llevado a un estado de tension global. Todos estan ansiosos por saber como planeas abordar la crisis y evitar una escalada hacia la guerra."<<endl<<endl;
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
            cout<<endl<<"No hay mayor desafio que conquistarse a uno mismo; la valentia comienza en el espejo. Ahora decide..."<<endl<<endl;
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
            cout<<endl<<"Aquel que se conoce a si mismo y conoce a su enemigo no sera puesto en peligro en cien batallas. Toma una decision..."<<endl<<endl;
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
    cout<<"A medida que las tensiones alcanzan su punto maximo y la amenaza de guerra se cierne sobre el mundo, recibes una oferta sorprendente de un pais que hasta ahora se habia mantenido al margen de los conflictos. Una nacion pacífica y neutral, conocida por su diplomacia efectiva y su compromiso con la resolucion de conflictos, se ofrece como mediadora."<<endl<<endl;
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
            cout<<endl<<"Un lider sabio valora no solo su propio poder, sino tambien la fuerza de sus aliados. Responde esa oferta..."<<endl<<endl;
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
    cout<<"Mientras que las semanas de arduo trabajo avanzan en pos de la paz, comienzan a percibir sombras inesperadas entre los aliados que se ofrecieron a ayudar. En medio dela tension global, se dan cuenta de que algunos de tus supuestos aliados no estaban motivados por un deseo genuino de preservar la paz, sino mas bien por intereses egoistas y la oportunidad de obtener ventajas estrategicas y economicas. Se rompe la alianza"<<endl<<endl;
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
            cout<<endl<<"En la valentia y en la adversidad, descubrimos realmente quienes somos. Toma una decision..."<<endl<<endl;
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
    cout<<"Lamentablemente, a pesar de tus mejores esfuerzos, las negociaciones no logran resolver las profundas divisiones entre las potencias mundiales. La conferencia de emergencia se convierte en un escenario de desacuerdos intransigentes y acusaciones mutuas. Las conversaciones se rompen, y las potencias, en lugar de retroceder, intensifican sus posturas agresivas."<<endl<<endl;
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
    cout<<"En un giro devastador de los acontecimientos, la guerra estalla en multiples frentes simultaneamente. Las armas nucleares, que una vez se consideraban como ultimo recurso, son desplegadas en medio del caos y la desesperacion. Las ciudades mas importantes del mundo quedan reducidas a escombros y cenizas en cuestion de minutos."<<endl<<endl;
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
            cout<<endl<<"Aprender de la derrota es el primer paso hacia la verdadera maestria en el arte de la guerra..."<<endl<<endl;
        }
    }while(decision>3 || decision<1);
    cout<<endl;
    pazMundial -= 100;
    cout<<"----Estado actual de la Paz Mundial: No existe Paz Mundial----"<<endl;
    
    
    
    cout<<"---------------------------------------"<<endl;
    //FINAL
    cout<<"Todo concluye con un sombrio silencio que se extiende por todo el planeta, mientras la esperanza y la civilizacion misma se desvanecen en la oscuridad de la guerra. La aniquilacion de la humanidad es un recordatorio tragico de las consecuencias de la falta de dialogo, comprension y cooperacion en un mundo cada vez mas interconectado."<<endl<<endl;
    cout<<"---------------------------------------"<<endl;
    //FRASE PARA TERMINAR EL JUEGO
    cout<<"''En la oscuridad de la derrota, a menudo se enciende la chispa que conduce hacia la luz de la superación.''"<<endl;
    cout<<"El Arte de la Guerra"<<endl;
    cout<<"Sun Tzu"<<endl<<endl<<endl;
    cout<<"F I N";
    
    return 0;
}





//FUNCIONES PARA EL MINIJUEGO
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
                



