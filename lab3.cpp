#include <iostream>
using namespace std;

class BytGeometryczny
{
    virtual void id() = 0;
};
class Figura : public BytGeometryczny
{
public:
    Figura() : pole{12} {};
    Figura(double x) : pole(x){};
    // double getter() { return pole; };
    // double setter(double x) { pole = x; };
    virtual void id()
    {
        cout << "Typ figury: "
             << "pole: " << pole << endl;
    }
    virtual ~Figura() { cout << "zniszczylem figure" << endl; }

protected:
    double pole;
};

class Kolo : public Figura
{
public:
    Kolo() {}
    Kolo(double R) : Figura{3.14 * R * R} {};
    void id() override
    {
        cout << "Typ figury: Kolo "
             << "pole: " << pole << endl;
    }
    virtual ~Kolo() { cout << "Zniszczylem kolo " << endl; }
};

class Kwadrat : public Figura
{
public:
    Kwadrat() {}
    Kwadrat(double a) : Figura{a * a} {}
    void id() override
    {
        cout << "Typ figury: Kwadrat "
             << "pole: " << pole << endl;
    }
    virtual ~Kwadrat() { cout << "Zniszczylem kwadrat " << endl; }
};
void id(Figura& fig)
{
    fig.id();
}
class WektorFigur
{
public:
    WektorFigur() { tab = new Figura[1000]; }

    void push(const Figura& fig)
    {
        tab[licznik] = fig;
        licznik++;
    }
    Figura* operator[](int index)
    {
        if (index < licznik) {
            return &tab[index];
        }
        else {
            return nullptr;
        }
    };

    int     licznik = 0;
    Figura* tab;
};

int main()
{}
