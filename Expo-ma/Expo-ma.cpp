#include <iostream>
using namespace std;

int main()
{
    int opc;
    char opcd, opcv;
    int r = 1; 

    while (r == 1)
    {
        cout << "-----Bienvenido al programa-----" << endl;
        cout << "Elija una de las siguientes opciones: " << endl;
        cout << "1. Deportes" << endl;
        cout << "2. Videojuegos" << endl;
        cout << "3. Creditos" << endl;
        cin >> opc;

        system("cls");
        switch (opc)
        {
        case 1:
            cout << "Elija uno de los siguientes deportes: " << endl;
            cout << "a. Futbol" << endl;
            cout << "b. Basketbol" << endl;
            cout << "c. Tenis " << endl;
            cout << "d. Boxeo" << endl;
            cout << "e. Natacion" << endl;
            cout << "f. Ciclisimo" << endl;
            cout << "g. Gimnasia ritmica" << endl;
            cout << "h. Atletismo" << endl;
            cout << "i. voleibol" << endl;
            cout << "j. Balonmano" << endl;
            cout << "k. taekwondo" << endl;
            cout << "l. Beisbol" << endl;
            cin >> opcd;
            system("cls");

            if (opcd == 'a') {
                cout << "Es un juego en el que participan dos equipos compuestos\n";
                cout << "por once jugadores cada uno. Su objetivo es hacer entrar\n";
                cout << "un balon en la porteria del equipo contrario y marcar un gol.\n";
            }
            else if (opcd == 'b') {
                cout << "Es un deporte en el cual compiten dos equipos de cinco jugadores\n";
                cout << "cada uno. El objetivo es introducir la balon en el aro (canasta)\n";
                cout << "del equipo contrario, impidiendo a los jugadores contrincantes\n";
                cout << "encestar en la propia.\n";
            }
            else if (opcd == 'c') {
                cout << "Se disputa entre dos jugadores o entre dos parejas jugando con\n";
                cout << "raquetas y pelotas, consiste en golpear la pelota despues de un\n";
                cout << "rebote o antes que rebote con la raqueta para que vaya de un lado\n";
                cout << "al otro del campo pasando por encima de la red, intentando que el rival \n";
                cout << "no consiga devolverla.";
            }
            else if (opcd == 'd') {
                cout << "Deporte en el que dos personas combaten entre si, unicamente con sus\n";
                cout << "punos, ademas de evitar los golpes del contricante, gana el que este menos\n";
                cout << "golpeado durante 12 o 10 rounds de tres minutos de duracion cada uno, se rinda\n";
                cout << "o sea noqueado.\n";
            }
            else if (opcd == 'e') {
                cout << "Deporte que consiste en trasladarse de un lugar al otro en el agua sin que\n";
                cout << "la persona toque el suelo. La natacion puede practicarse en piscina o en aguas\n";
                cout << "abiertas.\n";
            }
            else if (opcd == 'f') {
                cout << "Deporte que se desarrolla sobre una bicicleta, existen diferentes modalidades\n";
                cout << "o especialidades de ciclismo. En general, consiste en tratar de recorrer una\n";
                cout << "cierta distancia en el menor tiempo posible.\n";
            }
            else if (opcd == 'g') {
                cout << "Deporte olimpico en el que se combinan elementos de la danza, el teatro y la\n";
                cout << "gimnasia, consiste en la realizacion de una coreografia con acompanamiento musical,\n";
                cout << "individual o por conjuntos (cinco o seis gimnastas). \n";
            }
            else if (opcd == 'h') {
                cout << "Deporte que contiene un conjunto de disciplinas agrupadas en carreras, saltos,\n";
                cout << "lanzamientos, pruebas combinadas y marcha. Consiste en superar el rendimiento de los\n";
                cout << "adversarios en velocidad o en resistencia, en distancia o en altura.\n";
            }
            else if (opcd == 'i') {
                cout << "Deporte donde dos equipos se enfrentan sobre un terreno de juego liso\n";
                cout << "separados por una red central, consiste en pasar el balon de un lado de\n";
                cout << "la red a otro y evitar que caiga al suelo.\n";
            }
            else if (opcd == 'j') {
                cout << "Deporte donde dos equipos se enfrentan, el objetivo del juego es desplazar \n";
                cout << "una pelota a traves del campo, valiendose fundamentalmente de las manos, para\n";
                cout << "intentar introducirla dentro de la porteria contraria el cual se le denomina como""gol""\n";
            }
            else if (opcd == 'k') {
                cout << "Deprote el cual es un estilo de combate que utiliza unicamente los pies, las manos y\n";
                cout << "otras partes del cuerpo, consiste en ganar puntos asestando patadas a la cabeza y el\n";
                cout << "cuerpo del oponente\n";
            }
            else if (opcd == 'l') {
                cout << "Deporte en donde dos equipos se enfrentan, se juega con un bate, una pelota y tiene\n";
                cout << "lugar al aire libre, Consiste en batear a esa pelota con el bate para ponerla en juego,\n";
                cout << "mientras, el jugador que bateó corre por el campo con la mision de lograr varias bases hasta\n";
                cout << "llegar a dar la vuelta completa y regresar al lugar desde donde dio el golpe.\n";
            }

            else {
                cout << "Opcion invalida\n"; 
                cout << "Ingrese una opcion de las que aparece en la pantalla\n"; 
            }
            break;

        case 2:
            cout << "Elija uno de los siguientes generos de videojuegos: " << endl;
            cout << "a. Accion" << endl;
            cout << "b. Aventura" << endl;
            cout << "c. Arcade" << endl;
            cout << "d. Deportes" << endl;
            cout << "e. Estrategia" << endl;
            cout << "f. Simulacion" << endl;
            cout << "g. Juegos de mesa" << endl;
            cout << "h. Juegos musicales" << endl;
            cout << "i. Terror" << endl;
            cin >> opcv;
            system("cls");


            if (opcv == 'a') {
                cout << "Se caracteriza por el frenetismo y una gran inmersion. Implica realizar alguna accion repetitiva" << endl;
                cout << "como pulsar mucho ciertas combinaciones de botones para realizar un movimiento." << endl;
                cout << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* God of war: Ragnarok" << endl;
                cout << "* Call of Duty: Black Ops III" << endl;
                cout << "* Star Wars jedi: " << endl;


            }
            else if (opcv == 'b') {
                cout << "Se caracteriza por la investigacion, exploracion, la solucion de rompecavezas, interaccion con personajes" << endl;
                cout << "de videojuegos y un enfoque en el relato en vez de desafios basados en el reflejos " << endl;
                cout << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "The legend of zelda" << endl;
                cout << "Uncharted" << endl;
                cout << "Assassin´s Creed" << endl;
            }
            else if (opcv == 'c') {
                cout << "Se trata de juegos cencillos que manejan elmentos de poca complejidad como una aventura, laberintos o plataformas" << endl;
                cout << "No suelen ser demasiado largos y es necesario atravesar diferente pantallas para avanzar." << endl;
                cout << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* Super mario bros" << endl;
                cout << "* Donkey Kong" << endl;
                cout << "* Pac-man" << endl;
            }
            else if (opcv == 'd') {
                cout << "Se trata de juegos basados en deportes reales como futbol, boxeo, golf, baloncesto, etc." << endl;
                cout << "suelen exigir habilidad y precision" << endl;
                cout << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* FIFA" << endl;
                cout << "* NBA 2K" << endl;
                cout << "* Project Cars 3" << endl;
            }
            else if (opcv == 'e') {
                cout << "Son aquellos en los que el juego se desarrolla en un tablero, generalmente con posiciones geométricas," << endl;
                cout << "en las cuales se distribuyen las fichas de cada jugador." << endl;
                cout << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* XCOM 2" << endl;
                cout << "* StarCraft" << endl;
                cout << "* Civilization VI" << endl;
            }
            else if (opcv == 'f') {
                cout << "El juego de simulacion reposa sobre procedimientos más formalizados y relaciones mas estructuradas que el " << endl;
                cout << "juego de rol. Algunos juegos de simulacion pueden estar muy cercanos a los juegos de rol, otros pueden " << endl;
                cout << "estar muy alejados asemejandose más a juegos de mesa, con reglas precisas y bastante rigidas." << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* XCOM 2" << endl;
                cout << "* StarCraft" << endl;
                cout << "* Civilization VI" << endl;
            }
            else if (opcv == 'g') {
                cout << "Son los juegos que se juegan sobre un tablero, como los juegos de la familia del ajedrez " << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* Mahjong" << endl;
                cout << "* Ajedrez" << endl;
                cout << "* Parchis" << endl;
            }
            else if (opcv == 'h') {
                cout << "Los juegos musicales en videojuegos representan aquellos que destacan por el uso que" << endl;
                cout << "hacen de la musica, siendo entonces el principal protagonista en los" << endl;
                cout << "mismos ante el resto de las mecanicas en el modo de juego." << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* Osu" << endl;
                cout << "* Just dance" << endl;
                cout << "* Tetris" << endl;
            }
            else if (opcv == 'i') {
                cout << "son un genero de videojuegos, que mediante la ficcion a traes de elementos y experiencias de terror, pretenden asustar al jugador." << endl;
                cout << "Estan diseniados con situaciones intimidantes, entornos tetricos, enemigos monstruosos y muy daninos," << endl;
                cout << "ademas de sonidos, musica e imagenes inquietantes." << endl;
                cout << "Algunos juegos de este genero son: " << endl;
                cout << "* Five nights at freddy's" << endl;
                cout << "* Resident evil 2" << endl;
                cout << "* Soma" << endl;
            }
            else {
                cout << "Opcion invalida\n";
                cout << "Ingrese una opcion de las que aparece en la pantalla\n";
            }
            break;
        case 3:
            cout << "-----Creditos-----" << endl;
            cout << "Christian Gerardo Mendez Chaclan - 202308062" << endl;
            cout << "Javier Alejandro Sontay Cabrera - 202308078" << endl;

        default: 
            cout << "Opcion invalida\n"; 
            break;
        }
        cout << endl; 
        cout << "Desea elegir otra opcion?: \n"; 
        cout << "1. SI\n"; 
        cout << "2. NO\n"; 
        cin >> r; 

        system("cls");
    }
    cout << "Gracias por utilizar nuestro programa, se le agradece la preferencia\n";
    return 0; 
}