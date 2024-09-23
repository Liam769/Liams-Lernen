#include <iostream>

using namespace std;

int main() {

	cout << "digga mach mehr oder teil dein blund (m/t)?: ";
	char auswahl;
	cin >> auswahl;

	if (auswahl == 'm') {
		float m = 0;
		float t = 0;
		cout << "erstes mehr eingeben";
		cin >> m;
		cout << "\nzweites mehr eingeben";
		cin >> t;

		cout << "ergebnis" << m + t;

	}
	else {

		float m = 0;
		float t = 0;
		cout << "zahl da hin";
		cin >> m;
		cout << "\nteiler eingeben";
		cin >> t;
		cout << "ergebnis" << m / t;

	}
}