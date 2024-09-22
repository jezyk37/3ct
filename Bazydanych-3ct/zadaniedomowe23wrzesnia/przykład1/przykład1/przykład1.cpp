#include <iostream>
using namespace std;

class KontoBankowe {
private:
    double saldo;

public:
    KontoBankowe(double poczatkoweSaldo) {
        saldo = poczatkoweSaldo;
    }

    void wplac(double kwota) {
        if (kwota > 0) {
            saldo += kwota;
            cout << "Wplacono: " << kwota << ". Nowe saldo: " << saldo << endl;
        }
        else {
            cout << "Kwota musi byc dodatnia!" << endl;
        }
    }

    void wyplac(double kwota) {
        if (kwota > 0 && kwota <= saldo) {
            saldo -= kwota;
            cout << "Wyplacono: " << kwota << ". Nowe saldo: " << saldo << endl;
        }
        else {
            cout << "Niepoprawna kwota!" << endl;
        }
    }

    double getSaldo() {
        return saldo;
    }
};

int main() {
    KontoBankowe konto(1000.0);
    konto.wplac(500.0);        
    konto.wyplac(200.0);     
    cout << "Koncowe saldo: " << konto.getSaldo() << endl;

    return 0;
}
