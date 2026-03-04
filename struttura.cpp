#include <iostream>
#include <cmath>

#define PI 3.14159  // costante
#define SQUARE(x) ((x) * (x))   // macro per calcolare il quadrato di un numero

using namespace std;

const double globalFactor = 2.5;  // costante globale
int globalCounter = 0;  // variabile globale

double areaCerchio (double r);
void stampaMessaggio ();
int somma (int a, int b);

int main() {

    stampaMessaggio();

    double r = 5.0;
    cout << "L'area del cerchio con raggio " << r << " è: " << areaCerchio(r) << endl;

    
    cout << "La somma di " << 3 << " e " << 4 << " è: " << somma(3, 4) << endl;

    cout << "Global factor: " << globalFactor << endl;
    cout << "Global counter: " << globalCounter << endl;

    return 0;
}

double areaCerchio (double r) {
    return PI * SQUARE(r);  // utilizzo della macro SQUARE
}

void stampaMessaggio () {
    cout << "Benvenuto nel programma di esempio in C++!" << endl;
    globalCounter++;  // incremento della variabile globale
}

int somma (int a, int b) {
    return a + b;
}