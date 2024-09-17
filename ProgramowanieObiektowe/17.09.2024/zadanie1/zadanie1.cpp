#include <iostream>
using namespace std;

class Prostokat {
	private:
		double szerokosc, wysokosc;
	public:
		void ustawSzerokosc(double s) { this->szerokosc = s; }
		void ustawWysokosc(double w) { this->wysokosc = w; }
		double obliczPole() { return this->szerokosc * this->wysokosc; }
};

class Trojkat {
private:
	double szerokosc, wysokosc;
public:
	void ustawSzerokosc(double s) { this->szerokosc = s; }
	void ustawWysokosc(double w) { this->wysokosc = w; }
	double obliczPole() { return (this->szerokosc * this->wysokosc) / 2; }
};

class Romb {
private:
	double szerokosc, wysokosc;
public:
	void ustawSzerokosc(double s) { this->szerokosc = s; }
	void ustawWysokosc(double w) { this->wysokosc = w; }
	double obliczPole() { return this->szerokosc * this->wysokosc; }
};


int main()
{
	double s, w;
	cout << "Zadanie 1" << "\n";
	cout << "podaj szerokosc = "; cin >> s;
	cout << "podaj wysokosc = "; cin >> w;
	Prostokat prostokat;
	Trojkat trojkat;
	Romb romb;

	prostokat.ustawSzerokosc(s);
	prostokat.ustawWysokosc(w);
	cout << "Pole prostokata = " << prostokat.obliczPole() << endl;

	trojkat.ustawSzerokosc(s);
	trojkat.ustawWysokosc(w);
	cout << "Pole trojkata = " << trojkat.obliczPole() << endl;

	romb.ustawSzerokosc(s);
	romb.ustawWysokosc(w);
	cout << "Pole rombu = " << romb.obliczPole() << endl;

	return EXIT_SUCCESS;
}
