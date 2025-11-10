#include <iostream>

using namespace std;

bool czy_pierwsza(int n) {
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main() {
    int polecenie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
	cout << "1. Pierwsza" << endl;
	cin >> polecenie;
	if (polecenie == 1)
	{
		int n;
		cout << "Podaj liczbe: ";
		cin >> n;
		cout << "Wynik: " << (czy_pierwsza(n) ? "Tak" : "Nie") << endl;
	}
    } while(polecenie != 0);
    return 0;
}
