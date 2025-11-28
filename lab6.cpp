#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long dobutock = 1;
    int i = 1;             

    if (n <= 0) {
        cout << "Bud laska, vvedit chislo bilshe 0)." << endl;
        return 1;
    }

    do {
        if (n % i == 0) {
            dobutock = dobutock * i;
        }

        i++;

    } while (i <= n);

    cout << "Dobutok vsikh dilnykiv chysla " << n << " = " << dobutock << endl;

    return 0;
}