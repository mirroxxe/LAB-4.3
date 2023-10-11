#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double F(double x, double a, double b, double c) {
    if (x < 0 && b != 0)
        return a * pow(x, 2) + pow(b, 2) * x;
    else 
        if (x > 0 && b == 0)
        return (x + a) / (x + c);
    else
        return (x / c);
}

int main() {
    double x, xp, xk, dx, a = 0, b = 0, c = 1;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;
    x = xp;
    while (x <= xk) {
        double f = F(x, a, b, c);
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << f
            << " |" << endl;
        x += dx;
    }
    cout << "---------------------------" << endl;
    return 0;
}
