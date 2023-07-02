#include <iostream>
#include "rlutil.h"
#include <cstdlib>
#include <ctime>
#include <vector>


using namespace std;


int main() {

    int opcion = 1, y = -2;
    //1P
    string Nombre1P;  
    int MaxPuntajeP1 = 0;
    int LanzamientosP1 = 0;

    do {

        rlutil::setColor(rlutil::COLOR::WHITE); // COLOR TEXTO MENU

        rlutil::hidecursor(); // Sin Cursor

        rlutil::cls(); //Limpiar Consola
        
        rlutil::setColor(rlutil::COLOR::RED); // Titulo
        cout << "                                                                                                                        ";
        cout << "          xxxxxxx    x     x    x    xx      x   x    xxxxxxx    xx      x    xxxxxxx    xxxxxxx    xxxxxxx             ";
        cout << "          x     x    x     x         x x     x        x          x x     x       x       x     x    x                   ";
        cout << "          x     x    x     x    x    x  x    x   x    x          x  x    x       x       x     x    x                   ";
        cout << "          x     x    x     x    x    x   x   x   x    xxxxxxx    x   x   x       x       x     x    xxxxxxx             ";
        cout << "          x     x    x     x    x    x    x  x   x    x          x    x  x       x       x     x          x             ";
        cout << "          x    xx    x     x    x    x     x x   x    x          x     x x       x       x     x          x             ";
        cout << "          xxxxxxxxx  xxxxxxx    x    x      xx   x    xxxxxxx    x      xx       x       xxxxxxx    xxxxxxx             ";
        cout << "                                                                                                                        ";
        




        rlutil::setColor(y == -2 ? rlutil::COLOR::GREEN : rlutil::COLOR::WHITE);
        rlutil::locate(48, 13);
        cout << "MODO UN JUGADOR" << endl;

        rlutil::setColor(rlutil::COLOR::WHITE);
        rlutil::locate(46, 14);

        rlutil::setColor(y == 0 ? rlutil::COLOR::GREEN : rlutil::COLOR::WHITE);
        rlutil::locate(48, 15);
        cout << "MODO DOS JUGADORES" << endl;

        rlutil::setColor(rlutil::COLOR::WHITE);
        rlutil::locate(46, 16);

        rlutil::setColor(y == 2 ? rlutil::COLOR::GREEN : rlutil::COLOR::WHITE);
        rlutil::locate(48, 17);
        cout << "PUNTUACION MAS ALTA" << endl;

        rlutil::setColor(rlutil::COLOR::WHITE);
        rlutil::locate(46, 18);

        rlutil::setColor(y == 4 ? rlutil::COLOR::GREEN : rlutil::COLOR::WHITE);
        rlutil::locate(48, 19);
        cout << "COMO SE JUEGA?" << endl;

        rlutil::setColor(y == 6 ? rlutil::COLOR::GREEN : rlutil::COLOR::WHITE);
        rlutil::locate(48, 21);
        cout << "COMBINACIONES GANADORAS" << endl;

        rlutil::setColor(rlutil::COLOR::WHITE);
        rlutil::locate(46, 23);

        rlutil::setColor(y == 8 ? rlutil::COLOR::GREEN : rlutil::COLOR::WHITE);
        rlutil::locate(48, 23);
        cout << "SALIR DEL JUEGO" << endl;

        rlutil::setColor(rlutil::COLOR::LIGHTRED);
        rlutil::locate(rlutil::tcols() - 30, rlutil::trows() - 1);
        cout << "Agustin Abraham Bernal";


        rlutil::setColor(rlutil::COLOR::WHITE); // Color blanco para el mensaje de finalización

        int Key = rlutil::getkey();

        switch (Key) {

        case rlutil::KEY_UP:
            // Navegar hacia arriba
            y -= 2;
            if (y < -2) {
                y = -2;
            }
            break;
        case rlutil::KEY_DOWN:
            // Navegar hacia abajo
            y += 2;
            if (y > 8) {
                y = 8;
            }
            break;
        case rlutil::KEY_ENTER:
            // Presionar Enter
            switch (y) {
            case -2:
                // Modo un jugador
            {
                bool volverAlMenu = false; 

                while (!volverAlMenu) {
                    rlutil::cls(); // Borrar la pantalla
                    rlutil::setColor(rlutil::COLOR::CYAN);
                    rlutil::locate(45, 3);
                    cout << "QUINIENTOS MODO UN JUGADOR";
                    rlutil::setColor(rlutil::COLOR::WHITE);
                    rlutil::locate(50, 6);
                    cout << "Ingresar Nombre: ";
                    cin >> Nombre1P;

                   
                    rlutil::cls();

                /*DibujarLineas(8, 4, 106, 4, '-');
                DibujarLineas(8, 2, 106, 2, '-');
                DibujarLineas(8, 2, 8, 6, '|');
                DibujarLineas(36, 3, 36, 6, '|');
                DibujarLineas(67, 3, 67, 6, '|');
                DibujarLineas(107, 2, 107, 6, '|');

                rlutil::locate(13, 3);
                cout << "TURNO DE " << Nombre1P; // Maximo(14 Letras)
                rlutil::locate(42, 3);
                cout << "RONDA NUMERO: (10)" << endl; // Aca va la variable NumRonda
                rlutil::locate(73, 3);
                cout << "PUNTUAJE TOTAL: (3000) PUNTOS" << endl; // Aca va la variable PuntuajeTotal
                rlutil::locate(45, 5);
                cout << "LANZAMIENTO #: ";
                rlutil::locate(51, 6);
                cout << LanzamientosP1;
                rlutil::locate(74, 5);
                cout << "MAXIMO PUNTAJE DE LA RONDA" << endl; // Aca va la variable  MaxPuntajeP1
                rlutil::locate(82, 6);
                cout << MaxPuntajeP1 << " PUNTOS";
                */
                    
                
                
                //Empieza el juego ---
                
                    
               

                  //  srand(time(NULL));

                   // for (int i = 1; i <= 6; i++) {
//dibujarDado(10 * i + (rand() % 2), 2 + (rand() % 8), i);
                    //}//

                
                    




                    rlutil::setColor(rlutil::COLOR::LIGHTRED);
                    rlutil::locate(45, 30);
                    cout << "Presiona 'V' Para Volver Al Menu";

                    char key;
                    do {
                        key = rlutil::getkey();
                    } while (key != 'v' && key != 'V');

                    if (key == 'v' || key == 'V') {
                        volverAlMenu = true;
                    }
                }
            }
            break;


            case 0:
                // MODO DOS JUGADORES
                break;
            case 2:
                // MOSTRAR CALIFICACION MAXIMA
                rlutil::cls(); // Borrar la pantalla
                rlutil::locate(50, 10);
                cout << "La Puntuacion mas Alta es: ";
                rlutil::anykey();
                break;
            case 4:
                // AYUDA
                rlutil::cls(); // Borrar la pantalla
                rlutil::locate(46, 1);
                cout << "Reglamento del juego:" << endl;
                rlutil::locate(1, 4);
                cout << "El objetivo del juego es obtener al menos 500 puntos en la menor cantidad posible de rondas, o sacar una escalera en un lanzamiento." << endl;
                cout << endl;
                cout << "Una ronda esta compuesta por 3 lanzamientos. Cada lanzamiento consiste en tirar seis dados y evaluar sus valores para determinar el puntaje." << endl;
                cout << endl;
                cout << "El puntaje de un lanzamiento esta determinado por una serie de reglas que se encuentran en la seccion 'Combinaciones ganadoras'." << endl;
                cout << endl;
                cout << "El puntaje final de la ronda sera el valor maximo obtenido entre los 3 lanzamientos, con las siguientes excepciones:" << endl;
                cout << "- Si en un lanzamiento se obtiene una escalera, el jugador GANA EL PARTIDO en ese momento." << endl;
                cout << "- Si en un lanzamiento se obtiene una combinacion de 6 dados con valor 6, el puntaje de la ronda entera sera 0." << endl;

                rlutil::anykey();
                break;
            case 6:
                // COMBINACIONES GANADORAS
                rlutil::cls(); // Borrar la pantalla
                rlutil::locate(50, 1);
                cout << "Combinaciones Ganadoras:" << endl;
                //Combinaciones Ganadoras

                //1)
                rlutil::setColor(rlutil::COLOR::RED);
                cout << "\nCombinaciones:" << endl;
                cout << "------------------------------\n";
                cout << "Menos de 3 dados con valores | " << endl;
                cout << "iguales(cualquier combinacion)|" << endl;
                cout << "Ejemplo: 6, 5, 5, 2, 2, 1.|" << endl;
                rlutil::resetColor;

                //2)
                cout << "------------------------------\n";
                cout << "3 dados o mas con el mismo valor|" << endl;
                cout << "(Hasta 5 iguales) Ej:5,5,5,1,2,3|" << endl;

                //3)
                cout << "------------------------------\n";
                cout << "6 dados iguales (menos para el \n";
                cout << "numero 6)  " << endl;

                //4)
                cout << "------------------------------\n";
                cout << "Escalera (1,2,3,4,5,6)|" << endl;

                //5)
                cout << "------------------------------\n";
                cout << "Seis 6|";

                //Segundo cuadro

                //1)
                rlutil::setColor(rlutil::COLOR::GREEN);
                rlutil::locate(40, 3);
                cout << "Nombre jugada" << endl;
                rlutil::locate(40, 4);
                cout << "------------------------------" << endl;
                rlutil::locate(40, 6);
                cout << "Suma de dados";
                rlutil::resetColor;

                //2)
                rlutil::locate(40, 8);
                cout << "------------------------------" << endl;

                rlutil::locate(40, 9);
                cout << "Trio X++ (X es el numero del " << endl;
                rlutil::locate(40, 10);
                cout << "dado)" << endl;

                //3)
                rlutil::locate(40, 11);
                cout << "------------------------------" << endl;
                rlutil::locate(40, 12);
                cout << "Sexteto X (X es el numero del dado)" << endl;


                //4)
                rlutil::locate(40, 14);
                cout << "------------------------------" << endl;
                rlutil::locate(40, 15);
                cout << "Escalera" << endl;

                //5)
                rlutil::locate(40, 16);
                cout << "------------------------------" << endl;
                rlutil::locate(40, 17);
                cout << "Sexteto6- -";

                //Tercer cuadro

                //1)
                rlutil::locate(80, 3);
                cout << "Puntaje otorgado" << endl;
                rlutil::locate(80, 4);
                cout << "------------------------------" << endl;
                rlutil::locate(80, 5);
                cout << "Suma de los valores de todos los " << endl;
                rlutil::locate(80, 6);
                cout << "dados Para el ejemplo seria" << endl;
                rlutil::locate(80, 7);
                cout << "6 + 5 + 5 + 2 + 2 + 1 = 21" << endl;

                //2)

                rlutil::locate(80, 8);
                cout << "------------------------------" << endl;
                rlutil::locate(80, 9);
                cout << "X*10puntos Para el ejemplo seria" << endl;
                rlutil::locate(80, 10);
                cout << "5 * 10 = 50" << endl;

                //3)

                rlutil::locate(80, 11);
                cout << "------------------------------" << endl;
                rlutil::locate(80, 12);
                cout << "X*50 puntos " << endl;

                //4)

                rlutil::locate(80, 14);
                cout << "------------------------------" << endl;
                rlutil::locate(80, 15);
                cout << "Gana la partida en esa ronda" << endl;

                //5)

                rlutil::locate(80, 16);
                cout << "------------------------------" << endl;
                rlutil::locate(80, 17);
                cout << "Pierde todos los puntos de la ronda" << endl;
                rlutil::anykey();

                break;
            case 8:
                // SALIR DEL JUEGO
                opcion = 0; // Terminar el programa
                break;
            }
            break;
        default:
            break;
        }

    } while (opcion != 0);


    return 0;
}