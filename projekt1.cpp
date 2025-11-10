#include <iostream>

using namespace std;

long long silnia(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

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
	cout << "1. Silnia" << endl;
	cout << "2. Pierwsza" << endl;
        cin >> polecenie;
	if (polecenie == 1)
	{
		int n;
		cout << "Podaj liczbe: " << endl;
		cin >> n;
		cout << "Wynik: " << silnia(n) << endl;
	}
	else if (polecenie == 2)
	{
		int n;
		cout << "Podaj liczbe: ";
		cin >> n;
		cout << "Wynik: " << (czy_pierwsza(n) ? "Tak" : "Nie") << endl;
	}
    } while(polecenie != 0);
    return 0;
}
