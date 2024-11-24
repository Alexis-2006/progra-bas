/*Juego de Preguntas y Respuestas: Crea un juego de preguntas y respuestas donde el programa haga preguntas
 al usuario y luego evalúe las respuestas. Mantén un contador de respuestas correctas e incorrectas.*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables para llevar el conteo de respuestas correctas e incorrectas
    int correctas = 0;
    int incorrectas = 0;
    string respuesta;

    // Pregunta 1
    cout << "Pregunta 1: ¿Cuál es la capital de Francia?" << endl;
    cout << "a) Berlín\nb) Madrid\nc) París\nd) Roma" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;

    if (respuesta == "c" || respuesta == "C") {
        cout << "Correcto!" << endl;
        correctas++;
    } else {
        cout << "Incorrecto, la respuesta correcta es 'c' (París)." << endl;
        incorrectas++;
    }

    // Pregunta 2
    cout << "\nPregunta 2: ¿Cuál es el planeta más grande del sistema solar?" << endl;
    cout << "a) Marte\nb) Júpiter\nc) Tierra\nd) Saturno" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;

    if (respuesta == "b" || respuesta == "B") {
        cout << "Correcto!" << endl;
        correctas++;
    } else {
        cout << "Incorrecto, la respuesta correcta es 'b' (Júpiter)." << endl;
        incorrectas++;
    }

    // Pregunta 3
    cout << "\nPregunta 3: ¿Cuántos continentes hay en el mundo?" << endl;
    cout << "a) 5\nb) 6\nc) 7\nd) 8" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;

    if (respuesta == "c" || respuesta == "C") {
        cout << "Correcto!" << endl;
        correctas++;
    } else {
        cout << "Incorrecto, la respuesta correcta es 'c' (7)." << endl;
        incorrectas++;
    }

    // Pregunta 4
    cout << "\nPregunta 4: ¿Quién escribió 'Don Quijote de la Mancha'?" << endl;
    cout << "a) Gabriel García Márquez\nb) Miguel de Cervantes\nc) William Shakespeare\nd) Pablo Neruda" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;

    if (respuesta == "b" || respuesta == "B") {
        cout << "Correcto!" << endl;
        correctas++;
    } else {
        cout << "Incorrecto, la respuesta correcta es 'b' (Miguel de Cervantes)." << endl;
        incorrectas++;
    }

    // Mostrar resultados
    cout << "\nJuego terminado!" << endl;
    cout << "Respuestas correctas: " << correctas << endl;
    cout << "Respuestas incorrectas: " << incorrectas << endl;

    return 0;
}
