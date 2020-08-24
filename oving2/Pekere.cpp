#include <iostream> // innlesing/utskrift
#include <stdio.h>
#include <string.h>

using namespace std; // bruker standard navnerom

int main()
{
    /*
    int i = 3;
    int j = 5;
    int *p = &i ;
    int *q = &j;

    cout << "Innholdet til i: " << i << ". Adressen til i: " << &i << endl;
    cout << "Innholdet til j: " << j << ". Adressen til j: " << &j << endl;
    cout << "Innholdet til p: " << p << ". Adressen til p: " << &p << endl;
    cout << "Innholdet til q: " << q << ". Adressen til q: " << &q << endl;

    *p = 7;                          // det som p peker til (i) settes lik 7
    *q += 4;                         // det som q peker til (j) settes lik j + 4
    *q = *p + 1;                     // det som q peker på (j) settes lik det som p peker på(i) + 1
    p = q;                           // p peker nå på den samme variabelen som q (j)
    cout << *p << " " << *q << endl; // Her skrives det ut 8 8 fordi det peker på, nå er det samme som det q peker på
    */
    char *line = nullptr; // eller char *line = 0;
    strcpy(line, "Dette er en tekst");
    cout << *line;
}