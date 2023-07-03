#include <iostream>
#include<locale.h>
#include "klasa.h"
using namespace std;
void autor(void) {
    cout << endl;
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "Autor programu: Simon Dudek\n\n";
    for (int i = 1; i <= 120; i++) cout << "*";
    cout << "\n\n";
}
int main() {
    char a[50], b[5], c[50], d[7], e[50], f[5];
    int g;
    setlocale(LC_ALL, "");
    autor();
    cout << "Wprowadź adres miejsca zamieszkania." << endl;
    cout << "Ulica: " << endl;
    cin >> a;
    cout << "Nr domu: " << endl;
    cin >> b;
    cout << "Miejscowość: " << endl;
    cin >> c;
    cout << "Kod pocztowy: " << endl;
    cin >> d;
    cout << "Miejscowość poczty: " << endl;
    cin >> e;
    cout << "Nr mieszkania (Wpisz brak jeżeli nie posiadasz mieszkania):" << endl;
    cin >> f;
    cout << "Wprowadź liczbę mieszkańców: " << endl;
    cin >> g;
    Tbudynek budynek(a, b, c, d, e, f);
    Tbudynekmieszkalny mieszka;
    budynek << budynek;
    mieszka << mieszka;
    system("pause");
    return 0;
}