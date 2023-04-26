#include <iostream>
int Nceil(float);
int Nfloor(float);
int Nround(float);

using namespace std;
int main()
{
    float x = 5.6;

    cout << "ceil of " << x << " = " << Nceil(x) << endl;
    cout << "floor of " << x << " = " << Nfloor(x) << endl;
    cout << "round of " << x << " = " << Nround(x) << endl;

}


int Nceil(float x) {
    int t = x; //t=5

    if (x > t) {
        t++;
        return t;
    }
    else
        return t;
}

int Nfloor(float x) {

    int t = x;
    return t;
}


int Nround(float x) {

    float fHalf = Nfloor(x) + 0.5;

    if (x >= fHalf)
        return Nceil(x);
    else
        return Nfloor(x);

}


