#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double x, y;
    cin >> x;
    y = x;
    x = x * x;
    x = x * x;
    x = x * y;
    cout << fixed << setprecision(3) << x * x << endl;
}
