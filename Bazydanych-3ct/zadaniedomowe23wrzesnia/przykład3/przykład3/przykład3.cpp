#include <iostream>
using namespace std;

class Prostokat {
private:
    double szerokosc;
    double wysokosc;

public:

    Prostokat(double s, double w) {
        szerokosc = s;
        wysokosc = w;
    }

    double obliczPowierzchnie() {
        return szerokosc * wysokosc;
    }

    void ustawWymiary(double s, double w) {
        szerokosc = s;
        wysokosc = w;
    }
};

int main() {
    Prostokat p(5.0, 10.0);
    cout << "Powierzchnia: " << p.obliczPowierzchnie() << endl;

    p.ustawWymiary(7.0, 12.0);
    cout << "Nowa powierzchnia: " << p.obliczPowierzchnie() << endl;

    return 0;
}

