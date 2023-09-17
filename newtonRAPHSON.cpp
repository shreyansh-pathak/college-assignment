#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x*x*x-2*x-3;
}

double df(double x) {
    return 3*x*x-2;
}

int main() {
    
    double x0 = -10;
    double x = x0;

    const int MAX_ITER = 10000;

    for (int i=0; i<MAX_ITER; i++) {
        double eps = f(x);
        if (abs(eps) <= 0.000001) break;

        x = x - f(x) / df(x);

        cout << "Eps = " << eps << endl;
        cout << "x = " << x << endl;
    }

    cout << "The solution is " << x << endl;

    return 0;
}