/*
 Autor: Dominik Kaczmarek
 Grupa: Pn/P 13:15
 Temat: Laboratorium 0
 Data: 12.10.2023 r.
 */
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void wizytowka()
{
    // 1.a (iostream)
    cout << "Dominik Kaczmarek" << endl;
    cout << "ul. Stolarska 12" << endl << "84-658 Konin" << endl;
    cout << "e-mail: dominik.kaczmarek@gmail.com" << endl;
    cout << "tel: 876 567 345" << endl;
    // 1.b (stdio.h)
    printf("\nRenata Kowalska\nul.Niedzielna 3\n18-349 Gdynia\ne-mail: r.kowalska@wp.pl\ntel: 987 345 246\n");
    printf("\n\n");
}

void liczby()
{
    int a, b, c;
    // 2.a (iostream)
    cout << "Podaj wartosc pierwszej liczby:";
    cin >> a;
    cout << "Podaj wartosc drugiej liczby:";
    cin >> b;
    cout << "Podaj wartosc trzeciej liczby:";
    cin >> c;
    cout << "Suma wynosi: " << a + b + c << endl;
    cout << "Iloczyn wynosi: " << a * b * c << endl;
    cout << "Srednia wynosi: " << float (a + b + c) / 3 << endl;
    // 2.b (stdio.h)
    printf("Podaj nowa wartosc pierwszej liczby:");
    scanf("%d", &a);
    printf("Podaj nowa wartosc drugiej liczby:");
    scanf("%d", &b);
    printf("Podaj nowa wartosc trzeciej liczby:");
    scanf("%d", &c);
    printf("Suma wynosi: %d Iloczyn wynosi: %d \nSrednia wynosi: %f.", a+b+c, a*b*c, float (a+b+c)/3);
    printf("\n\n");
}

void kolo()
{
    float promien_kola;
    // 3.a (stdio.h)
    printf("Podaj promien kola:");
    scanf("%f", &promien_kola);
    printf("Obwod tego kola to: %f \nPole tego kola to: %f\n", 2*promien_kola*M_PI, M_PI*promien_kola*promien_kola);
    // 3.b (iostream)
    cout << "Podaj nowy promien kola: ";
    cin >> promien_kola;
    cout << "Obwod tego kola to: " << 2*promien_kola*M_PI << endl;
    cout << "Pole tego kola to: " << M_PI*promien_kola*promien_kola << endl;
}

int main() {
    cout << "Autor: Dominik Kaczmarek (Pn/P 13:15)\n\n";
    // zadanie 1
    wizytowka();
    // zadanie 2
    liczby();
    // zadanie 3
    kolo();
    return 0;
}
