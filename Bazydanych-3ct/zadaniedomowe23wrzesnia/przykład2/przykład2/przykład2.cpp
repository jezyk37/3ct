#include <iostream>
#include <string>
using namespace std;

class Samochod {
private:
    string marka;
    string model;
    int predkosc;

public:
    Samochod(string m, string mod) {
        marka = m;
        model = mod;
        predkosc = 0;
    }

    string getMarka() {
        return marka;
    }

    void setMarka(string m) {
        marka = m;
    }

    string getModel() {
        return model;
    }

    void setModel(string mod) {
        model = mod;
    }

    void przyspiesz(int wartosc) {
        if (wartosc > 0) {
            predkosc += wartosc;
            cout << "Samochod przyspiesza do " << predkosc << " km/h" << endl;
        }
    }

    void zwolnij(int wartosc) {
        if (wartosc > 0 && predkosc - wartosc >= 0) {
            predkosc -= wartosc;
            cout << "Samochod zwalnia do " << predkosc << " km/h" << endl;
        }
        else {
            cout << "Nie mozna zwolnic o podana wartosc." << endl;
        }
    }

    int getPredkosc() {
        return predkosc;
    }
};

int main() {
    Samochod auto1("Toyota", "Corolla");

    auto1.setMarka("Honda");
    auto1.setModel("Civic");

    auto1.przyspiesz(60);
    auto1.zwolnij(30);

    cout << "Obecna predkosc: " << auto1.getPredkosc() << " km/h" << endl;

    return 0;
}
