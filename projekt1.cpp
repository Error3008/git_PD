#include <iostream>

using namespace std;

long long silnia(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
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
        cin >> polecenie;
	if (polecenie == 1)
	{
		int n;
		cout << "Podaj liczbe: " << endl;
		cin >> n;
		cout << "Wynik: " << silnia(n) << endl;
	}
    } while(polecenie != 0);
    return 0;
}
